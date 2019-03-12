<?php
/**
 * @file
 * crealead_calendars.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function crealead_calendars_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-calendriers.
  $menus['menu-calendriers'] = array(
    'menu_name' => 'menu-calendriers',
    'title' => 'Calendriers',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Calendriers');

  return $menus;
}
