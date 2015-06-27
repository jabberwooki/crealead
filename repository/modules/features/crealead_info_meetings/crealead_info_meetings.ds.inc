<?php
/**
 * @file
 * crealead_info_meetings.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function crealead_info_meetings_ds_layout_settings_info() {
  $export = array();

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
        0 => 'field_registrant_title',
        1 => 'created',
        2 => 'field_registrant_firstname',
        3 => 'updated',
        4 => 'field_registrant_lastname',
        5 => 'spaces',
        6 => 'mail',
        7 => 'field_registrant_phone',
        8 => 'group_registrant_infos',
        9 => 'group_registrant_other_infos',
        10 => 'field_registrant_project_domain',
        11 => 'field_registrant_status',
      ),
    ),
    'fields' => array(
      'field_registrant_title' => 'central',
      'created' => 'central',
      'field_registrant_firstname' => 'central',
      'updated' => 'central',
      'field_registrant_lastname' => 'central',
      'spaces' => 'central',
      'mail' => 'central',
      'field_registrant_phone' => 'central',
      'group_registrant_infos' => 'central',
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
