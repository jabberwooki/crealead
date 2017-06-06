<?php
/**
 * @file
 * crealead_gazette.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function crealead_gazette_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-coe-area_gazettes:espace-co-entrepreneur/gazettes.
  $menu_links['menu-coe-area_gazettes:espace-co-entrepreneur/gazettes'] = array(
    'menu_name' => 'menu-coe-area',
    'link_path' => 'espace-co-entrepreneur/gazettes',
    'router_path' => 'espace-co-entrepreneur/gazettes',
    'link_title' => 'Gazettes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-coe-area_gazettes:espace-co-entrepreneur/gazettes',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Gazettes');

  return $menu_links;
}
