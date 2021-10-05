<?php

/**
 * @file
 * kcore.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function kcore_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|themes|full';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'themes';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['taxonomy_term|themes|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function kcore_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'block';
  $ds_view_mode->label = 'Bloc';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'profile2' => 'profile2',
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['block'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'landing_page_block';
  $ds_view_mode->label = 'Bloc page thématique';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['landing_page_block'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'list';
  $ds_view_mode->label = 'Liste';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['list'] = $ds_view_mode;

  return $export;
}
