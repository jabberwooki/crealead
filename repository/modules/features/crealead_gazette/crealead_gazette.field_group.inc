<?php
/**
 * @file
 * crealead_gazette.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function crealead_gazette_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gazette_teaser|node|gazette|teaser';
  $field_group->group_name = 'group_gazette_teaser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gazette';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group gazette accroche',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_gazette_date_envoi',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group gazette accroche',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-gazette-teaser field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_gazette_teaser|node|gazette|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('group gazette accroche');

  return $field_groups;
}
