<?php
/**
 * @file
 * crealead_news.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function crealead_news_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-news-block_news_2_3'] = array(
    'cache' => -1,
    'css_class' => 'col-md-6 row',
    'custom' => 0,
    'delta' => 'news-block_news_2_3',
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
        'weight' => -30,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-news-block_news_focus'] = array(
    'cache' => -1,
    'css_class' => 'col-md-6',
    'custom' => 0,
    'delta' => 'news-block_news_focus',
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

  $export['views-news-block_zoom_actu'] = array(
    'cache' => -1,
    'css_class' => 'col-md-6',
    'custom' => 0,
    'delta' => 'news-block_zoom_actu',
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
        'weight' => -31,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
