<?php
/**
 * @file
 * kcore.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function kcore_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['kcore-crealead_meetings_number'] = array(
    'cache' => 1,
    'css_class' => 'col-md-3',
    'custom' => 0,
    'delta' => 'crealead_meetings_number',
    'module' => 'kcore',
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

  $export['kcore-crealead_speakers_number'] = array(
    'cache' => 1,
    'css_class' => 'col-md-3',
    'custom' => 0,
    'delta' => 'crealead_speakers_number',
    'module' => 'kcore',
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

  $export['kcore-crealead_sponsors'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'crealead_sponsors',
    'module' => 'kcore',
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
