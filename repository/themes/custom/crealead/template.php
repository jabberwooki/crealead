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
if (drupal_is_front_page()) {
  drupal_add_js(drupal_get_path('theme', 'crealead') . '/js/match-home-height.js', array(
    'type' => 'file',
    'group' => JS_THEME,
  ));
}

