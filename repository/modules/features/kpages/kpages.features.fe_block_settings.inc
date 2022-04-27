<?php

/**
 * @file
 * kpages.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function kpages_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['boxes-crealead_link_advantages'] = array(
    'cache' => -2,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'crealead_link_advantages',
    'module' => 'boxes',
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
