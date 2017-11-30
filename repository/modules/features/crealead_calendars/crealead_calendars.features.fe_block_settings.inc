<?php
/**
 * @file
 * crealead_calendars.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function crealead_calendars_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-structure_calendar-structure'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'structure_calendar-structure',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'crealead' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'crealead',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
