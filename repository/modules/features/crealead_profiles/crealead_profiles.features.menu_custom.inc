<?php
/**
 * @file
 * crealead_profiles.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function crealead_profiles_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-business-sectors.
  $menus['menu-business-sectors'] = array(
    'menu_name' => 'menu-business-sectors',
    'title' => 'Secteurs d\'activité',
    'description' => '',
  );
  // Exported menu: menu-themes.
  $menus['menu-themes'] = array(
    'menu_name' => 'menu-themes',
    'title' => 'Thématiques',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Secteurs d\'activité');
  t('Thématiques');


  return $menus;
}
