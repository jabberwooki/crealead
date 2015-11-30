<?php

/**
 * @file
 * template.php
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

  $title = filter_xss_admin($element['#title']);

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

