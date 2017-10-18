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
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_interested_users' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
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
    'training_contact' => array(
      'weight' => '31',
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
    'field_training_type' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-cl' => 'field-label pull-left',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field training-type',
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
    'field_training_price' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'col-md-3 training-price',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
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
    'title' => array(
      'weight' => '19',
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
    'title' => array(
      'weight' => '2',
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
        1 => 'see_all_sessions_link',
        2 => 'field_session_dates',
        3 => 'group_session_details',
        4 => 'interested_switch',
        5 => 'field_session_place',
        6 => 'body',
        7 => 'field_interested_users',
      ),
    ),
    'fields' => array(
      'field_related_training' => 'central',
      'see_all_sessions_link' => 'central',
      'field_session_dates' => 'central',
      'group_session_details' => 'central',
      'interested_switch' => 'central',
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
        0 => 'group_training_header',
        1 => 'field_training_duration',
        2 => 'group_training_data',
        3 => 'field_training_attendees_number',
        4 => 'field_training_type',
        5 => 'title',
        6 => 'field_training_price',
        7 => 'field_introduction',
        8 => 'field_training_public',
        9 => 'field_scheduled_sessions',
        10 => 'field_training_requirements',
        11 => 'field_training_aims',
        12 => 'field_training_method',
        13 => 'group_training_left_col',
        14 => 'body',
        15 => 'field_training_teachers',
        16 => 'field_training_validation',
        17 => 'group_training_right_col',
        18 => 'field_assessment_methods',
        19 => 'group_training_header_left',
        20 => 'field_training_related_brands',
        21 => 'training_contact',
        22 => 'group_training_header_center',
        23 => 'group_training_header_right',
      ),
    ),
    'fields' => array(
      'group_training_header' => 'central',
      'field_training_duration' => 'central',
      'group_training_data' => 'central',
      'field_training_attendees_number' => 'central',
      'field_training_type' => 'central',
      'title' => 'central',
      'field_training_price' => 'central',
      'field_introduction' => 'central',
      'field_training_public' => 'central',
      'field_scheduled_sessions' => 'central',
      'field_training_requirements' => 'central',
      'field_training_aims' => 'central',
      'field_training_method' => 'central',
      'group_training_left_col' => 'central',
      'body' => 'central',
      'field_training_teachers' => 'central',
      'field_training_validation' => 'central',
      'group_training_right_col' => 'central',
      'field_assessment_methods' => 'central',
      'group_training_header_left' => 'central',
      'field_training_related_brands' => 'central',
      'training_contact' => 'central',
      'group_training_header_center' => 'central',
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
        1 => 'field_training_type',
        2 => 'title',
        3 => 'field_training_price',
        4 => 'field_training_theme',
        5 => 'field_training_duration',
        6 => 'field_training_aims',
        7 => 'field_training_teachers',
        8 => 'field_training_related_brands',
      ),
    ),
    'fields' => array(
      'group_wrapper_teaser' => 'central',
      'field_training_type' => 'central',
      'title' => 'central',
      'field_training_price' => 'central',
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
        1 => 'field_training_type',
        2 => 'title',
        3 => 'field_training_price',
        4 => 'field_training_theme',
        5 => 'field_training_duration',
        6 => 'field_training_aims',
      ),
    ),
    'fields' => array(
      'group_wrapper_teaser' => 'central',
      'field_training_type' => 'central',
      'title' => 'central',
      'field_training_price' => 'central',
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
