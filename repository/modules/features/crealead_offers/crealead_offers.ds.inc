<?php
/**
 * @file
 * crealead_offers.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function crealead_offers_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|offer|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'offer';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_related_product' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|offer|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function crealead_offers_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|offer|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'offer';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_6_6_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'body',
      ),
      'right' => array(
        1 => 'group_offer_contact_infos',
        2 => 'field_offer_origin',
        3 => 'field_offer_type',
        4 => 'field_related_training',
        5 => 'field_related_product',
        6 => 'field_training_domain',
        7 => 'field_price',
        8 => 'field__need_contact_name',
        9 => 'field_attached_file',
        10 => 'field_need_contact_details',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'group_offer_contact_infos' => 'right',
      'field_offer_origin' => 'right',
      'field_offer_type' => 'right',
      'field_related_training' => 'right',
      'field_related_product' => 'right',
      'field_training_domain' => 'right',
      'field_price' => 'right',
      'field__need_contact_name' => 'right',
      'field_attached_file' => 'right',
      'field_need_contact_details' => 'right',
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
  $export['node|offer|full'] = $ds_layout;

  return $export;
}
