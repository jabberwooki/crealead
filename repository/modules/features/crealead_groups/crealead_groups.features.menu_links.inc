<?php
/**
 * @file
 * crealead_groups.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function crealead_groups_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-coe-area_collectifs:espace-co-entrepreneur/collectifs.
  $menu_links['menu-coe-area_collectifs:espace-co-entrepreneur/collectifs'] = array(
    'menu_name' => 'menu-coe-area',
    'link_path' => 'espace-co-entrepreneur/collectifs',
    'router_path' => 'espace-co-entrepreneur',
    'link_title' => 'Collectifs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-coe-area_collectifs:espace-co-entrepreneur/collectifs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Collectifs');

  return $menu_links;
}
