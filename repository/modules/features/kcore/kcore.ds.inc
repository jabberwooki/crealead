<?php
/**
 * @file
 * kcore.ds.inc
 */

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
  );
  $export['landing_page_block'] = $ds_view_mode;

  return $export;
}
