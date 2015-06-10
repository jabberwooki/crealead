<?php
/**
 * @file
 * crealead_multimedia.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function crealead_multimedia_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mee_store_format';
  $strongarm->value = 'embed_div';
  $export['mee_store_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_context_fallbacks';
  $strongarm->value = array(
    '@default' => array(
      0 => 'title',
    ),
  );
  $export['scald_context_fallbacks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_video_upload_location';
  $strongarm->value = 'public://atoms/video/';
  $export['scald_video_upload_location'] = $strongarm;

  return $export;
}
