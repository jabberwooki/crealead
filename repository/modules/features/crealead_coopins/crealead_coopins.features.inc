<?php
/**
 * @file
 * crealead_coopins.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crealead_coopins_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function crealead_coopins_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
