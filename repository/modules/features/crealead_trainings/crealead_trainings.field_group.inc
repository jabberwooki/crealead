<?php
/**
 * @file
 * crealead_trainings.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function crealead_trainings_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_training_data|node|training|full';
  $field_group->group_name = 'group_training_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Caractéristiques',
    'weight' => '2',
    'children' => array(
      0 => 'field_training_duration',
      1 => 'field_training_attendees_number',
      2 => 'field_training_price',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Caractéristiques',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-training-data field-group-div col-md-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_training_data|node|training|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Caractéristiques');

  return $field_groups;
}
