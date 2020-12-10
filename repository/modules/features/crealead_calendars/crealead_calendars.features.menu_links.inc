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

  // Exported menu link: menu-calendriers_calendrier:espace-co-entrepreneur/evenements-vie-cooperative/calendrier.
  $menu_links['menu-calendriers_calendrier:espace-co-entrepreneur/evenements-vie-cooperative/calendrier'] = array(
    'menu_name' => 'menu-calendriers',
    'link_path' => 'espace-co-entrepreneur/evenements-vie-cooperative/calendrier',
    'router_path' => 'espace-co-entrepreneur/evenements-vie-cooperative/calendrier',
    'link_title' => 'Calendrier',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-calendriers_calendrier:espace-co-entrepreneur/evenements-vie-cooperative/calendrier',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-calendriers_liste:espace-co-entrepreneur/evenements-vie-cooperative/liste.
  $menu_links['menu-calendriers_liste:espace-co-entrepreneur/evenements-vie-cooperative/liste'] = array(
    'menu_name' => 'menu-calendriers',
    'link_path' => 'espace-co-entrepreneur/evenements-vie-cooperative/liste',
    'router_path' => 'espace-co-entrepreneur/evenements-vie-cooperative/liste',
    'link_title' => 'Liste',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-calendriers_liste:espace-co-entrepreneur/evenements-vie-cooperative/liste',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Calendrier');
  t('Liste');

  return $menu_links;
}
