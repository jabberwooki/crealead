<?php
/**
 * @file
 * crealead_faqs.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function crealead_faqs_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|faq|colorbox';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'faq';
  $ds_fieldsetting->view_mode = 'colorbox';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|faq|colorbox'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|faq|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'faq';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
        'field_formatter_class' => '',
      ),
    ),
  );
  $export['node|faq|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function crealead_faqs_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|faq|colorbox';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'faq';
  $ds_layout->view_mode = 'colorbox';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
        1 => 'field_detailed_question',
        2 => 'field_answer',
        3 => 'field_attached_file',
      ),
    ),
    'fields' => array(
      'title' => 'central',
      'field_detailed_question' => 'central',
      'field_answer' => 'central',
      'field_attached_file' => 'central',
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
  );
  $export['node|faq|colorbox'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|faq|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'faq';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_faq_caegory',
        1 => 'field_related_population',
        2 => 'field_public_faq',
        3 => 'field_detailed_question',
        4 => 'field_answer',
        5 => 'field_attached_file',
      ),
    ),
    'fields' => array(
      'field_faq_caegory' => 'central',
      'field_related_population' => 'central',
      'field_public_faq' => 'central',
      'field_detailed_question' => 'central',
      'field_answer' => 'central',
      'field_attached_file' => 'central',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|faq|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|faq|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'faq';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
        1 => 'field_detailed_question',
        2 => 'field_answer',
      ),
    ),
    'fields' => array(
      'title' => 'central',
      'field_detailed_question' => 'central',
      'field_answer' => 'central',
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
  );
  $export['node|faq|teaser'] = $ds_layout;

  return $export;
}
