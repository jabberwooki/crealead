<?php
/**
 * @file
 * crealead_newsflashes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crealead_newsflashes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function crealead_newsflashes_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function crealead_newsflashes_node_info() {
  $items = array(
    'newsflash' => array(
      'name' => t('Brève'),
      'base' => 'node_content',
      'description' => t('Permet d\'annoncer une chose importante très temporaire.'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
