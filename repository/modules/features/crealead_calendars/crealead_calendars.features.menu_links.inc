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

  // Exported menu link: menu-calendriers_calendrier-des-formations:espace-co-entrepreneur/calendrier-formations/mois.
  $menu_links['menu-calendriers_calendrier-des-formations:espace-co-entrepreneur/calendrier-formations/mois'] = array(
    'menu_name' => 'menu-calendriers',
    'link_path' => 'espace-co-entrepreneur/calendrier-formations/mois',
    'router_path' => 'espace-co-entrepreneur/calendrier-formations/mois',
    'link_title' => 'Calendrier des formations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-calendriers_calendrier-des-formations:espace-co-entrepreneur/calendrier-formations/mois',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 1,
  );
  // Exported menu link: menu-calendriers_calendrier-des-salles:espace-co-entrepreneur/calendrier-salles.
  $menu_links['menu-calendriers_calendrier-des-salles:espace-co-entrepreneur/calendrier-salles'] = array(
    'menu_name' => 'menu-calendriers',
    'link_path' => 'espace-co-entrepreneur/calendrier-salles',
    'router_path' => 'espace-co-entrepreneur/calendrier-salles',
    'link_title' => 'Calendrier des salles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-calendriers_calendrier-des-salles:espace-co-entrepreneur/calendrier-salles',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 1,
  );
  // Exported menu link: menu-calendriers_calendrier-vie-cooprative:espace-co-entrepreneur/calendrier-structure.
  $menu_links['menu-calendriers_calendrier-vie-cooprative:espace-co-entrepreneur/calendrier-structure'] = array(
    'menu_name' => 'menu-calendriers',
    'link_path' => 'espace-co-entrepreneur/calendrier-structure',
    'router_path' => 'espace-co-entrepreneur/calendrier-structure',
    'link_title' => 'Calendrier Vie Coopérative',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-calendriers_calendrier-vie-cooprative:espace-co-entrepreneur/calendrier-structure',
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
  t('Calendrier Vie Coopérative');
  t('Calendrier des formations');
  t('Calendrier des salles');

  return $menu_links;
}
