<?php
/**
 * @file
 * crealead_brands.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function crealead_brands_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_thmatiques:thematiques
  $menu_links['main-menu_thmatiques:thematiques'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'thematiques',
    'router_path' => 'thematiques',
    'link_title' => 'Thématiques',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_thmatiques:thematiques',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 40,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Thématiques');


  return $menu_links;
}
