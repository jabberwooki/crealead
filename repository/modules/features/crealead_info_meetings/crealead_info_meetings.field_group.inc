<?php
/**
 * @file
 * crealead_info_meetings.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function crealead_info_meetings_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_plan_photo|node|info_meeting|full';
  $field_group->group_name = 'group_plan_photo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'info_meeting';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Voir le plan et la photo du bâtiment',
    'weight' => '4',
    'children' => array(
      0 => 'field_info_meeting_map',
      1 => 'field_info_meeting_photo',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Voir le plan et la photo du bâtiment',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-plan-photo field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_plan_photo|node|info_meeting|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program|node|info_meeting|full';
  $field_group->group_name = 'group_program';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'info_meeting';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Voir le programme',
    'weight' => '2',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Voir le programme',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-program field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_program|node|info_meeting|full'] = $field_group;

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
  $field_groups['group_registrant_infos|registration|info_meeting_registration|form'] = $field_group;

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
  $field_groups['group_registrant_infos|registration|info_meeting_registration|full'] = $field_group;

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
  $field_groups['group_registrant_other_infos|registration|info_meeting_registration|form'] = $field_group;

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
  $field_groups['group_registrant_other_infos|registration|info_meeting_registration|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Autres informations');
  t('Voir le plan et la photo du bâtiment');
  t('Voir le programme');
  t('Vos informations');

  return $field_groups;
}
