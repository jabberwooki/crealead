<?php
/**
 * @file
 * The primary PHP file for this theme.
 */

/**
 * Remove width and height attributes to images tags
 */
function crealead_preprocess_image(&$variables) {
  foreach (array('width', 'height') as $key) {
    unset($variables[$key]);
    unset($variables[$key]);
  }
}

/**
 * Add js to anmimate crealead key values
 */
if (drupal_is_front_page()){
  drupal_add_js(drupal_get_path('theme', 'crealead') . '/js/jquery.animateNumber.js', array(
    'type' => 'file',
    'group' => JS_THEME,
  ));
  drupal_add_js(drupal_get_path('theme', 'crealead') . '/js/animate_numbers.js', array(
    'type' => 'file',
    'group' => JS_THEME,
  ));
}
/**
 * Add js to keep same height between elements
 */
drupal_add_js(drupal_get_path('theme', 'crealead') . '/js/jquery.matchHeight-min.js', array(
  'type' => 'file',
  'group' => JS_THEME,
));
drupal_add_js(drupal_get_path('theme', 'crealead') . '/js/open-close.js', array(
  'type' => 'file',
  'group' => JS_THEME,
));
if (drupal_is_front_page()) {
  drupal_add_js(drupal_get_path('theme', 'crealead') . '/js/match-home-height.js', array(
    'type' => 'file',
    'group' => JS_THEME,
  ));
  drupal_add_js(drupal_get_path('theme', 'crealead') . '/js/diaporama_crealead.js', array(
    'type' => 'file',
    'group' => JS_THEME,
  ));
}

function crealead_form_element_label($variables) {
  $element = $variables['element'];
  // This is also used in the installer, pre-database setup.
  $t = get_t();

  // If title and required marker are both empty, output no label.
  if ((!isset($element['#title']) || $element['#title'] === '') && empty($element['#required'])) {
    return '';
  }

  // If the element is required, a required marker is appended to the label.
  $required = !empty($element['#required']) ? theme('form_required_marker', array('element' => $element)) : '';

  if(!isset($element['#title'])) {
    $title = '';
  }
  else {
    $title = filter_xss_admin($element['#title']);
  }

  $attributes = array();
  // Style the label as class option to display inline with the element.
  if ($element['#title_display'] == 'after') {
    $attributes['class'] = 'option';
  }
  // Show label only to screen readers to avoid disruption in visual flows.
  elseif ($element['#title_display'] == 'invisible') {
    $attributes['class'] = 'element-invisible';
  }

  if (!empty($element['#id'])) {
    $attributes['for'] = $element['#id'];

    // id attribute added to label tag for business sector taxonomy terms.
    if (preg_match('/business-sector/', $element['#id'])) {
      $parts = explode('-tid-', $element['#id']);
      if ($parts[1] != 'all') {
        $term = taxonomy_term_load($parts[1]);
        $attributes['id'] = 'uuid-' . $term->uuid;
      }
    }
  }

  // The leading whitespace helps visually separate fields from inline labels.
  return ' <label' . drupal_attributes($attributes) . '>' . $t('!title !required', array('!title' => $title, '!required' => $required)) . "</label>\n";
}

