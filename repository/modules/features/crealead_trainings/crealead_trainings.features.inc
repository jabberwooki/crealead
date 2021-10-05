<?php

/**
 * @file
 * crealead_trainings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crealead_trainings_ctools_plugin_api($module = NULL, $api = NULL) {
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
function crealead_trainings_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_features_date_format_default().
 */
function crealead_trainings_features_date_format_default() {
  $fdf_config = array();

  $fdf_config[] = array(
    'dfid' => 46,
    'format' => 'D d M',
    'type' => 'custom',
    'locked' => 0,
  );
  return $fdf_config;
}

/**
 * Implements hook_features_date_type_default().
 */
function crealead_trainings_features_date_type_default() {
  $fdt_config = array();

  $fdt_config[] = array(
    'is_new' => FALSE,
    'module' => '',
    'type' => 'calendar_listing',
    'title' => 'Calendrier - Listing',
    'locked' => 0,
  );
  return $fdt_config;
}

/**
 * Implements hook_image_default_styles().
 */
function crealead_trainings_image_default_styles() {
  $styles = array();

  // Exported image style: funded_logo.
  $styles['funded_logo'] = array(
    'label' => 'Logo prise en charge Crealead',
    'effects' => array(
      29 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 48,
          'height' => 48,
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
function crealead_trainings_node_info() {
  $items = array(
    'training' => array(
      'name' => t('Formation'),
      'base' => 'node_content',
      'description' => t('Une formation proposée par un co-entrepreneur.'),
      'has_title' => '1',
      'title_label' => t('Intitulé'),
      'help' => '',
    ),
    'training_session' => array(
      'name' => t('Session de formation'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Intitulé'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
