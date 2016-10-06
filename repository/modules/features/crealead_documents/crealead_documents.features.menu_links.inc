<?php
/**
 * @file
 * crealead_documents.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function crealead_documents_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-coe-area_documents:filedepot.
  $menu_links['menu-coe-area_documents:filedepot'] = array(
    'menu_name' => 'menu-coe-area',
    'link_path' => 'filedepot',
    'router_path' => 'filedepot',
    'link_title' => 'Documents',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-coe-area_documents:filedepot',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Documents');

  return $menu_links;
}
