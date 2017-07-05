<?php
/**
 * @file
 * crealead_events.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function crealead_events_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => 'page-header',
        'ft' => array(),
        'field_formatter_class' => '',
      ),
    ),
  );
  $export['node|event|full'] = $ds_fieldsetting;

  return $export;
}

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
        2 => 'field_event_type',
        3 => 'field_event_dates',
        4 => 'field_event_locations',
        5 => 'field_event_picture',
        6 => 'body',
      ),
    ),
    'fields' => array(
      'field_event_related_brands' => 'central',
      'title' => 'central',
      'field_event_type' => 'central',
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
