<?php

/**
 * @file
 * crealead_articles.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function crealead_articles_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_clo4|node|article|teaser';
  $field_group->group_name = 'group_clo4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'groupe col-4',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'title',
      2 => 'group_img_cat',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'groupe col-4',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-clo4 field-group-div col-md-4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_clo4|node|article|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_img_cat|node|article|teaser';
  $field_group->group_name = 'group_img_cat';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_clo4';
  $field_group->data = array(
    'label' => 'groupe image catégorie',
    'weight' => '1',
    'children' => array(
      0 => 'field_landing_pages',
      1 => 'field_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'groupe image catégorie',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-img-cat field-group-div position-relative',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_img_cat|node|article|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('groupe col-4');
  t('groupe image catégorie');

  return $field_groups;
}
