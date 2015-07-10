<?php
/**
 * @file
 * crealead_profiles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crealead_profiles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function crealead_profiles_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function crealead_profiles_image_default_styles() {
  $styles = array();

  // Exported image style: photo_utilisateur.
  $styles['photo_utilisateur'] = array(
    'label' => 'Photo utilisateur',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_default_profile2_type().
 */
function crealead_profiles_default_profile2_type() {
  $items = array();
  $items['coe_page'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "coe_page",
    "label" : "Ma page entrepreneur",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 0 },
    "rdf_mapping" : []
  }');
  return $items;
}