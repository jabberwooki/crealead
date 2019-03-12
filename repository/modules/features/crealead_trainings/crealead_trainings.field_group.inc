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
  $field_group->identifier = 'group_crealead_fields|node|training|form';
  $field_group->group_name = 'group_crealead_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Champs Crealead',
    'weight' => '32',
    'children' => array(
      0 => 'field_training_search',
      1 => 'field_previous_status',
      2 => 'field_recommendations_count',
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
  $field_groups['group_crealead_fields|node|training|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_session_details|node|training_session|colorbox';
  $field_group->group_name = 'group_session_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training_session';
  $field_group->mode = 'colorbox';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Détails de la session',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_session_dates',
      2 => 'field_session_place',
      3 => 'field_funded_session',
      4 => 'see_all_sessions_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-session-details field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_session_details|node|training_session|colorbox'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sub_wrapper_teaser|node|training|list';
  $field_group->group_name = 'group_sub_wrapper_teaser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'list';
  $field_group->parent_name = 'group_wrapper_teaser';
  $field_group->data = array(
    'label' => 'Sub group wrapper teaser',
    'weight' => '34',
    'children' => array(
      0 => 'field_training_aims',
      1 => 'field_training_duration',
      2 => 'field_training_related_brands',
      3 => 'field_training_teachers',
      4 => 'field_training_theme',
      5 => 'field_training_type',
      6 => 'training_nid',
      7 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sub group wrapper teaser',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-sub-wrapper-teaser field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sub_wrapper_teaser|node|training|list'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sub_wrapper_teaser|node|training|teaser';
  $field_group->group_name = 'group_sub_wrapper_teaser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_wrapper_teaser';
  $field_group->data = array(
    'label' => 'Sub wrapper teaser',
    'weight' => '35',
    'children' => array(
      0 => 'field_training_aims',
      1 => 'field_training_duration',
      2 => 'field_training_theme',
      3 => 'field_training_type',
      4 => 'training_nid',
      5 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sub wrapper teaser',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-sub-wrapper-teaser field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sub_wrapper_teaser|node|training|teaser'] = $field_group;

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
      0 => 'field_scheduled_sessions',
      1 => 'field_training_attendees_number',
      2 => 'field_training_duration',
      3 => 'group_training_prices',
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
      0 => 'field_introduction',
      1 => 'field_training_type',
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
  $field_group->identifier = 'group_training_header_right|node|training|full';
  $field_group->group_name = 'group_training_header_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_training_header';
  $field_group->data = array(
    'label' => 'En-tête droit',
    'weight' => '32',
    'children' => array(
      0 => 'training_contact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'En-tête droit',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-training-header-right field-group-div col-md-2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_training_header_right|node|training|full'] = $field_group;

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
      0 => 'group_training_header_center',
      1 => 'group_training_header_left',
      2 => 'group_training_header_right',
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
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_recommended_by',
      2 => 'recommendation_action',
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
  $field_group->identifier = 'group_training_prices|node|training|full';
  $field_group->group_name = 'group_training_prices';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_training_data';
  $field_group->data = array(
    'label' => 'Tarifs',
    'weight' => '4',
    'children' => array(
      0 => 'field_training_price',
      1 => 'field_training_crealead_price',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tarifs',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-training-prices field-group-div col-md-3 training-prices',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_training_prices|node|training|full'] = $field_group;

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
    'weight' => '3',
    'children' => array(
      0 => 'field_assessment_methods',
      1 => 'field_training_aims',
      2 => 'field_training_method',
      3 => 'field_training_public',
      4 => 'field_training_requirements',
      5 => 'field_training_teachers',
      6 => 'field_training_validation',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_teaser|node|training|list';
  $field_group->group_name = 'group_wrapper_teaser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'list';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group wrapper teaser',
    'weight' => '0',
    'children' => array(
      0 => 'field_recommended_by',
      1 => 'recommendation_action',
      2 => 'recommendations_number',
      3 => 'group_sub_wrapper_teaser',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group wrapper teaser',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-teaser field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_teaser|node|training|list'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_teaser|node|training|teaser';
  $field_group->group_name = 'group_wrapper_teaser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group wrapper teaser',
    'weight' => '0',
    'children' => array(
      0 => 'field_recommended_by',
      1 => 'recommendation_action',
      2 => 'recommendations_number',
      3 => 'group_sub_wrapper_teaser',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group wrapper teaser',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-teaser field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_teaser|node|training|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Caractéristiques');
  t('Champs Crealead');
  t('Colonne droite');
  t('Colonne gauche');
  t('Détails de la session');
  t('En-tête');
  t('En-tête centre');
  t('En-tête droit');
  t('En-tête gauche');
  t('Sub group wrapper teaser');
  t('Sub wrapper teaser');
  t('Tarifs');
  t('group wrapper teaser');

  return $field_groups;
}
