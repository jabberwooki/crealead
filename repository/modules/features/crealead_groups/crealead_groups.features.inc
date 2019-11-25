<?php
/**
 * @file
 * crealead_groups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crealead_groups_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function crealead_groups_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function crealead_groups_node_info() {
  $items = array(
    'business_group' => array(
      'name' => t('Collectif'),
      'base' => 'node_content',
      'description' => t('Collecti métier ou groupe de co-entrepreneurs auto-gérés.'),
      'has_title' => '1',
      'title_label' => t('Nom'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
