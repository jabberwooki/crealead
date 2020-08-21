<?php
/**
 * @file
 * crealead_associates.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function crealead_associates_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|report|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'report';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'author' => array(
      'weight' => '3',
      'label' => 'inline',
      'format' => 'author',
    ),
  );
  $export['node|report|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function crealead_associates_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|report|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'report';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_meeting_date',
        1 => 'field_report_category',
        2 => 'field_report_theme',
        3 => 'author',
        4 => 'body',
      ),
    ),
    'fields' => array(
      'field_meeting_date' => 'central',
      'field_report_category' => 'central',
      'field_report_theme' => 'central',
      'author' => 'central',
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
  );
  $export['node|report|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|report|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'report';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_3_9';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_report_category',
        1 => 'field_meeting_date',
        2 => 'field_report_theme',
      ),
      'right' => array(
        3 => 'body',
      ),
    ),
    'fields' => array(
      'field_report_category' => 'left',
      'field_meeting_date' => 'left',
      'field_report_theme' => 'left',
      'body' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|report|full'] = $ds_layout;

  return $export;
}
