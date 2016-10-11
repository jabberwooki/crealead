<?php
/**
 * @file
 * crealead_info_meetings.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function crealead_info_meetings_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dependent_infos|registration|info_meeting_registration|form';
  $field_group->group_name = 'group_dependent_infos';
  $field_group->entity_type = 'registration';
  $field_group->bundle = 'info_meeting_registration';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Infos dépendantes',
    'weight' => '5',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Infos dépendantes',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-dependent-infos field-group-div col-md-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_dependent_infos|registration|info_meeting_registration|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_plan_photo|node|info_meeting|full';
  $field_group->group_name = 'group_plan_photo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'info_meeting';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Voir le plan et la photo du bâtiment',
    'weight' => '4',
    'children' => array(
      0 => 'field_info_meeting_map',
      1 => 'field_info_meeting_photo',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Voir le plan et la photo du bâtiment',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-plan-photo field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_plan_photo|node|info_meeting|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program|node|info_meeting|full';
  $field_group->group_name = 'group_program';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'info_meeting';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Voir le programme',
    'weight' => '2',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Voir le programme',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-program field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_program|node|info_meeting|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registrant_infos|registration|info_meeting_registration|default';
  $field_group->group_name = 'group_registrant_infos';
  $field_group->entity_type = 'registration';
  $field_group->bundle = 'info_meeting_registration';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vos informations',
    'weight' => '4',
    'children' => array(
      0 => 'field_registrant_firstname',
      1 => 'field_registrant_lastname',
      2 => 'field_registrant_phone',
      3 => 'field_registrant_title',
      4 => 'mail',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Vos informations',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-registrant-infos field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_registrant_infos|registration|info_meeting_registration|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registrant_infos|registration|info_meeting_registration|form';
  $field_group->group_name = 'group_registrant_infos';
  $field_group->entity_type = 'registration';
  $field_group->bundle = 'info_meeting_registration';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vos informations',
    'weight' => '1',
    'children' => array(
      0 => 'field_registrant_firstname',
      1 => 'field_registrant_lastname',
      2 => 'field_registrant_phone',
      3 => 'anon_mail',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-registrant-infos field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_registrant_infos|registration|info_meeting_registration|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registrant_infos|registration|info_meeting_registration|full';
  $field_group->group_name = 'group_registrant_infos';
  $field_group->entity_type = 'registration';
  $field_group->bundle = 'info_meeting_registration';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vos informations',
    'weight' => '4',
    'children' => array(
      0 => 'field_registrant_lastname',
      1 => 'field_registrant_firstname',
      2 => 'field_registrant_phone',
      3 => 'field_registrant_title',
      4 => 'mail',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-registrant-infos field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_registrant_infos|registration|info_meeting_registration|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registrant_meeting_date|registration|info_meeting_registration|default';
  $field_group->group_name = 'group_registrant_meeting_date';
  $field_group->entity_type = 'registration';
  $field_group->bundle = 'info_meeting_registration';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Date de la réunion',
    'weight' => '3',
    'children' => array(
      0 => 'info_meeting_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Date de la réunion',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-registrant-meeting-date field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_registrant_meeting_date|registration|info_meeting_registration|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registrant_optional_infos|registration|info_meeting_registration|default';
  $field_group->group_name = 'group_registrant_optional_infos';
  $field_group->entity_type = 'registration';
  $field_group->bundle = 'info_meeting_registration';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Informations facultatives',
    'weight' => '6',
    'children' => array(
      0 => 'field_registrant_postal_code',
      1 => 'field_registrant_city',
      2 => 'field_registrant_birthday',
      3 => 'field_registrant_gender',
      4 => 'field_registrant_how',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Informations facultatives',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-registrant-optional-infos field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_registrant_optional_infos|registration|info_meeting_registration|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registrant_optional_infos|registration|info_meeting_registration|form';
  $field_group->group_name = 'group_registrant_optional_infos';
  $field_group->entity_type = 'registration';
  $field_group->bundle = 'info_meeting_registration';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Informations facultatives',
    'weight' => '3',
    'children' => array(
      0 => 'field_registrant_birthday',
      1 => 'field_registrant_city',
      2 => 'field_registrant_gender',
      3 => 'field_registrant_how',
      4 => 'field_registrant_postal_code',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Informations facultatives',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-registrant-optional-infos field-group-div',
        'description' => 'Si vous le souhaitez, vous pouvez aussi remplir les champs suivants.',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_registrant_optional_infos|registration|info_meeting_registration|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registrant_other_infos|registration|info_meeting_registration|default';
  $field_group->group_name = 'group_registrant_other_infos';
  $field_group->entity_type = 'registration';
  $field_group->bundle = 'info_meeting_registration';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Autres infos',
    'weight' => '5',
    'children' => array(
      0 => 'field_registrant_project_domain',
      1 => 'field_registrant_status',
      2 => 'field_beneficiary_number',
      3 => 'field_unemployment_date',
      4 => 'field_other_specify',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Autres infos',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-registrant-other-infos field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_registrant_other_infos|registration|info_meeting_registration|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registrant_other_infos|registration|info_meeting_registration|form';
  $field_group->group_name = 'group_registrant_other_infos';
  $field_group->entity_type = 'registration';
  $field_group->bundle = 'info_meeting_registration';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Autres informations',
    'weight' => '2',
    'children' => array(
      0 => 'field_registrant_project_domain',
      1 => 'field_registrant_status',
      2 => 'field_beneficiary_number',
      3 => 'field_other_specify',
      4 => 'field_unemployment_date',
      5 => 'field_registrant_dom_activite',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-registrant-other-infos field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_registrant_other_infos|registration|info_meeting_registration|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registrant_other_infos|registration|info_meeting_registration|full';
  $field_group->group_name = 'group_registrant_other_infos';
  $field_group->entity_type = 'registration';
  $field_group->bundle = 'info_meeting_registration';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Autres informations',
    'weight' => '5',
    'children' => array(
      0 => 'field_registrant_status',
      1 => 'field_registrant_project_domain',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-registrant-other-infos field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_registrant_other_infos|registration|info_meeting_registration|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Autres informations');
  t('Autres infos');
  t('Date de la réunion');
  t('Informations facultatives');
  t('Infos dépendantes');
  t('Voir le plan et la photo du bâtiment');
  t('Voir le programme');
  t('Vos informations');

  return $field_groups;
}
