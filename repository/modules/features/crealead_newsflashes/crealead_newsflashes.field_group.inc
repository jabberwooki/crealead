<?php
/**
 * @file
 * crealead_newsflashes.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function crealead_newsflashes_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crealead_fields|node|newsflash|form';
  $field_group->group_name = 'group_crealead_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'newsflash';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Champs Crealead',
    'weight' => '11',
    'children' => array(
      0 => 'field_sent',
      1 => 'field_sent_by_email',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-crealead-fields field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_crealead_fields|node|newsflash|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Champs Crealead');

  return $field_groups;
}
