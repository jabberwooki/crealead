<?php
/**
 * @file
 * crealead_calendars.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crealead_calendars_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function crealead_calendars_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_features_date_format_default().
 */
function crealead_calendars_features_date_format_default() {
  $fdf_config = array();

  $fdf_config[] = array(
    'dfid' => 48,
    'format' => 'H:i',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 49,
    'format' => 'd/m/Y H:i',
    'type' => 'custom',
    'locked' => 0,
  );
  return $fdf_config;
}

/**
 * Implements hook_features_date_type_default().
 */
function crealead_calendars_features_date_type_default() {
  $fdt_config = array();

  $fdt_config[] = array(
    'is_new' => FALSE,
    'module' => '',
    'type' => 'rooms_agenda_import',
    'title' => 'Agenda Salles (import)',
    'locked' => 0,
  );
  $fdt_config[] = array(
    'is_new' => FALSE,
    'module' => '',
    'type' => 'structure_calendar',
    'title' => 'Calendrier structure',
    'locked' => 0,
  );
  $fdt_config[] = array(
    'is_new' => FALSE,
    'module' => '',
    'type' => 'structure_calendar_time',
    'title' => 'Calendrier structure : heures',
    'locked' => 0,
  );
  return $fdt_config;
}

/**
 * Implements hook_node_info().
 */
function crealead_calendars_node_info() {
  $items = array(
    'room_event' => array(
      'name' => t('Evénement Salle'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
    'structure_event' => array(
      'name' => t('Evénement Structure'),
      'base' => 'node_content',
      'description' => t('Un événement Crealead Structure'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
