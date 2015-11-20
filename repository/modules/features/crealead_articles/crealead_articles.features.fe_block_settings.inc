<?php
/**
 * @file
 * crealead_articles.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function crealead_articles_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-articles-testimonials_front'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'articles-testimonials_front',
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
