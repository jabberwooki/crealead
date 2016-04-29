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
    'weight' => '1',
    'children' => array(
      0 => 'field_training_duration',
      1 => 'field_training_attendees_number',
      2 => 'field_scheduled_sessions',
      3 => 'field_training_price',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_training_header_center|node|training|full';
  $field_group->group_name = 'group_training_header_center';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_training_header';
  $field_group->data = array(
    'label' => 'En-tête centre',
    'weight' => '31',
    'children' => array(
      0 => 'field_training_type',
      1 => 'field_introduction',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'En-tête centre',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-training-header-center field-group-div col-md-7',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_training_header_center|node|training|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_training_header_left|node|training|full';
  $field_group->group_name = 'group_training_header_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_training_header';
  $field_group->data = array(
    'label' => 'En-tête gauche',
    'weight' => '30',
    'children' => array(
      0 => 'field_training_related_brands',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'En-tête gauche',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-training-header-left field-group-div col-md-3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_training_header_left|node|training|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_training_header|node|training|full';
  $field_group->group_name = 'group_training_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'En-tête',
    'weight' => '0',
    'children' => array(
      0 => 'group_training_header_left',
      1 => 'group_training_header_right',
      2 => 'group_training_header_center',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'En-tête',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-training-header field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_training_header|node|training|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_training_left_col|node|training|full';
  $field_group->group_name = 'group_training_left_col';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Colonne gauche',
    'weight' => '7',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Colonne gauche',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-training-left-col field-group-div col-md-8',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_training_left_col|node|training|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_training_right_col|node|training|full';
  $field_group->group_name = 'group_training_right_col';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Colonne droite',
    'weight' => '9',
    'children' => array(
      0 => 'field_training_public',
      1 => 'field_training_requirements',
      2 => 'field_training_aims',
      3 => 'field_training_theme',
      4 => 'field_training_method',
      5 => 'field_training_teachers',
      6 => 'field_training_validation',
      7 => 'field_assessment_methods',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Colonne droite',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-training-right-col field-group-div col-md-4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_training_right_col|node|training|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Caractéristiques');
  t('Colonne droite');
  t('Colonne gauche');
  t('En-tête');
  t('En-tête centre');
  t('En-tête gauche');

  return $field_groups;
}
