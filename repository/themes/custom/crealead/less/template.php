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

function crealead_preprocess_node(&$vars) {
  // If the node is of type "article" or "news", add the OG image tag.
  // Thanks to Danny Sipos from Web Omelette and his tutorial at :
  // https://www.webomelette.com/drupal-open-graph-meta-tags.
  if (in_array($vars['type'], array('article','news'))) {
    // Inside this conditional, we define and add our OG tags
    $img = field_get_items('node', $vars['node'], 'field_image');
    $img_url = file_create_url($img[0]['uri']);

    $og_image = array(
      '#tag' => 'meta',
      '#attributes' => array(
        'property' => 'og:image',
        'content' => $img_url,
      ),
    );

    drupal_add_html_head($og_image, 'og image');
  }
}


function crealead_calendar_stripe_stripe($vars) {
  $item = $vars['item'];
 //dpm($item);
  
  // IF ROOMS CALENDAR
  if ($item->entity->type == 'room_event') {
    $rooms_colors = array(
      // A distance - dev, rec, prod
      '3567' => '#3e50b4',
      '2948' => '#3e50b4',
      '3779' => '#3e50b4',
      // Bureau Don Camillo
      '2106' => '#bf0e38',
      // Bureau Le Placard
      '2107' => '#7db700',
      // Bureau URSCOOP - dev, rec, prod
      '2108' => '#ff6600',
      '2108' => '#ff6600',
      '3717' => '#ff6600',
      // Grande salle URSCOOP - dev, rec, prod
      '3569' => '#02a8f4',
      '2949' => '#02a8f4',
      '3700' => '#02a8f4',
      // Petite salle URSCOOP - dev, rec, prod
      '3570' => '#fef207',
      '2950' => '#fef207',
      '3716' => '#fef207',
      // Realis - dev, rec, prod
      '3571' => '#795549',
      '2951' => '#795549',
      '3718' => '#795549',
      // Salle Le Grand Saut
      '2109' => '#009aa0',
      // Salle Playtime
      '2110' => '#44059c',
      // Auberge Espagnole - dev, rec, prod
      '3587' => '#c65b7c',
      '2956' => '#c65b7c',
      '3932' => '#c65b7c',
    );
    
    $output = '';
    $bg_color = $rooms_colors[$item->row->field_field_room[0]['raw']['tid']];
    $color = $rooms_colors[$item->row->field_field_room[0]['raw']['tid']];
    $room_name = $item->row->field_field_room[0]['raw']['taxonomy_term']->name;
    $output .= '<div style="background-color:' . $bg_color . ';color:' . $color . '" class="stripe" title="Key: ' . $room_name . '">&nbsp;</div>' . "\n";
  }

  // ELSE
  else {
    if (empty($item->stripe) || (!count($item->stripe))) {
      return;
    }
    $output = '';
    if (is_array($item->stripe_label)) {
      foreach ($item->stripe_label as $k => $stripe_label) {
        if (!empty($item->stripe[$k]) && !empty($stripe_label)) {
          $output .= '<div style="background-color:' . $item->stripe[$k] . ';color:' . $item->stripe[$k] . '" class="stripe" title="Key: ' . $item->stripe_label[$k] . '">&nbsp;</div>' . "\n";
        }
      }
    }
  }

  return $output;
}

function crealead_preprocess_field(&$vars) {
    if (!empty($vars['element'])) {
        $name = $vars['element']['#field_name'];
        $bundle = $vars['element']['#bundle'];
        $mode = $vars['element']['#view_mode'];

        switch ($name) {
            case 'field-dg_title':
                $vars['classes_array'][] = 'nl-paragraph-title';
                break;

            case 'field_dg_photo':
                $vars['classes_array'][] = 'col-md-3 col-md-push-9';
                break;

            case 'field_dg_text':
                $vars['classes_array'][] = 'col-md-9 col-md-pull-3';
                break;

            case 'field_zoom_text':
                $vars['classes_array'][] = 'col-md-12';
                break;

            case 'field_p_link':
                $vars['classes_array'][] = 'col-md-12';
                break;

            case 'field_newsfocus_photo':
                $vars['classes_array'][] = 'col-md-3 col-md-push-9';
                break;

            case 'field_newsfocus_text':
                $vars['classes_array'][] = 'col-md-9 col-md-pull-3';

            default:
        }
    }
}
