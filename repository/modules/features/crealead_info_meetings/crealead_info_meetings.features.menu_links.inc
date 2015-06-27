<?php
/**
 * @file
 * crealead_info_meetings.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function crealead_info_meetings_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_inscriptions-aux-runions-dinfo:reunions-information-inscriptions
  $menu_links['management_inscriptions-aux-runions-dinfo:reunions-information-inscriptions'] = array(
    'menu_name' => 'management',
    'link_path' => 'reunions-information-inscriptions',
    'router_path' => 'reunions-information-inscriptions',
    'link_title' => 'Inscriptions aux réunions d\'info',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_inscriptions-aux-runions-dinfo:reunions-information-inscriptions',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 1,
    'parent_identifier' => 'management_contenu:admin/content',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Inscriptions aux réunions d\'info');


  return $menu_links;
}
