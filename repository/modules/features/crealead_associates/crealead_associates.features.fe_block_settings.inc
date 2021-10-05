<?php

/**
 * @file
 * crealead_associates.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function crealead_associates_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-reports-asso_area'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'reports-asso_area',
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
