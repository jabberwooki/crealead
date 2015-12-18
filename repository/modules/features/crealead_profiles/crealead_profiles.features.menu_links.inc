<?php
/**
 * @file
 * crealead_profiles.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function crealead_profiles_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_entrepreneurs:entrepreneurs
  $menu_links['main-menu_entrepreneurs:entrepreneurs'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'entrepreneurs',
    'router_path' => 'entrepreneurs',
    'link_title' => 'Entrepreneurs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_entrepreneurs:entrepreneurs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Entrepreneurs');


  return $menu_links;
}
