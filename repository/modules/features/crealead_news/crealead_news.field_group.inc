<?php
/**
 * @file
 * crealead_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function crealead_news_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crealead_settings|node|news|form';
  $field_group->group_name = 'group_crealead_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paramètres Crealead',
    'weight' => '14',
    'children' => array(
      0 => 'field_sorting_date',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-crealead-settings field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_crealead_settings|node|news|form'] = $field_group;

  return $export;
}
