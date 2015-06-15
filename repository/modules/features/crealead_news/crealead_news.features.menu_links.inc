<?php
/**
 * @file
 * crealead_news.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function crealead_news_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_actualits:actualites
  $menu_links['main-menu_actualits:actualites'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'actualites',
    'router_path' => 'actualites',
    'link_title' => 'Actualités',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_actualits:actualites',
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
  t('Actualités');


  return $menu_links;
}
