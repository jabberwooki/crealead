<?php
/**
 * @file
 * crealead_profiles.ds.inc
 */

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

  return $export;
}
