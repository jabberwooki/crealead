<?php

/**
 * @file
 * kcore.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function kcore_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-coe-area.
  $menus['menu-coe-area'] = array(
    'menu_name' => 'menu-coe-area',
    'title' => 'Espace co-entrepreneurs',
    'description' => 'Menu visible uniquement dans l\'espace co-entrepreneurs.',
  );
  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer menu',
    'description' => '',
  );
  // Exported menu: menu-top.
  $menus['menu-top'] = array(
    'menu_name' => 'menu-top',
    'title' => 'Menu haut',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Espace co-entrepreneurs');
  t('Footer menu');
  t('Main menu');
  t('Menu haut');
  t('Menu visible uniquement dans l\'espace co-entrepreneurs.');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');

  return $menus;
}
