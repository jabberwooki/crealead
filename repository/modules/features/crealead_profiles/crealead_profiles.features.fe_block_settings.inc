<?php
/**
 * @file
 * crealead_profiles.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function crealead_profiles_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['boxes-crealead_link_coe_list'] = array(
    'cache' => -2,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'crealead_link_coe_list',
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

  $export['boxes-crealead_links_coe'] = array(
    'cache' => -2,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'crealead_links_coe',
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

  $export['menu-menu-business-sectors'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-business-sectors',
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
    'title' => 'Par secteur d\'activité',
    'visibility' => 0,
  );

  $export['menu-menu-themes'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-themes',
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
    'title' => 'Nos entrepreneurs par thématique',
    'visibility' => 0,
  );

  $export['views-achievements-block_achiev_pics'] = array(
    'cache' => -1,
    'css_class' => 'pull-left',
    'custom' => 0,
    'delta' => 'achievements-block_achiev_pics',
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

  $export['views-business_sectors-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'business_sectors-block_1',
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
