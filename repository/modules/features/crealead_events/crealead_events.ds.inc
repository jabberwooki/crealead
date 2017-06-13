<?php
/**
 * @file
 * crealead_events.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function crealead_events_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_event_related_brands',
        1 => 'title',
        2 => 'field_event_dates',
        3 => 'field_event_locations',
        4 => 'field_event_picture',
        5 => 'body',
      ),
    ),
    'fields' => array(
      'field_event_related_brands' => 'central',
      'title' => 'central',
      'field_event_dates' => 'central',
      'field_event_locations' => 'central',
      'field_event_picture' => 'central',
      'body' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|event|full'] = $ds_layout;

  return $export;
}
