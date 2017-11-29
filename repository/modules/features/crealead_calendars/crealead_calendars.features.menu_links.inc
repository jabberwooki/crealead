<?php
/**
 * @file
 * crealead_calendars.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function crealead_calendars_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-coe-area_calendrier-des-salles:espace-co-entrepreneur/agenda-salles.
  $menu_links['menu-coe-area_calendrier-des-salles:espace-co-entrepreneur/agenda-salles'] = array(
    'menu_name' => 'menu-coe-area',
    'link_path' => 'espace-co-entrepreneur/agenda-salles',
    'router_path' => 'espace-co-entrepreneur/agenda-salles',
    'link_title' => 'Calendrier des salles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-coe-area_calendrier-des-salles:espace-co-entrepreneur/agenda-salles',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Calendrier des salles');

  return $menu_links;
}
