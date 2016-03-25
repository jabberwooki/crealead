<?php
/**
 * @file
 * crealead_trainings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crealead_trainings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function crealead_trainings_node_info() {
  $items = array(
    'training' => array(
      'name' => t('Formation'),
      'base' => 'node_content',
      'description' => t('Une formation proposée par un co-entrepreneur.'),
      'has_title' => '1',
      'title_label' => t('Intitulé'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
