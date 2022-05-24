<?php

/**
 * @file
 * crealead_products.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crealead_products_ctools_plugin_api($module = NULL, $api = NULL) {
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
 * Implements hook_views_api().
 */
function crealead_products_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function crealead_products_node_info() {
  $items = array(
    'product' => array(
      'name' => t('Prestation'),
      'base' => 'node_content',
      'description' => t('Tout produit que vous proposez à vos clients, autres que formation.'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
