<?php

/**
 * @file
 * crealead_products.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function crealead_products_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_9_3';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_introduction',
        1 => 'body',
      ),
      'right' => array(
        2 => 'field_product_earnings',
        3 => 'field_product_to_whom',
        4 => 'field_product_related_brands',
      ),
    ),
    'fields' => array(
      'field_introduction' => 'left',
      'body' => 'left',
      'field_product_earnings' => 'right',
      'field_product_to_whom' => 'right',
      'field_product_related_brands' => 'right',
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
  $export['node|product|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'group_wrapper_teaser',
        1 => 'title',
        2 => 'field_introduction',
      ),
    ),
    'fields' => array(
      'group_wrapper_teaser' => 'central',
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
  );
  $export['node|product|teaser'] = $ds_layout;

  return $export;
}
