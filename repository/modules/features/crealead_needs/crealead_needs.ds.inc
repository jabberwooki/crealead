<?php
/**
 * @file
 * crealead_needs.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function crealead_needs_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|link_to_doc|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'link_to_doc';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_document_url' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Document',
        ),
      ),
    ),
  );
  $export['node|link_to_doc|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|link_to_doc|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'link_to_doc';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'link_edit_link' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|link_to_doc|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|need|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'need';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_budget' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Budget',
        ),
      ),
    ),
    'field_need_action' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'need-add',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|need|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function crealead_needs_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|link_to_doc|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'link_to_doc';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_2_10';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_pictogramme',
      ),
      'right' => array(
        1 => 'field_document_url',
      ),
    ),
    'fields' => array(
      'field_pictogramme' => 'left',
      'field_document_url' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
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
  $export['node|link_to_doc|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|link_to_doc|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'link_to_doc';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_pictogramme',
        1 => 'field_document_url',
        2 => 'link_edit_link',
      ),
    ),
    'fields' => array(
      'field_pictogramme' => 'central',
      'field_document_url' => 'central',
      'link_edit_link' => 'central',
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
  $export['node|link_to_doc|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|need|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'need';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_6_6_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'body',
      ),
      'right' => array(
        1 => 'group_need_contact_infos',
        2 => 'field_budget',
        3 => 'field_need_location',
        4 => 'field_crealead_name',
        5 => 'field_expiration_type',
        6 => 'field_display_end_date',
        7 => 'field_need_client',
        8 => 'field_other_enquirers',
        10 => 'field__need_contact_name',
        11 => 'field_need_contact_details',
      ),
      'bottom' => array(
        9 => 'field_need_action',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'group_need_contact_infos' => 'right',
      'field_budget' => 'right',
      'field_need_location' => 'right',
      'field_crealead_name' => 'right',
      'field_expiration_type' => 'right',
      'field_display_end_date' => 'right',
      'field_need_client' => 'right',
      'field_other_enquirers' => 'right',
      'field_need_action' => 'bottom',
      'field__need_contact_name' => 'right',
      'field_need_contact_details' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
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
  $export['node|need|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|doc_icons|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'doc_icons';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_icon_file',
      ),
    ),
    'fields' => array(
      'field_icon_file' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['taxonomy_term|doc_icons|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|doc_icons|full';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'doc_icons';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_icon_file',
      ),
    ),
    'fields' => array(
      'field_icon_file' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
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
  $export['taxonomy_term|doc_icons|full'] = $ds_layout;

  return $export;
}
