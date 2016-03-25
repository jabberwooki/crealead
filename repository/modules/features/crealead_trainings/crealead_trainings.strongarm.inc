<?php
/**
 * @file
 * crealead_trainings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function crealead_trainings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__training';
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
      'brand_articles' => array(
        'custom_settings' => FALSE,
      ),
      'news_2_3' => array(
        'custom_settings' => FALSE,
      ),
      'news_brand' => array(
        'custom_settings' => FALSE,
      ),
      'zoom_news' => array(
        'custom_settings' => FALSE,
      ),
      'block' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '13',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '11',
        ),
        'redirect' => array(
          'weight' => '12',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__training'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_training';
  $strongarm->value = '0';
  $export['language_content_type_training'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_training';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_training'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_training';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_training'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_training';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_training'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_training';
  $strongarm->value = '1';
  $export['node_preview_training'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_training';
  $strongarm->value = 0;
  $export['node_submitted_training'] = $strongarm;

  return $export;
}
