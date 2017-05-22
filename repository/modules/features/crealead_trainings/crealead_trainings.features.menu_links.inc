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
  // Exported menu link: menu-calendar-listing-switcher_calendrier:espace-co-entrepreneur/calendrier-formations/mois.
  $menu_links['menu-calendar-listing-switcher_calendrier:espace-co-entrepreneur/calendrier-formations/mois'] = array(
    'menu_name' => 'menu-calendar-listing-switcher',
    'link_path' => 'espace-co-entrepreneur/calendrier-formations/mois',
    'router_path' => 'espace-co-entrepreneur/calendrier-formations/mois',
    'link_title' => 'Calendrier',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-calendar-listing-switcher_calendrier:espace-co-entrepreneur/calendrier-formations/mois',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-calendar-listing-switcher_liste:espace-co-entrepreneur/calendrier-formations/listing.
  $menu_links['menu-calendar-listing-switcher_liste:espace-co-entrepreneur/calendrier-formations/listing'] = array(
    'menu_name' => 'menu-calendar-listing-switcher',
    'link_path' => 'espace-co-entrepreneur/calendrier-formations/listing',
    'router_path' => 'espace-co-entrepreneur/calendrier-formations/listing',
    'link_title' => 'Liste',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-calendar-listing-switcher_liste:espace-co-entrepreneur/calendrier-formations/listing',
    ),
    'module' => 'system',
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
  t('Nos formations');

  return $menu_links;
}
