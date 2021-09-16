<?php

/**
 * @file
 * crealead_trainings.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function crealead_trainings_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|achievement|landing_page_block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'achievement';
  $ds_fieldsetting->view_mode = 'landing_page_block';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h4',
        'class' => '',
        'ft' => array(),
        'field_formatter_class' => '',
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_achievement_photos' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|achievement|landing_page_block'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|training_session|colorbox';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'training_session';
  $ds_fieldsetting->view_mode = 'colorbox';
  $ds_fieldsetting->settings = array(
    'interested_switch' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'see_all_sessions_link' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|training_session|colorbox'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|training|certifications_labels_block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'training';
  $ds_fieldsetting->view_mode = 'certifications_labels_block';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h4',
        'class' => '',
        'ft' => array(),
        'field_formatter_class' => '',
      ),
    ),
  );
  $export['node|training|certifications_labels_block'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|training|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'training';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'recommendation_action' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'training_contact' => array(
      'weight' => '7',
      'label' => 'above',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-cl' => 'training-email-label',
          'lb-col' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'training-email-address',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
        'field_formatter_class' => '',
      ),
    ),
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
        'field_formatter_class' => '',
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_assessment_methods' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_scheduled_sessions' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'col-md-5 training-sessions',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_training_aims' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_training_attendees_number' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'col-md-2 training-attendees-number',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_training_duration' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'col-md-2 training-duration',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_training_method' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_training_price' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'training-price',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_training_public' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_training_requirements' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_training_teachers' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_training_validation' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_training_crealead_price' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-cl' => 'crealead_training_price',
          'lb-col' => TRUE,
        ),
      ),
    ),
  );
  $export['node|training|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|training|landing_page_block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'training';
  $ds_fieldsetting->view_mode = 'landing_page_block';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h4',
        'class' => '',
        'ft' => array(),
        'field_formatter_class' => '',
      ),
    ),
  );
  $export['node|training|landing_page_block'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|training|list';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'training';
  $ds_fieldsetting->view_mode = 'list';
  $ds_fieldsetting->settings = array(
    'recommendation_action' => array(
      'weight' => '37',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'recommendations_number' => array(
      'weight' => '36',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'training_nid' => array(
      'weight' => '35',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:8:"sanitize";i:1;s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:5:"token";s:7:"subtype";s:8:"node:nid";}',
        'load_terms' => 0,
        'ft' => array(),
        'field_formatter_class' => '',
      ),
    ),
    'title' => array(
      'weight' => '37',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
        'field_formatter_class' => '',
      ),
    ),
  );
  $export['node|training|list'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|training|sector_brand_block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'training';
  $ds_fieldsetting->view_mode = 'sector_brand_block';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h4',
        'class' => '',
        'ft' => array(),
        'field_formatter_class' => '',
      ),
    ),
  );
  $export['node|training|sector_brand_block'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|training|sessions';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'training';
  $ds_fieldsetting->view_mode = 'sessions';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
        'field_formatter_class' => '',
      ),
    ),
  );
  $export['node|training|sessions'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|training|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'training';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'recommendation_action' => array(
      'weight' => '38',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'recommendations_number' => array(
      'weight' => '37',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'training_nid' => array(
      'weight' => '36',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:8:"sanitize";i:1;s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:5:"token";s:7:"subtype";s:8:"node:nid";}',
        'load_terms' => 0,
        'ft' => array(),
        'field_formatter_class' => '',
      ),
    ),
    'title' => array(
      'weight' => '38',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['node|training|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function crealead_trainings_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'interested_switch';
  $ds_field->label = 'Switch intéréssé/plus intéressé';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'training_session|colorbox';
  $ds_field->properties = array(
    'code' => array(
      'value' => 'switch intéressé/pluss intéressé',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['interested_switch'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'recommendation_action';
  $ds_field->label = 'Action de recommandation';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'training|full
training|list
training|teaser';
  $ds_field->properties = array(
    'code' => array(
      'value' => 'recommend',
      'format' => 'plain_text',
    ),
    'use_token' => 0,
  );
  $export['recommendation_action'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'recommendations_number';
  $ds_field->label = 'Nombre de recommandations';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'training|list
training|teaser';
  $ds_field->properties = array(
    'code' => array(
      'value' => 'recommendations number',
      'format' => 'plain_text',
    ),
    'use_token' => 0,
  );
  $export['recommendations_number'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'see_all_sessions_link';
  $ds_field->label = 'Voir toutes les sessions';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'training_session|colorbox';
  $ds_field->properties = array(
    'code' => array(
      'value' => 'sessions
',
      'format' => 'plain_text',
    ),
    'use_token' => 0,
  );
  $export['see_all_sessions_link'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'training_contact';
  $ds_field->label = 'Nous contacter';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'training|full';
  $ds_field->properties = array(
    'code' => array(
      'value' => 'Email de contact
',
      'format' => 'plain_text',
    ),
    'use_token' => 0,
  );
  $export['training_contact'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'training_nid';
  $ds_field->label = 'Nid';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'training|list
training|teaser';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Ex. : h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['training_nid'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function crealead_trainings_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_interested_users|sessions';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_interested_users';
  $ds_layout->view_mode = 'sessions';
  $ds_layout->layout = 'bootstrap_6_6';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_user_name',
        1 => 'field_user_contact',
      ),
    ),
    'fields' => array(
      'field_user_name' => 'left',
      'field_user_contact' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['field_collection_item|field_interested_users|sessions'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|achievement|landing_page_block';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'achievement';
  $ds_layout->view_mode = 'landing_page_block';
  $ds_layout->layout = 'bootstrap_6_6';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_achievement_photos',
      ),
      'right' => array(
        1 => 'title',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'field_achievement_photos' => 'left',
      'title' => 'right',
      'body' => 'right',
    ),
    'limit' => array(
      'field_achievement_photos' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|achievement|landing_page_block'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|training_session|colorbox';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'training_session';
  $ds_layout->view_mode = 'colorbox';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_related_training',
        1 => 'field_funded_session',
        2 => 'see_all_sessions_link',
        3 => 'group_session_details',
        4 => 'interested_switch',
        5 => 'field_session_dates',
        6 => 'field_session_place',
        7 => 'field_interested_users',
        8 => 'body',
      ),
    ),
    'fields' => array(
      'field_related_training' => 'central',
      'field_funded_session' => 'central',
      'see_all_sessions_link' => 'central',
      'group_session_details' => 'central',
      'interested_switch' => 'central',
      'field_session_dates' => 'central',
      'field_session_place' => 'central',
      'field_interested_users' => 'central',
      'body' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|training_session|colorbox'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|training_session|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'training_session';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_related_training',
        1 => 'field_session_dates',
        2 => 'field_session_place',
        3 => 'body',
        4 => 'field_interested_users',
      ),
    ),
    'fields' => array(
      'field_related_training' => 'central',
      'field_session_dates' => 'central',
      'field_session_place' => 'central',
      'body' => 'central',
      'field_interested_users' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|training_session|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|training|certifications_labels_block';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'training';
  $ds_layout->view_mode = 'certifications_labels_block';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'title' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|training|certifications_labels_block'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|training|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'training';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_subscription_method',
        1 => 'group_training_header',
        2 => 'field_teaching_mode',
        3 => 'field_training_duration',
        4 => 'group_training_data',
        5 => 'field_training_public',
        6 => 'group_training_left_col',
        7 => 'field_training_attendees_number',
        8 => 'field_training_price',
        9 => 'title',
        10 => 'group_training_right_col',
        11 => 'field_training_requirements',
        12 => 'group_training_prices',
        13 => 'field_training_aims',
        14 => 'field_introduction',
        15 => 'field_training_crealead_price',
        16 => 'field_training_method',
        17 => 'field_training_teachers',
        18 => 'field_scheduled_sessions',
        19 => 'field_training_validation',
        20 => 'training_contact',
        21 => 'body',
        22 => 'field_assessment_methods',
        23 => 'field_recommended_by',
        24 => 'recommendation_action',
        25 => 'group_training_header_left',
        26 => 'group_training_header_center',
        27 => 'field_training_related_brands',
        28 => 'field_disabilities_commitment',
        29 => 'group_training_header_right',
      ),
    ),
    'fields' => array(
      'field_subscription_method' => 'central',
      'group_training_header' => 'central',
      'field_teaching_mode' => 'central',
      'field_training_duration' => 'central',
      'group_training_data' => 'central',
      'field_training_public' => 'central',
      'group_training_left_col' => 'central',
      'field_training_attendees_number' => 'central',
      'field_training_price' => 'central',
      'title' => 'central',
      'group_training_right_col' => 'central',
      'field_training_requirements' => 'central',
      'group_training_prices' => 'central',
      'field_training_aims' => 'central',
      'field_introduction' => 'central',
      'field_training_crealead_price' => 'central',
      'field_training_method' => 'central',
      'field_training_teachers' => 'central',
      'field_scheduled_sessions' => 'central',
      'field_training_validation' => 'central',
      'training_contact' => 'central',
      'body' => 'central',
      'field_assessment_methods' => 'central',
      'field_recommended_by' => 'central',
      'recommendation_action' => 'central',
      'group_training_header_left' => 'central',
      'group_training_header_center' => 'central',
      'field_training_related_brands' => 'central',
      'field_disabilities_commitment' => 'central',
      'group_training_header_right' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|training|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|training|landing_page_block';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'training';
  $ds_layout->view_mode = 'landing_page_block';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'title' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|training|landing_page_block'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|training|list';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'training';
  $ds_layout->view_mode = 'list';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'group_wrapper_teaser',
        1 => 'group_sub_wrapper_teaser',
        2 => 'training_nid',
        3 => 'field_recommended_by',
        4 => 'field_training_type',
        5 => 'recommendations_number',
        6 => 'title',
        7 => 'recommendation_action',
        8 => 'field_training_theme',
        9 => 'field_training_duration',
        10 => 'field_training_aims',
        11 => 'field_training_teachers',
        12 => 'field_training_related_brands',
      ),
    ),
    'fields' => array(
      'group_wrapper_teaser' => 'central',
      'group_sub_wrapper_teaser' => 'central',
      'training_nid' => 'central',
      'field_recommended_by' => 'central',
      'field_training_type' => 'central',
      'recommendations_number' => 'central',
      'title' => 'central',
      'recommendation_action' => 'central',
      'field_training_theme' => 'central',
      'field_training_duration' => 'central',
      'field_training_aims' => 'central',
      'field_training_teachers' => 'central',
      'field_training_related_brands' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|training|list'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|training|sector_brand_block';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'training';
  $ds_layout->view_mode = 'sector_brand_block';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|training|sector_brand_block'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|training|sessions';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'training';
  $ds_layout->view_mode = 'sessions';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
        1 => 'field_introduction',
        2 => 'field_training_duration',
      ),
    ),
    'fields' => array(
      'title' => 'central',
      'field_introduction' => 'central',
      'field_training_duration' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|training|sessions'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|training|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'training';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'group_wrapper_teaser',
        1 => 'group_sub_wrapper_teaser',
        2 => 'training_nid',
        3 => 'field_recommended_by',
        4 => 'recommendations_number',
        5 => 'field_training_type',
        6 => 'title',
        7 => 'recommendation_action',
        8 => 'field_training_theme',
        9 => 'field_training_duration',
        10 => 'field_training_aims',
      ),
    ),
    'fields' => array(
      'group_wrapper_teaser' => 'central',
      'group_sub_wrapper_teaser' => 'central',
      'training_nid' => 'central',
      'field_recommended_by' => 'central',
      'recommendations_number' => 'central',
      'field_training_type' => 'central',
      'title' => 'central',
      'recommendation_action' => 'central',
      'field_training_theme' => 'central',
      'field_training_duration' => 'central',
      'field_training_aims' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|training|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function crealead_trainings_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'sessions';
  $ds_view_mode->label = 'Sessions';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
    'node' => 'node',
  );
  $export['sessions'] = $ds_view_mode;

  return $export;
}
