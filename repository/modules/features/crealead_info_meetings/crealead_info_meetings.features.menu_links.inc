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

  // Exported menu link: management_inscriptions-aux-runions-dinformation:admin/info_meetings_registrations.
  $menu_links['management_inscriptions-aux-runions-dinformation:admin/info_meetings_registrations'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/info_meetings_registrations',
    'router_path' => 'admin/info_meetings_registrations',
    'link_title' => 'Inscriptions aux réunions d\'information',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_inscriptions-aux-runions-dinformation:admin/info_meetings_registrations',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 50,
    'customized' => 1,
    'parent_identifier' => 'management_content:admin/content',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Inscriptions aux réunions d\'information');

  return $menu_links;
}
