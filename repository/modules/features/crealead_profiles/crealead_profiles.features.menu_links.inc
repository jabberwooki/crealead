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

  // Exported menu link: menu-coe-area_trombinoscope:espace-co-entrepreneur/trombinoscope.
  $menu_links['menu-coe-area_trombinoscope:espace-co-entrepreneur/trombinoscope'] = array(
    'menu_name' => 'menu-coe-area',
    'link_path' => 'espace-co-entrepreneur/trombinoscope',
    'router_path' => 'espace-co-entrepreneur/trombinoscope',
    'link_title' => 'Trombinoscope',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-coe-area_trombinoscope:espace-co-entrepreneur/trombinoscope',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Trombinoscope');

  return $menu_links;
}
