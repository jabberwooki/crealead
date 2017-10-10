<?php
/**
 * @file
 * crealead_ads.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function crealead_ads_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ad|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ad';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_6_6_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'body',
      ),
      'right' => array(
        1 => 'group_ad_contact_infos',
        2 => 'field_ad_source',
        3 => 'field_type_d_offre',
        4 => 'field__need_contact_name',
        5 => 'field_training_domain',
        6 => 'field_need_contact_details',
        7 => 'field_price',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'group_ad_contact_infos' => 'right',
      'field_ad_source' => 'right',
      'field_type_d_offre' => 'right',
      'field__need_contact_name' => 'right',
      'field_training_domain' => 'right',
      'field_need_contact_details' => 'right',
      'field_price' => 'right',
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
  $export['node|ad|full'] = $ds_layout;

  return $export;
}