function crealead_form_element(&$variables) {
  $element = &$variables['element'];
  $name = !empty($element['#name']) ? $element['#name'] : FALSE;
  $type = !empty($element['#type']) ? $element['#type'] : FALSE;
  $checkbox = $type && $type === 'checkbox';
  $radio = $type && $type === 'radio';

  // Create an attributes array for the wrapping container.
  if (empty($element['#wrapper_attributes'])) {
    $element['#wrapper_attributes'] = array();
  }
  $wrapper_attributes = &$element['#wrapper_attributes'];

  // This function is invoked as theme wrapper, but the rendered form element
  // may not necessarily have been processed by form_builder().
  $element += array(
    '#title_display' => 'before',
  );

  // Add wrapper ID for 'item' type.
  if ($type && $type === 'item' && !empty($element['#markup']) && !empty($element['#id'])) {
    $wrapper_attributes['id'] = $element['#id'];
  }

  // Check for errors and set correct error class.
  if ((isset($element['#parents']) && form_get_error($element)) || (!empty($element['#required']) && bootstrap_setting('forms_required_has_error'))) {
    $wrapper_attributes['class'][] = 'has-error';
  }

  // Add necessary classes to wrapper container.
  $wrapper_attributes['class'][] = 'form-item';
  if ($name) {
    $wrapper_attributes['class'][] = 'form-item-' . drupal_html_class($name);
  }
  if ($type) {
    $wrapper_attributes['class'][] = 'form-type-' . drupal_html_class($type);
  }
  if (!empty($element['#attributes']['disabled'])) {
    $wrapper_attributes['class'][] = 'form-disabled';
  }
  if (!empty($element['#autocomplete_path']) && drupal_valid_path($element['#autocomplete_path'])) {
    $wrapper_attributes['class'][] = 'form-autocomplete';
  }

  // Checkboxes and radios do no receive the 'form-group' class, instead they
  // simply have their own classes.
  if ($checkbox || $radio) {
    $wrapper_attributes['class'][] = drupal_html_class($type);
  }
  elseif ($type && $type !== 'hidden') {
    $wrapper_attributes['class'][] = 'form-group';
  }

  // Create a render array for the form element.
  $build = array(
    '#theme_wrappers' => array('container__form_element'),
    '#attributes' => $wrapper_attributes,
  );

  // Render the label for the form element.
  $build['label'] = array(
    '#markup' => theme('form_element_label', $variables),
  );

  // Increase the label weight if it should be displayed after the element.
  if ($element['#title_display'] === 'after') {
    $build['label']['#weight'] = 10;
  }

  // Checkboxes and radios render the input element inside the label. If the
  // element is neither of those, then the input element must be rendered here.
  if (!$checkbox && !$radio) {
    $prefix = isset($element['#field_prefix']) ? $element['#field_prefix'] : '';
    $suffix = isset($element['#field_suffix']) ? $element['#field_suffix'] : '';
    if ((!empty($prefix) || !empty($suffix)) && (!empty($element['#input_group']) || !empty($element['#input_group_button']))) {
      if (!empty($element['#field_prefix'])) {
        $prefix = '<span class="input-group-' . (!empty($element['#input_group_button']) ? 'btn' : 'addon') . '">' . $prefix . '</span>';
      }
      if (!empty($element['#field_suffix'])) {
        $suffix = '<span class="input-group-' . (!empty($element['#input_group_button']) ? 'btn' : 'addon') . '">' . $suffix . '</span>';
      }

      // Add a wrapping container around the elements.
      $input_group_attributes = &_bootstrap_get_attributes($element, 'input_group_attributes');
      $input_group_attributes['class'][] = 'input-group';
      $prefix = '<div' . drupal_attributes($input_group_attributes) . '>' . $prefix;
      $suffix .= '</div>';
    }

    // Build the form element.
    $build['element'] = array(
      '#markup' => $element['#children'],
      '#prefix' => !empty($prefix) ? $prefix : NULL,
      '#suffix' => !empty($suffix) ? $suffix : NULL,
    );
  }
  else {
    $build['element'] = array(
      '#markup' => $element['#children'],
    );
  }

  // Construct the element's description markup.
  if (!empty($element['#description'])) {
    $build['description'] = array(
      '#type' => 'container',
      '#attributes' => array(
        'class' => array('help-block'),
      ),
      '#weight' => 20,
      0 => array('#markup' => filter_xss_admin($element['#description'])),
    );
  }

  // Render the form element build array.
  return drupal_render($build);
}

function crealead_preprocess_views_view_fields(&$vars) {
  if ($vars['view']->current_display == 'coes_per_point') {
    // On récupère la valeur (0 ou 1) du statut de publication du coe.
    $profil_pub_status = strip_tags($vars['fields']['field_coe_pub_status']->content);
    // Si égal à 0, on retire le lien http sur son nom.
    if (!$profil_pub_status) {
      $vars['fields']['name']->content = strip_tags($vars['fields']['name']->content, '<h4>');
    }
    // Puis on retire le champ Statut de publication de l'affichage.
    unset($vars['fields']['field_coe_pub_status']);
  }
}

function crealead_preprocess_views_view(&$vars) {
  if ($vars['view']->current_display == 'coes_per_point') {
    $header = $vars['header'];
    $parts = explode('<p class="coes-number">', $header);
    $part1 = $parts[1];
    if ($part1{0} == '1') {
      $part1 = str_replace('s</p>','</p>', $part1);
      $vars['header'] = $parts[0] . '<p class="coes-number">' . $part1;
    }
  }
}

