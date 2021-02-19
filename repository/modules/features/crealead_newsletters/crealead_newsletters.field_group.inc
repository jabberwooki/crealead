<?php
/**
 * @file
 * crealead_newsletters.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function crealead_newsletters_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advisors|paragraphs_item|team|form';
  $field_group->group_name = 'group_advisors';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'team';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_team_content';
  $field_group->data = array(
    'label' => 'Référents',
    'weight' => '3',
    'children' => array(
      0 => 'field_advisor_members',
      1 => 'field_advisors_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-advisors field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
        'description' => '',
      ),
    ),
  );
  $field_groups['group_advisors|paragraphs_item|team|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advisors|paragraphs_item|team|full';
  $field_group->group_name = 'group_advisors';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'team';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_team_content';
  $field_group->data = array(
    'label' => 'Référents',
    'weight' => '3',
    'children' => array(
      0 => 'field_advisor_members',
      1 => 'field_advisors_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Référents',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'team-group group-advisors field-group-html-element col-md-3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_advisors|paragraphs_item|team|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_center_content|paragraphs_item|infos_flash_3_cols|full';
  $field_group->group_name = 'group_col_center_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'infos_flash_3_cols';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_col_center';
  $field_group->data = array(
    'label' => 'Contenu',
    'weight' => '17',
    'children' => array(
      0 => 'field_title_center',
      1 => 'field_text_center',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contenu',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col-content group-col-center-content field-group-div col-md-8',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_col_center_content|paragraphs_item|infos_flash_3_cols|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_center_link|paragraphs_item|infos_flash_3_cols|full';
  $field_group->group_name = 'group_col_center_link';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'infos_flash_3_cols';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_col_center';
  $field_group->data = array(
    'label' => 'Lien',
    'weight' => '19',
    'children' => array(
      0 => 'field_infoflash_link_center',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Lien',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-infoflash-link group-col-center-link field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_col_center_link|paragraphs_item|infos_flash_3_cols|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_center|paragraphs_item|infos_flash_3_cols|form';
  $field_group->group_name = 'group_col_center';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'infos_flash_3_cols';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Colonne centrale',
    'weight' => '1',
    'children' => array(
      0 => 'field_picto_center',
      1 => 'field_title_center',
      2 => 'field_text_center',
      3 => 'field_infoflash_link_center',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-col-center field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_col_center|paragraphs_item|infos_flash_3_cols|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_center|paragraphs_item|infos_flash_3_cols|full';
  $field_group->group_name = 'group_col_center';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'infos_flash_3_cols';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Colonne centrale',
    'weight' => '1',
    'children' => array(
      0 => 'group_col_center_content',
      1 => 'group_picto_center',
      2 => 'group_col_center_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Colonne centrale',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col-center field-group-fieldset col-md-4',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_col_center|paragraphs_item|infos_flash_3_cols|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_left_content|paragraphs_item|infos_flash_3_cols|full';
  $field_group->group_name = 'group_col_left_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'infos_flash_3_cols';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_col_left';
  $field_group->data = array(
    'label' => 'Contenu',
    'weight' => '12',
    'children' => array(
      0 => 'field_title_left',
      1 => 'field_text_left',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contenu',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col-content group-col-left-content field-group-div col-md-8',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_col_left_content|paragraphs_item|infos_flash_3_cols|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_left_link|paragraphs_item|infos_flash_3_cols|full';
  $field_group->group_name = 'group_col_left_link';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'infos_flash_3_cols';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_col_left';
  $field_group->data = array(
    'label' => 'Lien',
    'weight' => '13',
    'children' => array(
      0 => 'field_infoflash_link_left',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Lien',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-infoflash-link group-col-left-link field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_col_left_link|paragraphs_item|infos_flash_3_cols|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_left|paragraphs_item|infos_flash_3_cols|form';
  $field_group->group_name = 'group_col_left';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'infos_flash_3_cols';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Colonne gauche',
    'weight' => '0',
    'children' => array(
      0 => 'field_picto_left',
      1 => 'field_title_left',
      2 => 'field_text_left',
      3 => 'field_infoflash_link_left',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-col-left field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_col_left|paragraphs_item|infos_flash_3_cols|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_left|paragraphs_item|infos_flash_3_cols|full';
  $field_group->group_name = 'group_col_left';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'infos_flash_3_cols';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Colonne gauche',
    'weight' => '0',
    'children' => array(
      0 => 'group_col_left_content',
      1 => 'group_picto_left',
      2 => 'group_col_left_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Colonne gauche',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col-left field-group-fieldset col-md-4',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_col_left|paragraphs_item|infos_flash_3_cols|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_right_content|paragraphs_item|infos_flash_3_cols|full';
  $field_group->group_name = 'group_col_right_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'infos_flash_3_cols';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_col_right';
  $field_group->data = array(
    'label' => 'Contenu',
    'weight' => '22',
    'children' => array(
      0 => 'field_title_right',
      1 => 'field_text_right',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contenu',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col-content group-col-right-content field-group-div col-md-9',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_col_right_content|paragraphs_item|infos_flash_3_cols|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_right_link|paragraphs_item|infos_flash_3_cols|full';
  $field_group->group_name = 'group_col_right_link';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'infos_flash_3_cols';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_col_right';
  $field_group->data = array(
    'label' => 'Lien',
    'weight' => '23',
    'children' => array(
      0 => 'field_infoflash_link_right',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Lien',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-infoflash-link group-col-right-link field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_col_right_link|paragraphs_item|infos_flash_3_cols|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_right|paragraphs_item|infos_flash_3_cols|form';
  $field_group->group_name = 'group_col_right';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'infos_flash_3_cols';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Colonne droite',
    'weight' => '2',
    'children' => array(
      0 => 'field_picto_right',
      1 => 'field_title_right',
      2 => 'field_text_right',
      3 => 'field_infoflash_link_right',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-col-right field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_col_right|paragraphs_item|infos_flash_3_cols|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_right|paragraphs_item|infos_flash_3_cols|full';
  $field_group->group_name = 'group_col_right';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'infos_flash_3_cols';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Colonne droite',
    'weight' => '2',
    'children' => array(
      0 => 'group_picto_right',
      1 => 'group_col_right_content',
      2 => 'group_col_right_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Colonne droite',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col-right field-group-fieldset col-md-4',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_col_right|paragraphs_item|infos_flash_3_cols|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_communication|paragraphs_item|team|form';
  $field_group->group_name = 'group_communication';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'team';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_team_content';
  $field_group->data = array(
    'label' => 'Communication',
    'weight' => '5',
    'children' => array(
      0 => 'field_com_members',
      1 => 'field_communication_title',
      2 => 'field_nl_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-communication field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
        'description' => '',
      ),
    ),
  );
  $field_groups['group_communication|paragraphs_item|team|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_communication|paragraphs_item|team|full';
  $field_group->group_name = 'group_communication';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'team';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_team_content';
  $field_group->data = array(
    'label' => 'Communication',
    'weight' => '5',
    'children' => array(
      0 => 'field_com_members',
      1 => 'field_communication_title',
      2 => 'field_nl_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Communication',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'team-group group-communication field-group-div col-md-3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_communication|paragraphs_item|team|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_events_list|paragraphs_item|events|form';
  $field_group->group_name = 'group_events_list';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'events';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Liste des évènements',
    'weight' => '1',
    'children' => array(
      0 => 'field_event_text',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Liste des évènements',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-events-list field-group-html-element',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_events_list|paragraphs_item|events|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_events_list|paragraphs_item|events|full';
  $field_group->group_name = 'group_events_list';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'events';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Liste des évènements',
    'weight' => '1',
    'children' => array(
      0 => 'field_event_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Liste des évènements',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-events-list field-group-fieldset',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_events_list|paragraphs_item|events|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_management|paragraphs_item|team|form';
  $field_group->group_name = 'group_management';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'team';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_team_content';
  $field_group->data = array(
    'label' => 'Direction',
    'weight' => '2',
    'children' => array(
      0 => 'field_management_members',
      1 => 'field_management_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Direction',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_management|paragraphs_item|team|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_management|paragraphs_item|team|full';
  $field_group->group_name = 'group_management';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'team';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_team_content';
  $field_group->data = array(
    'label' => 'Direction',
    'weight' => '2',
    'children' => array(
      0 => 'field_management_members',
      1 => 'field_management_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Direction',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'team-group group-management field-group-html-element col-md-3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_management|paragraphs_item|team|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_p_wrapper|paragraphs_item|person|full';
  $field_group->group_name = 'group_p_wrapper';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'person';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Conteneur',
    'weight' => '0',
    'children' => array(
      0 => 'field_p_name',
      1 => 'field_p_function',
      2 => 'field_p_firstname',
      3 => 'field_p_photo',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Conteneur',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-p-wrapper field-group-div col-md-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_p_wrapper|paragraphs_item|person|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_people_left|paragraphs_item|whatsnew|form';
  $field_group->group_name = 'group_people_left';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'whatsnew';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wathsnew_left';
  $field_group->data = array(
    'label' => 'Personnes',
    'weight' => '3',
    'children' => array(
      0 => 'field_people_list_left',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Personnes',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-people-left field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_people_left|paragraphs_item|whatsnew|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_people_right|paragraphs_item|whatsnew|form';
  $field_group->group_name = 'group_people_right';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'whatsnew';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wathsnew_right';
  $field_group->data = array(
    'label' => 'Personnes',
    'weight' => '4',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Personnes',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-people-right field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_people_right|paragraphs_item|whatsnew|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_picto_center|paragraphs_item|infos_flash_3_cols|full';
  $field_group->group_name = 'group_picto_center';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'infos_flash_3_cols';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_col_center';
  $field_group->data = array(
    'label' => 'Pictogramme',
    'weight' => '16',
    'children' => array(
      0 => 'field_picto_center',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Pictogramme',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-picto-center field-group-div col-md-4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_picto_center|paragraphs_item|infos_flash_3_cols|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_picto_left|paragraphs_item|infos_flash_3_cols|full';
  $field_group->group_name = 'group_picto_left';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'infos_flash_3_cols';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_col_left';
  $field_group->data = array(
    'label' => 'Pictogramme',
    'weight' => '11',
    'children' => array(
      0 => 'field_picto_left',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Pictogramme',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-picto-left field-group-div col-md-4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_picto_left|paragraphs_item|infos_flash_3_cols|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_picto_right|paragraphs_item|infos_flash_3_cols|full';
  $field_group->group_name = 'group_picto_right';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'infos_flash_3_cols';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_col_right';
  $field_group->data = array(
    'label' => 'Pictogramme',
    'weight' => '21',
    'children' => array(
      0 => 'field_picto_right',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Pictogramme',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-picto-right field-group-div col-md-3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_picto_right|paragraphs_item|infos_flash_3_cols|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pole_g|paragraphs_item|team|form';
  $field_group->group_name = 'group_pole_g';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'team';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_team_content';
  $field_group->data = array(
    'label' => 'Pôle G',
    'weight' => '4',
    'children' => array(
      0 => 'field_pole_g_members',
      1 => 'field_pole_g_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => '',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
        'description' => '',
      ),
    ),
  );
  $field_groups['group_pole_g|paragraphs_item|team|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pole_g|paragraphs_item|team|full';
  $field_group->group_name = 'group_pole_g';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'team';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_team_content';
  $field_group->data = array(
    'label' => 'Pôle G',
    'weight' => '4',
    'children' => array(
      0 => 'field_pole_g_members',
      1 => 'field_pole_g_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Pôle G',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'team-group group-pole-g field-group-html-element col-md-3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pole_g|paragraphs_item|team|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_team_content|paragraphs_item|team|form';
  $field_group->group_name = 'group_team_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'team';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contenu',
    'weight' => '1',
    'children' => array(
      0 => 'group_management',
      1 => 'group_advisors',
      2 => 'group_pole_g',
      3 => 'group_communication',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-team-content field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_team_content|paragraphs_item|team|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_team_content|paragraphs_item|team|full';
  $field_group->group_name = 'group_team_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'team';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contenu',
    'weight' => '1',
    'children' => array(
      0 => 'group_management',
      1 => 'group_advisors',
      2 => 'group_pole_g',
      3 => 'group_communication',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contenu',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-team-content field-group-div row row-eq-height',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_team_content|paragraphs_item|team|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wathsnew_left|paragraphs_item|whatsnew|default';
  $field_group->group_name = 'group_wathsnew_left';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'whatsnew';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'A gauche',
    'weight' => '1',
    'children' => array(
      0 => 'field_subtitle_left',
      1 => 'field_people_list_left',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'A gauche',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wathsnew-left field-group-html-element group-wathsnew',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_wathsnew_left|paragraphs_item|whatsnew|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wathsnew_left|paragraphs_item|whatsnew|form';
  $field_group->group_name = 'group_wathsnew_left';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'whatsnew';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'A gauche',
    'weight' => '2',
    'children' => array(
      0 => 'field_subtitle_left',
      1 => 'group_people_left',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_wathsnew_left|paragraphs_item|whatsnew|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wathsnew_left|paragraphs_item|whatsnew|full';
  $field_group->group_name = 'group_wathsnew_left';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'whatsnew';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'A gauche',
    'weight' => '1',
    'children' => array(
      0 => 'field_subtitle_left',
      1 => 'field_people_list_left',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'A gauche',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wathsnew group-wathsnew-left field-group-html-element col-md-6',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_wathsnew_left|paragraphs_item|whatsnew|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wathsnew_right|paragraphs_item|whatsnew|default';
  $field_group->group_name = 'group_wathsnew_right';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'whatsnew';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'A droite',
    'weight' => '4',
    'children' => array(
      0 => 'field_subtitle_right',
      1 => 'field_people_list_right',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'A droite',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wathsnew-right field-group-html-element group-wathsnew',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_wathsnew_right|paragraphs_item|whatsnew|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wathsnew_right|paragraphs_item|whatsnew|form';
  $field_group->group_name = 'group_wathsnew_right';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'whatsnew';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'A droite',
    'weight' => '4',
    'children' => array(
      0 => 'field_subtitle_right',
      1 => 'field_people_list_right',
      2 => 'group_people_right',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'A droite',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-wathsnew-right field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'element' => 'div',
        'attributes' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wathsnew_right|paragraphs_item|whatsnew|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wathsnew_right|paragraphs_item|whatsnew|full';
  $field_group->group_name = 'group_wathsnew_right';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'whatsnew';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'A droite',
    'weight' => '4',
    'children' => array(
      0 => 'field_subtitle_right',
      1 => 'field_people_list_right',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'A droite',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wathsnew group-wathsnew-right field-group-html-element col-md-6',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_wathsnew_right|paragraphs_item|whatsnew|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_zoom_content|paragraphs_item|zoom|form';
  $field_group->group_name = 'group_zoom_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'zoom';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contenu',
    'weight' => '3',
    'children' => array(
      0 => 'field_zoom_subtitle',
      1 => 'field_zoom_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contenu',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-zoom-content field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_zoom_content|paragraphs_item|zoom|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_zoom_content|paragraphs_item|zoom|full';
  $field_group->group_name = 'group_zoom_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'zoom';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contenu',
    'weight' => '3',
    'children' => array(
      0 => 'field_zoom_subtitle',
      1 => 'field_zoom_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contenu',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-zoom-content field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_zoom_content|paragraphs_item|zoom|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('A droite');
  t('A gauche');
  t('Colonne centrale');
  t('Colonne droite');
  t('Colonne gauche');
  t('Communication');
  t('Conteneur');
  t('Contenu');
  t('Direction');
  t('Lien');
  t('Liste des évènements');
  t('Personnes');
  t('Pictogramme');
  t('Pôle G');
  t('Référents');

  return $field_groups;
}
