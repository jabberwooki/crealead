<?php
/**
 * @file
 * crealead_profiles.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function crealead_profiles_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_profile|user|user|full';
  $field_group->group_name = 'group_user_profile';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_user_tabs';
  $field_group->data = array(
    'label' => 'Ma page entrepreneur',
    'weight' => '8',
    'children' => array(
      0 => 'profile_coe_page',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'label' => 'Ma page entrepreneur',
      'instance_settings' => array(
        'classes' => 'group-user-profile field-group-bootstrap_fieldgroup_nav_item',
      ),
    ),
  );
  $export['group_user_profile|user|user|full'] = $field_group;

  return $export;
}
