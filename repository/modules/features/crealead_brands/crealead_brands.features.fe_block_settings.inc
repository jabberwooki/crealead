<?php
/**
 * @file
 * crealead_brands.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function crealead_brands_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['crealead_brands-crealead_brands_contacts_list'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'crealead_brands_contacts_list',
    'module' => 'crealead_brands',
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

  $export['crealead_brands-crealead_brands_number'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'crealead_brands_number',
    'module' => 'crealead_brands',
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

  $export['kcore-crealead_coes_number'] = array(
    'cache' => 1,
    'css_class' => 'col-md-3',
    'custom' => 0,
    'delta' => 'crealead_coes_number',
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

  $export['kcore-crealead_refs_number'] = array(
    'cache' => 1,
    'css_class' => 'col-md-3',
    'custom' => 0,
    'delta' => 'crealead_refs_number',
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

  $export['views-95647445be58aeee85b64e09d38af300'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '95647445be58aeee85b64e09d38af300',
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
