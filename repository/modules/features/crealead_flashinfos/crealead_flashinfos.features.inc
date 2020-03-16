<?php
/**
 * @file
 * crealead_flashinfos.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crealead_flashinfos_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function crealead_flashinfos_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function crealead_flashinfos_node_info() {
  $items = array(
    'flashinfo' => array(
      'name' => t('Flash info'),
      'base' => 'node_content',
      'description' => t('Information urgente à afficher aux visiteurs du site en haut de la page d\'accueil.'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
