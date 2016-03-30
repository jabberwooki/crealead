<?php
/**
 * @file
 * crealead_profiles.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function crealead_profiles_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'profile2|coe_page|default';
  $ds_fieldsetting->entity_type = 'profile2';
  $ds_fieldsetting->bundle = 'coe_page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_competencies' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Compétences et spécialités :',
          'lb-el' => 'h4',
          'lb-cl' => 'h4-user',
          'lb-col' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'user-skills',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_biography' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Biographie :',
          'lb-el' => 'h4',
          'lb-cl' => 'h4-user',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_coe_status' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_distinct_features' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Pourquoi je sors du lot :',
          'lb-el' => 'h4',
          'lb-cl' => 'h4-user',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_interests' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Centres d\'intérêt :',
          'lb-el' => 'h4',
          'lb-cl' => 'h4-user',
          'lb-col' => TRUE,
        ),
      ),
    ),
  );
  $export['profile2|coe_page|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function crealead_profiles_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'profile2|coe_page|block';
  $ds_layout->entity_type = 'profile2';
  $ds_layout->bundle = 'coe_page';
  $ds_layout->view_mode = 'block';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_coe_photo',
        1 => 'field_coe_brand_name',
      ),
    ),
    'fields' => array(
      'field_coe_photo' => 'central',
      'field_coe_brand_name' => 'central',
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
  );
  $export['profile2|coe_page|block'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'profile2|coe_page|default';
  $ds_layout->entity_type = 'profile2';
  $ds_layout->bundle = 'coe_page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_8_4';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_biography',
        1 => 'field_interests',
        2 => 'field_distinct_features',
        3 => 'field_coe_status',
      ),
      'right' => array(
        4 => 'field_coe_photo',
        5 => 'field_competencies',
      ),
    ),
    'fields' => array(
      'field_biography' => 'left',
      'field_interests' => 'left',
      'field_distinct_features' => 'left',
      'field_coe_status' => 'left',
      'field_coe_photo' => 'right',
      'field_competencies' => 'right',
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
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['profile2|coe_page|default'] = $ds_layout;

  return $export;
}
