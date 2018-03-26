<?php
/**
 * @file
 * crealead_faqs.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function crealead_faqs_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-coe-area_foire-aux-questions:faqs.
  $menu_links['menu-coe-area_foire-aux-questions:faqs'] = array(
    'menu_name' => 'menu-coe-area',
    'link_path' => 'faqs',
    'router_path' => 'faqs',
    'link_title' => 'Foire aux questions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-coe-area_foire-aux-questions:faqs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 25,
    'customized' => 1,
  );
  // Exported menu link: menu-top_foire-aux-questions:faq-publique.
  $menu_links['menu-top_foire-aux-questions:faq-publique'] = array(
    'menu_name' => 'menu-top',
    'link_path' => 'faq-publique',
    'router_path' => 'faq-publique',
    'link_title' => 'Foire aux questions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top_foire-aux-questions:faq-publique',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Foire aux questions');

  return $menu_links;
}
