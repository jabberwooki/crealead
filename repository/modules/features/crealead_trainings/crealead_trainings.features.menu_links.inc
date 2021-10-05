<?php

/**
 * @file
 * crealead_trainings.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function crealead_trainings_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_nos-formations:formations.
  $menu_links['main-menu_nos-formations:formations'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'formations',
    'router_path' => 'formations',
    'link_title' => 'Nos formations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_nos-formations:formations',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'parent_identifier' => 'main-menu_dcouvrez-loffre-desbrco-entrepreneurs:annuaire-entrepreneurs',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Nos formations');

  return $menu_links;
}
