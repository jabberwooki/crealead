<?php
/**
 * @file
 * crealead_warnings.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function crealead_warnings_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|warning|colorbox';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'warning';
  $ds_fieldsetting->view_mode = 'colorbox';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'inline',
      'format' => 'ds_post_date_news_medium',
    ),
    'field_content_type_value' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Contenu surveillé',
        ),
      ),
    ),
  );
  $export['node|warning|colorbox'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function crealead_warnings_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|warning|colorbox';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'warning';
  $ds_layout->view_mode = 'colorbox';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
        1 => 'post_date',
        2 => 'field_recipient_email',
        3 => 'field_warning_when',
        4 => 'field_warning_frequency',
        5 => 'field_warning_keywords',
        6 => 'field_content_type_value',
      ),
    ),
    'fields' => array(
      'title' => 'central',
      'post_date' => 'central',
      'field_recipient_email' => 'central',
      'field_warning_when' => 'central',
      'field_warning_frequency' => 'central',
      'field_warning_keywords' => 'central',
      'field_content_type_value' => 'central',
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
  $export['node|warning|colorbox'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|warning|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'warning';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_recipient_email',
        1 => 'field_warning_when',
        2 => 'field_warning_frequency',
        3 => 'field_warning_keywords',
        4 => 'field_content_type_value',
      ),
    ),
    'fields' => array(
      'field_recipient_email' => 'central',
      'field_warning_when' => 'central',
      'field_warning_frequency' => 'central',
      'field_warning_keywords' => 'central',
      'field_content_type_value' => 'central',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|warning|full'] = $ds_layout;

  return $export;
}
