<?php
/**
 * @file
 * crealead_trainings.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function crealead_trainings_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|training|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'training';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'training_contact' => array(
      'weight' => '8',
      'label' => 'above',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|training|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function crealead_trainings_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'training_contact';
  $ds_field->label = 'Nous contacter';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'training|full';
  $ds_field->properties = array(
    'code' => array(
      'value' => 'Email de contact
',
      'format' => 'plain_text',
    ),
    'use_token' => 0,
  );
  $export['training_contact'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function crealead_trainings_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|training|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'training';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_6_6_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_training_related_brands',
        1 => 'title',
        2 => 'group_training_data',
        3 => 'field_training_duration',
        5 => 'field_training_attendees_number',
        6 => 'field_training_price',
      ),
      'left' => array(
        4 => 'field_training_type',
        7 => 'field_training_theme',
        8 => 'field_training_public',
        9 => 'field_training_requirements',
        10 => 'field_training_aims',
        11 => 'training_contact',
      ),
      'right' => array(
        12 => 'body',
      ),
    ),
    'fields' => array(
      'field_training_related_brands' => 'top',
      'title' => 'top',
      'group_training_data' => 'top',
      'field_training_duration' => 'top',
      'field_training_type' => 'left',
      'field_training_attendees_number' => 'top',
      'field_training_price' => 'top',
      'field_training_theme' => 'left',
      'field_training_public' => 'left',
      'field_training_requirements' => 'left',
      'field_training_aims' => 'left',
      'training_contact' => 'left',
      'body' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
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
  $export['node|training|full'] = $ds_layout;

  return $export;
}
