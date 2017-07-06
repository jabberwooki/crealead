<?php
/**
 * @file
 * crealead_geolocations.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function crealead_geolocations_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-coe-area_localisation-des-co-entrepreneurs:espace-co-entrepreneur/localisation-entrepreneurs.
  $menu_links['menu-coe-area_localisation-des-co-entrepreneurs:espace-co-entrepreneur/localisation-entrepreneurs'] = array(
    'menu_name' => 'menu-coe-area',
    'link_path' => 'espace-co-entrepreneur/localisation-entrepreneurs',
    'router_path' => 'espace-co-entrepreneur/localisation-entrepreneurs',
    'link_title' => 'Localisation des co-entrepreneurs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-coe-area_localisation-des-co-entrepreneurs:espace-co-entrepreneur/localisation-entrepreneurs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 6,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Localisation des co-entrepreneurs');

  return $menu_links;
}
