<?php
/**
 * @file
 * crealead_trainings.ds.inc
 */

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
  $ds_layout->layout = 'bootstrap_6_6_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'group_training_data',
        2 => 'field_training_duration',
        3 => 'field_training_attendees_number',
        4 => 'field_training_price',
      ),
      'right' => array(
        1 => 'body',
      ),
      'left' => array(
        5 => 'field_training_type',
        6 => 'field_training_public',
        7 => 'field_training_requirements',
        8 => 'field_training_aims',
      ),
      'bottom' => array(
        9 => 'field_training_theme',
        10 => 'field_training_related_brands',
      ),
    ),
    'fields' => array(
      'group_training_data' => 'top',
      'body' => 'right',
      'field_training_duration' => 'top',
      'field_training_attendees_number' => 'top',
      'field_training_price' => 'top',
      'field_training_type' => 'left',
      'field_training_public' => 'left',
      'field_training_requirements' => 'left',
      'field_training_aims' => 'left',
      'field_training_theme' => 'bottom',
      'field_training_related_brands' => 'bottom',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
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
  $export['node|training|full'] = $ds_layout;

  return $export;
}
