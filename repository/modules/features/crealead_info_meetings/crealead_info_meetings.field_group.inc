<?php
/**
 * @file
 * crealead_info_meetings.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function crealead_info_meetings_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registrant_infos|registration|info_meeting_registration|form';
  $field_group->group_name = 'group_registrant_infos';
  $field_group->entity_type = 'registration';
  $field_group->bundle = 'info_meeting_registration';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vos informations',
    'weight' => '1',
    'children' => array(
      0 => 'field_registrant_lastname',
      1 => 'field_registrant_firstname',
      2 => 'field_registrant_phone',
      3 => 'anon_mail',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-registrant-infos field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_registrant_infos|registration|info_meeting_registration|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registrant_infos|registration|info_meeting_registration|full';
  $field_group->group_name = 'group_registrant_infos';
  $field_group->entity_type = 'registration';
  $field_group->bundle = 'info_meeting_registration';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vos informations',
    'weight' => '4',
    'children' => array(
      0 => 'field_registrant_lastname',
      1 => 'field_registrant_firstname',
      2 => 'field_registrant_phone',
      3 => 'field_registrant_title',
      4 => 'mail',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-registrant-infos field-group-fieldset',
      ),
    ),
  );
  $export['group_registrant_infos|registration|info_meeting_registration|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registrant_other_infos|registration|info_meeting_registration|form';
  $field_group->group_name = 'group_registrant_other_infos';
  $field_group->entity_type = 'registration';
  $field_group->bundle = 'info_meeting_registration';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Autres informations',
    'weight' => '2',
    'children' => array(
      0 => 'field_registrant_status',
      1 => 'field_registrant_project_domain',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-registrant-other-infos field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_registrant_other_infos|registration|info_meeting_registration|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registrant_other_infos|registration|info_meeting_registration|full';
  $field_group->group_name = 'group_registrant_other_infos';
  $field_group->entity_type = 'registration';
  $field_group->bundle = 'info_meeting_registration';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Autres informations',
    'weight' => '5',
    'children' => array(
      0 => 'field_registrant_status',
      1 => 'field_registrant_project_domain',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-registrant-other-infos field-group-fieldset',
      ),
    ),
  );
  $export['group_registrant_other_infos|registration|info_meeting_registration|full'] = $field_group;

  return $export;
}
