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
  // Exported menu link: menu-coe-area_calendrier-des-formations:espace-co-entrepreneur/calendrier-formations/mois.
  $menu_links['menu-coe-area_calendrier-des-formations:espace-co-entrepreneur/calendrier-formations/mois'] = array(
    'menu_name' => 'menu-coe-area',
    'link_path' => 'espace-co-entrepreneur/calendrier-formations/mois',
    'router_path' => 'espace-co-entrepreneur/calendrier-formations/mois',
    'link_title' => 'Calendrier des formations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-coe-area_calendrier-des-formations:espace-co-entrepreneur/calendrier-formations/mois',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 1,
  );
  // Exported menu link: menu-trainings-calendar_anne:espace-co-entrepreneur/calendrier-formations/annee.
  $menu_links['menu-trainings-calendar_anne:espace-co-entrepreneur/calendrier-formations/annee'] = array(
    'menu_name' => 'menu-trainings-calendar',
    'link_path' => 'espace-co-entrepreneur/calendrier-formations/annee',
    'router_path' => 'espace-co-entrepreneur/calendrier-formations/annee',
    'link_title' => 'Année',
    'options' => array(
      'identifier' => 'menu-trainings-calendar_anne:espace-co-entrepreneur/calendrier-formations/annee',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 0,
  );
  // Exported menu link: menu-trainings-calendar_jour:espace-co-entrepreneur/calendrier-formations/jour.
  $menu_links['menu-trainings-calendar_jour:espace-co-entrepreneur/calendrier-formations/jour'] = array(
    'menu_name' => 'menu-trainings-calendar',
    'link_path' => 'espace-co-entrepreneur/calendrier-formations/jour',
    'router_path' => 'espace-co-entrepreneur/calendrier-formations/jour',
    'link_title' => 'Jour',
    'options' => array(
      'identifier' => 'menu-trainings-calendar_jour:espace-co-entrepreneur/calendrier-formations/jour',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 0,
  );
  // Exported menu link: menu-trainings-calendar_mois:espace-co-entrepreneur/calendrier-formations/mois.
  $menu_links['menu-trainings-calendar_mois:espace-co-entrepreneur/calendrier-formations/mois'] = array(
    'menu_name' => 'menu-trainings-calendar',
    'link_path' => 'espace-co-entrepreneur/calendrier-formations/mois',
    'router_path' => 'espace-co-entrepreneur/calendrier-formations/mois',
    'link_title' => 'Mois',
    'options' => array(
      'identifier' => 'menu-trainings-calendar_mois:espace-co-entrepreneur/calendrier-formations/mois',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-trainings-calendar_semaine:espace-co-entrepreneur/calendrier-formations/semaine.
  $menu_links['menu-trainings-calendar_semaine:espace-co-entrepreneur/calendrier-formations/semaine'] = array(
    'menu_name' => 'menu-trainings-calendar',
    'link_path' => 'espace-co-entrepreneur/calendrier-formations/semaine',
    'router_path' => 'espace-co-entrepreneur/calendrier-formations/semaine',
    'link_title' => 'Semaine',
    'options' => array(
      'identifier' => 'menu-trainings-calendar_semaine:espace-co-entrepreneur/calendrier-formations/semaine',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Année');
  t('Calendrier des formations');
  t('Jour');
  t('Mois');
  t('Nos formations');
  t('Semaine');

  return $menu_links;
}
