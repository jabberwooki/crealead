<?php
/**
 * @file
 * kcore.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function kcore_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_account|user|user|full';
  $field_group->group_name = 'group_user_account';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_user_tabs';
  $field_group->data = array(
    'label' => 'Compte',
    'weight' => '7',
    'children' => array(
      0 => 'field_user_lastname',
      1 => 'field_user_firstname',
      2 => 'field_user_referent',
      3 => 'masquerade',
      4 => 'summary',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-user-account field-group-bootstrap_fieldgroup_nav_item',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_user_account|user|user|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_tabs|user|user|full';
  $field_group->group_name = 'group_user_tabs';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Barre d\'onglets Bootstrap',
    'weight' => '0',
    'children' => array(
      0 => 'group_user_account',
      1 => 'group_user_profile',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-user-tabs field-group-bootstrap_fieldgroup_nav',
        'bootstrap_nav_type' => 'tabs',
        'bootstrap_stacked' => 0,
        'bootstrap_orientation' => 0,
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_user_tabs|user|user|full'] = $field_group;

  return $export;
}
