<?php
/**
 * @file
 * crealead_brands.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crealead_brands_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "taxonomy_display" && $api == "taxonomy_display") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function crealead_brands_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function crealead_brands_node_info() {
  $items = array(
    'achievement' => array(
      'name' => t('Réalisation'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Intitulé'),
      'help' => '',
    ),
    'brand' => array(
      'name' => t('Marque'),
      'base' => 'node_content',
      'description' => t('Marque commerciale d\'un entrepreneur ou d\'un groupe d\'entrepreneurs.'),
      'has_title' => '1',
      'title_label' => t('Nom de marque'),
      'help' => '',
    ),
    'client' => array(
      'name' => t('Client'),
      'base' => 'node_content',
      'description' => t('Une référence client.'),
      'has_title' => '1',
      'title_label' => t('Nom'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
