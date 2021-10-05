<?php

/**
 * @file
 * crealead_info_meetings.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function crealead_info_meetings_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|info_meeting|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'info_meeting';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_info_meeting_map' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'col-md-6',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_info_meeting_photo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'col-md-6',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_info_meeting_registration' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Formulaire d\'inscription :',
          'lb-el' => 'h3',
          'lb-col' => TRUE,
        ),
      ),
    ),
  );
  $export['node|info_meeting|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'registration|info_meeting_registration|default';
  $ds_fieldsetting->entity_type = 'registration';
  $ds_fieldsetting->bundle = 'info_meeting_registration';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'info_meeting_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['registration|info_meeting_registration|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function crealead_info_meetings_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'info_meeting_date';
  $ds_field->label = 'Date de la réunion';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'registration' => 'registration',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => 'date réunion',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['info_meeting_date'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function crealead_info_meetings_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|info_meeting|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'info_meeting';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_6_6_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'links',
        1 => 'field_info_meeting_date',
        2 => 'group_program',
        3 => 'body',
        4 => 'field_info_meeting_map',
        5 => 'group_plan_photo',
        6 => 'field_info_meeting_photo',
      ),
      'bottom' => array(
        7 => 'field_info_meeting_registration',
      ),
    ),
    'fields' => array(
      'links' => 'top',
      'field_info_meeting_date' => 'top',
      'group_program' => 'top',
      'body' => 'top',
      'field_info_meeting_map' => 'top',
      'group_plan_photo' => 'top',
      'field_info_meeting_photo' => 'top',
      'field_info_meeting_registration' => 'bottom',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|info_meeting|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'registration|info_meeting_registration|default';
  $ds_layout->entity_type = 'registration';
  $ds_layout->bundle = 'info_meeting_registration';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'created',
        1 => 'updated',
        2 => 'info_meeting_date',
        3 => 'group_registrant_meeting_date',
        4 => 'mail',
        5 => 'group_registrant_infos',
        6 => 'field_registrant_title',
        7 => 'group_registrant_other_infos',
        8 => 'field_registrant_project_domain',
        9 => 'field_registrant_status',
        10 => 'group_registrant_optional_infos',
        11 => 'field_registrant_postal_code',
        12 => 'field_registrant_city',
        13 => 'field_registrant_lastname',
        14 => 'field_beneficiary_number',
        15 => 'field_registrant_birthday',
        16 => 'field_registrant_firstname',
        17 => 'field_unemployment_date',
        18 => 'field_registrant_phone',
        19 => 'field_registrant_gender',
        20 => 'field_other_specify',
        21 => 'field_registrant_how',
      ),
    ),
    'fields' => array(
      'created' => 'central',
      'updated' => 'central',
      'info_meeting_date' => 'central',
      'group_registrant_meeting_date' => 'central',
      'mail' => 'central',
      'group_registrant_infos' => 'central',
      'field_registrant_title' => 'central',
      'group_registrant_other_infos' => 'central',
      'field_registrant_project_domain' => 'central',
      'field_registrant_status' => 'central',
      'group_registrant_optional_infos' => 'central',
      'field_registrant_postal_code' => 'central',
      'field_registrant_city' => 'central',
      'field_registrant_lastname' => 'central',
      'field_beneficiary_number' => 'central',
      'field_registrant_birthday' => 'central',
      'field_registrant_firstname' => 'central',
      'field_unemployment_date' => 'central',
      'field_registrant_phone' => 'central',
      'field_registrant_gender' => 'central',
      'field_other_specify' => 'central',
      'field_registrant_how' => 'central',
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
  $export['registration|info_meeting_registration|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'registration|info_meeting_registration|full';
  $ds_layout->entity_type = 'registration';
  $ds_layout->bundle = 'info_meeting_registration';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'created',
        1 => 'field_registrant_title',
        2 => 'field_registrant_firstname',
        3 => 'updated',
        4 => 'field_registrant_lastname',
        5 => 'spaces',
        6 => 'mail',
        7 => 'field_attendee',
        8 => 'group_registrant_infos',
        9 => 'field_registrant_phone',
        10 => 'group_registrant_other_infos',
        11 => 'field_registrant_project_domain',
        12 => 'field_registrant_status',
      ),
    ),
    'fields' => array(
      'created' => 'central',
      'field_registrant_title' => 'central',
      'field_registrant_firstname' => 'central',
      'updated' => 'central',
      'field_registrant_lastname' => 'central',
      'spaces' => 'central',
      'mail' => 'central',
      'field_attendee' => 'central',
      'group_registrant_infos' => 'central',
      'field_registrant_phone' => 'central',
      'group_registrant_other_infos' => 'central',
      'field_registrant_project_domain' => 'central',
      'field_registrant_status' => 'central',
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
  );
  $export['registration|info_meeting_registration|full'] = $ds_layout;

  return $export;
}
