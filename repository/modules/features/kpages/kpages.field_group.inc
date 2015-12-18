<?php
/**
 * @file
 * kpages.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function kpages_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col8|node|page|full';
  $field_group->group_name = 'group_col8';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'group col8',
    'weight' => '7',
    'children' => array(
      0 => 'body',
      1 => 'field_files',
      2 => 'field_galleries',
      3 => 'field_videos',
      4 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group col8',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col8 field-group-div col-md-8 col-md-offset-2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_col8|node|page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row|node|page|full';
  $field_group->group_name = 'group_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group row',
    'weight' => '0',
    'children' => array(
      0 => 'group_col8',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group row',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-row field-group-div row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_row|node|page|full'] = $field_group;

  return $export;
}
