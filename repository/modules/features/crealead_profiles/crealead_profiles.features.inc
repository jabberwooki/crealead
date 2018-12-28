<?php
/**
 * @file
 * crealead_profiles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crealead_profiles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
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
  $items['assistant_page'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "assistant_page",
    "label" : "Profil assistant",
    "weight" : "3",
    "data" : { "registration" : 0, "use_page" : 0 },
    "rdf_mapping" : []
  }');
  $items['coe_page'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "coe_page",
    "label" : "Profil entrepreneur",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 0 },
    "rdf_mapping" : []
  }');
  $items['direction_page'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "direction_page",
    "label" : "Profil direction",
    "weight" : "5",
    "data" : { "registration" : 0, "use_page" : 0 },
    "rdf_mapping" : []
  }');
  $items['management_page'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "management_page",
    "label" : "Profil p\\u00f4le gestion",
    "weight" : "4",
    "data" : { "registration" : 0, "use_page" : 0 },
    "rdf_mapping" : []
  }');
  $items['provider_page'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "provider_page",
    "label" : "Profil entrepreneur prestataire",
    "weight" : "1",
    "data" : { "registration" : 0, "use_page" : 0 },
    "rdf_mapping" : []
  }');
  $items['referent_page'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "referent_page",
    "label" : "Profil r\\u00e9f\\u00e9rent",
    "weight" : "2",
    "data" : { "registration" : 0, "use_page" : 0 },
    "rdf_mapping" : []
  }');
  return $items;
}
