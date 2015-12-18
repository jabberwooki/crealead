<?php
/**
 * @file
 * crealead_brands.taxonomy_display.inc
 */

/**
 * Implements hook_taxonomy_display_default_displays().
 */
function crealead_brands_taxonomy_display_default_displays() {
  $export = array();

  $taxonomy_display = new stdClass();
  $taxonomy_display->api_version = 1;
  $taxonomy_display->machine_name = 'themes';
  $taxonomy_display->term_display_plugin = 'TaxonomyDisplayTermDisplayHandlerCore';
  $taxonomy_display->term_display_options = '';
  $taxonomy_display->associated_display_plugin = 'TaxonomyDisplayAssociatedDisplayHandlerHidden';
  $taxonomy_display->associated_display_options = '';
  $taxonomy_display->add_feed = FALSE;
  $taxonomy_display->breadcrumb_display_plugin = 'TaxonomyDisplayBreadcrumbDisplayHandlerCore';
  $taxonomy_display->breadcrumb_display_options = '';
  $export['themes'] = $taxonomy_display;

  return $export;
}
