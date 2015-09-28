<?php
/**
 * @file
 * crealead_brands.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function crealead_brands_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__brand';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'block' => array(
        'custom_settings' => TRUE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '17',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '18',
        ),
        'redirect' => array(
          'weight' => '19',
        ),
      ),
      'display' => array(
        'news_entity_view_1' => array(
          'full' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'block' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
        ),
        'news_brand_news' => array(
          'full' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__brand'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_brand';
  $strongarm->value = '0';
  $export['language_content_type_brand'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_brand';
  $strongarm->value = array();
  $export['menu_options_brand'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_brand';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_brand'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_brand';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_brand'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_brand';
  $strongarm->value = '1';
  $export['node_preview_brand'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_brand';
  $strongarm->value = 0;
  $export['node_submitted_brand'] = $strongarm;

  return $export;
}
