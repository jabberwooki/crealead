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
  );
  $export['node|info_meeting|full'] = $ds_fieldsetting;

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
        2 => 'body',
      ),
      'left' => array(
        3 => 'field_info_meeting_map',
      ),
      'right' => array(
        4 => 'field_info_meeting_photo',
      ),
      'bottom' => array(
        5 => 'field_info_meeting_registration',
      ),
    ),
    'fields' => array(
      'links' => 'top',
      'field_info_meeting_date' => 'top',
      'body' => 'top',
      'field_info_meeting_map' => 'left',
      'field_info_meeting_photo' => 'right',
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
  );
  $export['node|info_meeting|full'] = $ds_layout;

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
