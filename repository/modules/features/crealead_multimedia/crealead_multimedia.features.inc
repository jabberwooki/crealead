<?php
/**
 * @file
 * crealead_multimedia.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crealead_multimedia_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_scald_default_context_types().
 */
function crealead_multimedia_scald_default_context_types() {
  $contexts = array();
  $contexts['debug-file'] = array(
    'player' => array(
      'file' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'file' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['debug-gallery'] = array(
    'player' => array(
      'gallery' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'gallery' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['debug-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['debug-video'] = array(
    'player' => array(
      'video' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'video' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['deleted-file'] = array(
    'player' => array(
      'file' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'file' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['deleted-gallery'] = array(
    'player' => array(
      'gallery' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'gallery' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['deleted-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['deleted-video'] = array(
    'player' => array(
      'video' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'video' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['file_representation-file'] = array(
    'player' => array(
      'file' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'file' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['file_representation-gallery'] = array(
    'player' => array(
      'gallery' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'gallery' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['file_representation-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['file_representation-video'] = array(
    'player' => array(
      'video' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'video' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['full-file'] = array(
    'player' => array(
      'file' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'file' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['full-gallery'] = array(
    'player' => array(
      'gallery' => array(
        '*' => 'galleria',
        'settings' => array(
          'width' => 690,
          'height' => 450,
          'fullscreen_link' => 1,
          'thumb_style' => 'thumbnail',
          'normal_style' => 'large',
          'big_style' => 'original',
          'theme' => 'classic',
          'options' => '',
        ),
      ),
    ),
    'transcoder' => array(
      'gallery' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['full-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['full-video'] = array(
    'player' => array(
      'video' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'video' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['invalid-id-file'] = array(
    'player' => array(
      'file' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'file' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['invalid-id-gallery'] = array(
    'player' => array(
      'gallery' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'gallery' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['invalid-id-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['invalid-id-video'] = array(
    'player' => array(
      'video' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'video' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['no-access-file'] = array(
    'player' => array(
      'file' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'file' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['no-access-gallery'] = array(
    'player' => array(
      'gallery' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'gallery' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['no-access-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['no-access-video'] = array(
    'player' => array(
      'video' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'video' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['sdl_editor_representation-file'] = array(
    'player' => array(
      'file' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'file' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['sdl_editor_representation-gallery'] = array(
    'player' => array(
      'gallery' => array(
        '*' => 'galleria',
        'settings' => array(
          'width' => 690,
          'height' => 450,
          'fullscreen_link' => 1,
          'thumb_style' => 'thumbnail',
          'normal_style' => 'large',
          'big_style' => 'original',
          'theme' => 'classic',
          'options' => '',
        ),
      ),
    ),
    'transcoder' => array(
      'gallery' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['sdl_editor_representation-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'style-large',
      ),
    ),
  );
  $contexts['sdl_editor_representation-video'] = array(
    'player' => array(
      'video' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'video' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['sdl_library_item-file'] = array(
    'player' => array(
      'file' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'file' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['sdl_library_item-gallery'] = array(
    'player' => array(
      'gallery' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'gallery' => array(
        '*' => 'style-Library',
      ),
    ),
  );
  $contexts['sdl_library_item-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'style-Library',
      ),
    ),
  );
  $contexts['sdl_library_item-video'] = array(
    'player' => array(
      'video' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'video' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['sdl_preview-file'] = array(
    'player' => array(
      'file' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'file' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['sdl_preview-gallery'] = array(
    'player' => array(
      'gallery' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'gallery' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['sdl_preview-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['sdl_preview-video'] = array(
    'player' => array(
      'video' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'video' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['title-file'] = array(
    'player' => array(
      'file' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'file' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['title-gallery'] = array(
    'player' => array(
      'gallery' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'gallery' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['title-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['title-video'] = array(
    'player' => array(
      'video' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'video' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  return $contexts;
}
