<?php
/**
 * @file
 * crealead_groups.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function crealead_groups_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|business_group|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'business_group';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'author' => array(
      'weight' => '1',
      'label' => 'inline',
      'format' => 'author_linked',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Responsable',
        ),
        'field_formatter_class' => '',
      ),
    ),
    'field_linked_groups' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|business_group|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function crealead_groups_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|business_group|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'business_group';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_8_4';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_group_type',
        1 => 'author',
        2 => 'field_purpose',
        3 => 'field_group_desc',
      ),
      'right' => array(
        4 => 'field_interesting_thematics',
        5 => 'field_useful_links',
        6 => 'field_linked_groups',
      ),
    ),
    'fields' => array(
      'field_group_type' => 'left',
      'author' => 'left',
      'field_purpose' => 'left',
      'field_group_desc' => 'left',
      'field_interesting_thematics' => 'right',
      'field_useful_links' => 'right',
      'field_linked_groups' => 'right',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|business_group|full'] = $ds_layout;

  return $export;
}