function crealead_menu_tree__menu_coe_area($variables) {
  return '<ul class="menu nav nav-pills nav-stacked">' . $variables['tree'] . '</ul>';
}

function crealead_pager($variables) {
  $tags = $variables['tags'];
  $element = $variables['element'];

  // Modification du pager lorsqu'on est dans la page Formations.
  // Si les cases à cocher "Si vous êtes à Crealead" ne sont pas cochées on les élimine des paramètres de la requète,
  // sinon, gros bug -> quand on passe à la page suivante, elle sont toutes cochées par défaut.
  if (isset($variables['parameters']['field_training_domain_tid'])) {
    if ($variables['parameters']['field_custom_coopins_value'] == 0) {
      unset($variables['parameters']['field_custom_coopins_value']);
    }
    if ($variables['parameters']['field_custom_crealead_price_value'] == 0) {
      unset($variables['parameters']['field_custom_crealead_price_value']);
    }
    if ($variables['parameters']['field_custom_crealead_funded_value'] == 0) {
      unset($variables['parameters']['field_custom_crealead_funded_value']);
    }
  }
  $parameters = $variables['parameters'];

  $quantity = $variables['quantity'];
  global $pager_page_array, $pager_total;

  // Calculate various markers within this pager piece:
  // Middle is used to "center" pages around the current page.
  $pager_middle = ceil($quantity / 2);
  // current is the page we are currently paged to
  $pager_current = $pager_page_array[$element] + 1;
  // first is the first page listed by this pager piece (re quantity)
  $pager_first = $pager_current - $pager_middle + 1;
  // last is the last page listed by this pager piece (re quantity)
  $pager_last = $pager_current + $quantity - $pager_middle;
  // max is the maximum page number
  $pager_max = $pager_total[$element];
  // End of marker calculations.

  // Prepare for generation loop.
  $i = $pager_first;
  if ($pager_last > $pager_max) {
    // Adjust "center" if at end of query.
    $i = $i + ($pager_max - $pager_last);
    $pager_last = $pager_max;
  }
  if ($i <= 0) {
    // Adjust "center" if at start of query.
    $pager_last = $pager_last + (1 - $i);
    $i = 1;
  }
  // End of generation loop preparation.

  $li_first = theme('pager_first', array('text' => (isset($tags[0]) ? $tags[0] : t('« first')), 'element' => $element, 'parameters' => $parameters));
  $li_previous = theme('pager_previous', array('text' => (isset($tags[1]) ? $tags[1] : t('‹ previous')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_next = theme('pager_next', array('text' => (isset($tags[3]) ? $tags[3] : t('next ›')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_last = theme('pager_last', array('text' => (isset($tags[4]) ? $tags[4] : t('last »')), 'element' => $element, 'parameters' => $parameters));

  if ($pager_total[$element] > 1) {
    if ($li_first) {
      $items[] = array(
        'class' => array('pager-first'),
        'data' => $li_first,
      );
    }
    if ($li_previous) {
      $items[] = array(
        'class' => array('pager-previous'),
        'data' => $li_previous,
      );
    }

    // When there is more than one page, create the pager list.
    if ($i != $pager_max) {
      if ($i > 1) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
      }
      // Now generate the actual pager piece.
      for (; $i <= $pager_last && $i <= $pager_max; $i++) {
        if ($i < $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_previous', array('text' => $i, 'element' => $element, 'interval' => ($pager_current - $i), 'parameters' => $parameters)),
          );
        }
        if ($i == $pager_current) {
          $items[] = array(
            'class' => array('pager-current'),
            'data' => $i,
          );
        }
        if ($i > $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_next', array('text' => $i, 'element' => $element, 'interval' => ($i - $pager_current), 'parameters' => $parameters)),
          );
        }
      }
      if ($i < $pager_max) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
      }
    }
    // End generation.
    if ($li_next) {
      $items[] = array(
        'class' => array('pager-next'),
        'data' => $li_next,
      );
    }
    if ($li_last) {
      $items[] = array(
        'class' => array('pager-last'),
        'data' => $li_last,
      );
    }
    return '<h2 class="element-invisible">' . t('Pages') . '</h2>' . theme('item_list', array(
      'items' => $items,
      'attributes' => array('class' => array('pager')),
    ));
  }
}
