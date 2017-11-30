<?php
/**
 * @file
 * crealead_warnings.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function crealead_warnings_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_selection_settings|node|warning|form';
  $field_group->group_name = 'group_selection_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'warning';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sélection des informations à recevoir',
    'weight' => '3',
    'children' => array(
      0 => 'field_warning_when',
      1 => 'field_warning_keywords',
      2 => 'field_selection_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sélection des informations à recevoir',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-selection-settings field-group-fieldset',
        'description' => 'Attention ! Nous vous rappelons que les notifications sont immédiates - Vous risquez de recevoir une grande quantité d\'information.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_selection_settings|node|warning|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sélection des informations à recevoir');

  return $field_groups;
}
