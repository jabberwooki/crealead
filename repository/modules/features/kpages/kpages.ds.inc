<?php
/**
 * @file
 * kpages.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function kpages_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => 'page-header',
        'exclude node title settings' => '1',
        'ft' => array(),
      ),
    ),
    'service_links_displays_group' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'sld_group_image',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|page|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function kpages_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'group_row',
        1 => 'title',
        2 => 'service_links_displays_group',
        3 => 'body',
        4 => 'field_files',
        5 => 'field_galleries',
        6 => 'field_videos',
        7 => 'group_col8',
      ),
    ),
    'fields' => array(
      'group_row' => 'central',
      'title' => 'central',
      'service_links_displays_group' => 'central',
      'body' => 'central',
      'field_files' => 'central',
      'field_galleries' => 'central',
      'field_videos' => 'central',
      'group_col8' => 'central',
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
  $export['node|page|full'] = $ds_layout;

  return $export;
}
