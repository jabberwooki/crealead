<?php
/**
 * @file
 * crealead_ads.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function crealead_ads_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-ads-ads_list'] = array(
    'cache' => -1,
    'css_class' => '',
    'delta' => 'ads-ads_list',
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
  );

  return $export;
}
