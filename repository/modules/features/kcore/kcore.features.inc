<?php
/**
 * @file
 * kcore.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kcore_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_features_date_format_default().
 */
function kcore_features_date_format_default() {
  $fdf_config = array();

  $fdf_config[] = array(
    'dfid' => 36,
    'format' => 'l d F Y - H\\hi',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 37,
    'format' => 'l d F Y',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 38,
    'format' => 'D d F Y',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 39,
    'format' => 'd F Y',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 40,
    'format' => 'd/m/Y -H\\hi',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 41,
    'format' => 'd/m/Y',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 42,
    'format' => 'd/m/y -H\\hi',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 43,
    'format' => 'd/m/y',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 44,
    'format' => 'd F Y - H\\hi',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 45,
    'format' => 'D d F Y - H\\hi',
    'type' => 'custom',
    'locked' => 0,
  );
  return $fdf_config;
}
