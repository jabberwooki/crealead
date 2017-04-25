<?php
/**
 * @file
 * crealead_trainings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function crealead_trainings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-trainings-calendar'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-trainings-calendar',
    'module' => 'menu',
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
