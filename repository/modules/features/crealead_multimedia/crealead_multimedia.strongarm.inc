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
  $strongarm->name = 'scald_custom_contexts';
  $strongarm->value = array(
    'diaporama' => array(
      'name' => 'diaporama',
      'title' => 'Diaporama',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'square_s_100x100' => array(
      'name' => 'square_s_100x100',
      'title' => 'Carré petit (100x100)',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'rect_l_1140x300' => array(
      'name' => 'rect_l_1140x300',
      'title' => 'Rectangle grand (1140x300)',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
      'provider' => 'scald',
      'type_format' => array(
        'file' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
        'gallery' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
        'image' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
        'video' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
      ),
      'transcoder' => array(
        'file' => array(
          '*' => 'passthrough',
        ),
        'gallery' => array(
          '*' => 'passthrough',
        ),
        'image' => array(
          '*' => 'passthrough',
        ),
        'video' => array(
          '*' => 'passthrough',
        ),
      ),
      'player' => array(
        'file' => array(
          '*' => 'default',
        ),
        'gallery' => array(
          '*' => 'default',
        ),
        'image' => array(
          '*' => 'default',
          'settings' => array(),
        ),
        'video' => array(
          '*' => 'default',
        ),
      ),
    ),
    'square_s_240x240' => array(
      'name' => 'square_s_240x240',
      'title' => 'Carré moyen (240x240)',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'square_l_480x480' => array(
      'name' => 'square_l_480x480',
      'title' => 'Carré grand (480x480)',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'rect_m_750x560' => array(
      'name' => 'rect_m_750x560',
      'title' => 'Rectangle moyen (750x560)',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'rect_s_570x300' => array(
      'name' => 'rect_s_570x300',
      'title' => 'Rectangle petit (570x300)',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
  );
  $export['scald_custom_contexts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_video_upload_location';
  $strongarm->value = 'public://atoms/video/';
  $export['scald_video_upload_location'] = $strongarm;

  return $export;
}
