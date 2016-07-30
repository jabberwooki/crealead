<?php
/**
 * @file
 * crealead_multimedia.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crealead_multimedia_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "scald" && $api == "context_config") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function crealead_multimedia_image_default_styles() {
  $styles = array();

  // Exported image style: rect_l_1140x300.
  $styles['rect_l_1140x300'] = array(
    'label' => 'Rectangle grand (1140x300)',
    'effects' => array(),
  );

  // Exported image style: rect_m_750x560.
  $styles['rect_m_750x560'] = array(
    'label' => 'Rectangle moyen (750x560)',
    'effects' => array(
      27 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 750,
          'height' => 560,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: rect_s_570x300.
  $styles['rect_s_570x300'] = array(
    'label' => 'Rectangle petit (570x300)',
    'effects' => array(
      26 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 570,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: square_s_100x100.
  $styles['square_s_100x100'] = array(
    'label' => 'Carré petit (100x100)',
    'effects' => array(
      24 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: square_s_240x240.
  $styles['square_s_240x240'] = array(
    'label' => 'Carré moyen (240x240)',
    'effects' => array(
      25 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 240,
          'height' => 240,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
