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
          'lb-col' => TRUE,
        ),
        'field_formatter_class' => '',
      ),
    ),
    'title' => array(
      'weight' => '33',
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
          'ow-cl' => 'field',
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
          'ow-cl' => 'col-md-4',
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
          'ow-cl' => 'col-md-4',
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
          'ow-cl' => 'col-md-4',
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
    'field_training_theme' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-cl' => 'field-label pull-left',
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
  );
  $export['node|training|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|training|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'training';
  $ds_fieldsetting->view_mode = 'teaser';
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
  $ds_layout->id = 'node|training|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'training';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'group_training_header',
        1 => 'group_training_data',
        2 => 'field_training_type',
        3 => 'field_training_theme',
        4 => 'field_training_public',
        5 => 'field_training_requirements',
        6 => 'field_training_aims',
        7 => 'field_training_method',
        8 => 'group_training_left_col',
        9 => 'body',
        10 => 'field_training_teachers',
        11 => 'group_training_right_col',
        12 => 'field_training_duration',
        13 => 'field_training_attendees_number',
        14 => 'field_training_price',
        15 => 'group_training_header_left',
        16 => 'group_training_header_center',
        17 => 'field_training_related_brands',
        18 => 'training_contact',
        19 => 'group_training_header_right',
        20 => 'title',
        21 => 'field_introduction',
      ),
    ),
    'fields' => array(
      'group_training_header' => 'central',
      'group_training_data' => 'central',
      'field_training_type' => 'central',
      'field_training_theme' => 'central',
      'field_training_public' => 'central',
      'field_training_requirements' => 'central',
      'field_training_aims' => 'central',
      'field_training_method' => 'central',
      'group_training_left_col' => 'central',
      'body' => 'central',
      'field_training_teachers' => 'central',
      'group_training_right_col' => 'central',
      'field_training_duration' => 'central',
      'field_training_attendees_number' => 'central',
      'field_training_price' => 'central',
      'group_training_header_left' => 'central',
      'group_training_header_center' => 'central',
      'field_training_related_brands' => 'central',
      'training_contact' => 'central',
      'group_training_header_right' => 'central',
      'title' => 'central',
      'field_introduction' => 'central',
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
  $ds_layout->id = 'node|training|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'training';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
        1 => 'field_training_type',
        2 => 'field_training_theme',
        3 => 'field_training_duration',
        4 => 'field_training_price',
        5 => 'field_training_aims',
      ),
    ),
    'fields' => array(
      'title' => 'central',
      'field_training_type' => 'central',
      'field_training_theme' => 'central',
      'field_training_duration' => 'central',
      'field_training_price' => 'central',
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
