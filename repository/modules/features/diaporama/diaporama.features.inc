<?php
/**
 * @file
 * diaporama.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function diaporama_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function diaporama_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function diaporama_image_default_styles() {
  $styles = array();

  // Exported image style: diapositive_accueil.
  $styles['diapositive_accueil'] = array(
    'label' => 'Diapositive accueil (858/531)',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 858,
          'height' => 531,
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
function diaporama_node_info() {
  $items = array(
    'diapositive' => array(
      'name' => t('Diapositive'),
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

/**
 * Implements hook_scald_default_context_types().
 */
function diaporama_scald_default_context_types() {
  $contexts = array();
  $contexts['diaporama-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'style-diapositive_accueil',
      ),
    ),
  );
  return $contexts;
}
