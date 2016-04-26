<?php
/**
 * @file
 * crealead_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crealead_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function crealead_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_features_date_type_default().
 */
function crealead_news_features_date_type_default() {
  $fdt_config = array();

  $fdt_config[] = array(
    'is_new' => FALSE,
    'module' => '',
    'type' => 'news_long',
    'title' => 'Actualités - Long',
    'locked' => 0,
  );
  $fdt_config[] = array(
    'is_new' => FALSE,
    'module' => '',
    'type' => 'news_medium',
    'title' => 'Actualités - Moyen',
    'locked' => 0,
  );
  $fdt_config[] = array(
    'is_new' => FALSE,
    'module' => '',
    'type' => 'news_short',
    'title' => 'Actualités - Court',
    'locked' => 0,
  );
  return $fdt_config;
}

/**
 * Implements hook_image_default_styles().
 */
function crealead_news_image_default_styles() {
  $styles = array();

  // Exported image style: brand_news_335x200.
  $styles['brand_news_335x200'] = array(
    'label' => 'Actus marque (335x200)',
    'effects' => array(
      11 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 335,
          'height' => 200,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'brand_news_335x200',
        ),
        'weight' => 0,
      ),
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 335,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: large_bandeau.
  $styles['large_bandeau'] = array(
    'label' => 'large bandeau (1920x430)',
    'effects' => array(
      10 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 1920,
          'height' => 430,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'large_bandeau',
        ),
        'weight' => 0,
      ),
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1920,
          'height' => 430,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: zoom_actu.
  $styles['zoom_actu'] = array(
    'label' => 'Zoom actu (600*549)',
    'effects' => array(
      6 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 600,
          'height' => 549,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'zoom_actu',
        ),
        'weight' => 0,
      ),
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 549,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function crealead_news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('Actualité'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
