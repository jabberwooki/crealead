<?php
/**
 * @file
 * crealead_ads.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crealead_ads_ctools_plugin_api($module = NULL, $api = NULL) {
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
function crealead_ads_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function crealead_ads_node_info() {
  $items = array(
    'ad' => array(
      'name' => t('Annonce/Offre'),
      'base' => 'node_content',
      'description' => t('A utiliser pour annoncer la création d\'une session de formation, une offre spéciale temporaire, une offre externe intéressante pour tous, une vente d\'appartement ou d\'objets... <br/>
Les offres permanentes (vos formations habituelles, vos produits) ne sont pas à mettre ici. '),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
