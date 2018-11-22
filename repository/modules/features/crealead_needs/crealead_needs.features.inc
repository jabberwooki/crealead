<?php
/**
 * @file
 * crealead_needs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crealead_needs_ctools_plugin_api($module = NULL, $api = NULL) {
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
  if ($module == "taxonomy_display" && $api == "taxonomy_display") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function crealead_needs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function crealead_needs_image_default_styles() {
  $styles = array();

  // Exported image style: link-icon.
  $styles['link-icon'] = array(
    'label' => 'Pictogramme',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 24,
          'upscale' => 0,
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
function crealead_needs_node_info() {
  $items = array(
    'link_to_doc' => array(
      'name' => t('Lien vers un document'),
      'base' => 'node_content',
      'description' => t('Lien vers un document stocké dans la rubrique Documents. La liste des liens créés est visible dans la rubrique Echanges.'),
      'has_title' => '1',
      'title_label' => t('Intitulé'),
      'help' => '',
    ),
    'need' => array(
      'name' => t('Demande'),
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
