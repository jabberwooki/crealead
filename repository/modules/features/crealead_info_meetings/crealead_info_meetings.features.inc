<?php
/**
 * @file
 * crealead_info_meetings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crealead_info_meetings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function crealead_info_meetings_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_features_date_type_default().
 */
function crealead_info_meetings_features_date_type_default() {
  $fdt_config = array();

  $fdt_config[] = array(
    'is_new' => FALSE,
    'module' => '',
    'type' => 'info_meeting_medium',
    'title' => 'Réunion d\'info - Moyen',
    'locked' => 0,
  );
  return $fdt_config;
}

/**
 * Implements hook_node_info().
 */
function crealead_info_meetings_node_info() {
  $items = array(
    'info_meeting' => array(
      'name' => t('Réunion d\'information'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_registration_type().
 */
function crealead_info_meetings_default_registration_type() {
  $items = array();
  $items['info_meeting_registration'] = entity_import('registration_type', '{
    "name" : "info_meeting_registration",
    "label" : "Inscription \\u00e0 une r\\u00e9union d\\u0027information",
    "locked" : "0",
    "default_state" : null,
    "data" : null,
    "weight" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
