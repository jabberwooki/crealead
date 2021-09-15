<?php

/**
 * @file
 * crealead_trainings.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function crealead_trainings_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-calendar-listing-switcher.
  $menus['menu-calendar-listing-switcher'] = array(
    'menu_name' => 'menu-calendar-listing-switcher',
    'title' => 'Sélecteur calendrier/listing',
    'description' => '',
  );
  // Exported menu: menu-trainings-calendar.
  $menus['menu-trainings-calendar'] = array(
    'menu_name' => 'menu-trainings-calendar',
    'title' => 'Calendrier des formations',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Calendrier des formations');
  t('Sélecteur calendrier/listing');

  return $menus;
}
