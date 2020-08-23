<?php
/**
 * @file
 * crealead_calendars.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function crealead_calendars_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_structure_calendar';
  $strongarm->value = 'D d F Y - H\\hi';
  $export['date_format_structure_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_structure_calendar_time';
  $strongarm->value = 'H:i';
  $export['date_format_structure_calendar_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_room_event';
  $strongarm->value = array(
    0 => 'default',
    1 => 'teaser',
  );
  $export['ds_extras_view_modes_room_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_structure_event';
  $strongarm->value = array(
    0 => 'default',
    1 => 'teaser',
  );
  $export['ds_extras_view_modes_structure_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__room_event';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'colorbox' => array(
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
      'ical' => array(
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
      'certifications_labels_block' => array(
        'custom_settings' => FALSE,
      ),
      'landing_page_block' => array(
        'custom_settings' => FALSE,
      ),
      'list' => array(
        'custom_settings' => FALSE,
      ),
      'logo' => array(
        'custom_settings' => FALSE,
      ),
      'sector_brand_block' => array(
        'custom_settings' => FALSE,
      ),
      'sessions' => array(
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
          'weight' => '7',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'redirect' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__room_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__structure_event';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
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
      'colorbox' => array(
        'custom_settings' => TRUE,
      ),
      'ical' => array(
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
      'certifications_labels_block' => array(
        'custom_settings' => FALSE,
      ),
      'landing_page_block' => array(
        'custom_settings' => FALSE,
      ),
      'list' => array(
        'custom_settings' => FALSE,
      ),
      'logo' => array(
        'custom_settings' => FALSE,
      ),
      'sector_brand_block' => array(
        'custom_settings' => FALSE,
      ),
      'sessions' => array(
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
          'weight' => '8',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '7',
        ),
        'redirect' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__structure_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_room_event';
  $strongarm->value = '0';
  $export['language_content_type_room_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_structure_event';
  $strongarm->value = '0';
  $export['language_content_type_structure_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_room_event';
  $strongarm->value = array();
  $export['menu_options_room_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_structure_event';
  $strongarm->value = array();
  $export['menu_options_structure_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_room_event';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_room_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_structure_event';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_structure_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_room_event';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_room_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_structure_event';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_structure_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_room_event';
  $strongarm->value = '1';
  $export['node_preview_room_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_structure_event';
  $strongarm->value = '1';
  $export['node_preview_structure_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_room_event';
  $strongarm->value = 0;
  $export['node_submitted_room_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_structure_event';
  $strongarm->value = 0;
  $export['node_submitted_structure_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_room_event_pattern';
  $strongarm->value = '';
  $export['pathauto_node_room_event_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_structure_event_pattern';
  $strongarm->value = '';
  $export['pathauto_node_structure_event_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_crealead_rooms_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_crealead_rooms_pattern'] = $strongarm;

  return $export;
}
