<?php
/**
 * @file
 * crealead_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function crealead_news_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_all|node|news|news_2_3';
  $field_group->group_name = 'group_all';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'news_2_3';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group tous',
    'weight' => '0',
    'children' => array(
      0 => 'group_img_type',
      1 => 'group_textes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group tous',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-all field-group-bootstrap_grid_col',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_all|node|news|news_2_3'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col8|node|news|full';
  $field_group->group_name = 'group_col8';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'group col-8',
    'weight' => '34',
    'children' => array(
      0 => 'body',
      1 => 'field_news_author',
      2 => 'field_coentrepreneurs',
      3 => 'field_news_date',
      4 => 'field_sector',
      5 => 'service_links_displays_group',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group col-8',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-col8 field-group-div col-md-8 col-md-offset-2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_col8|node|news|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crealead_settings|node|news|form';
  $field_group->group_name = 'group_crealead_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Paramètres Crealead',
    'weight' => '15',
    'children' => array(
      0 => 'field_sorting_date',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-crealead-settings field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_crealead_settings|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_img_cat|node|news|teaser';
  $field_group->group_name = 'group_img_cat';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'groupe image catégorie',
    'weight' => '0',
    'children' => array(
      0 => 'field_news_type',
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
  $field_groups['group_img_cat|node|news|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_img_title_cat|node|news|full';
  $field_group->group_name = 'group_img_title_cat';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group img titre cat',
    'weight' => '7',
    'children' => array(
      0 => 'field_image',
      1 => 'group_title_cat',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group img titre cat',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-img-title-cat field-group-div position-relative',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_img_title_cat|node|news|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_img_type|node|news|block';
  $field_group->group_name = 'group_img_type';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'block';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group image type',
    'weight' => '0',
    'children' => array(
      0 => 'field_news_type',
      1 => 'field_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group image type',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-img-type field-group-div position-relative',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_img_type|node|news|block'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_img_type|node|news|news_2_3';
  $field_group->group_name = 'group_img_type';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'news_2_3';
  $field_group->parent_name = 'group_all';
  $field_group->data = array(
    'label' => 'group image type',
    'weight' => '27',
    'children' => array(
      0 => 'field_image',
      1 => 'field_news_type',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group image type',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-img-type field-group-div position-relative',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_img_type|node|news|news_2_3'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_md_4|node|news|news_brand';
  $field_group->group_name = 'group_md_4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'news_brand';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group md-4',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_image',
      2 => 'field_news_date',
      3 => 'field_news_type',
      4 => 'field_sector',
      5 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group md-4',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-md-4 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_md_4|node|news|news_brand'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row|node|news|full';
  $field_group->group_name = 'group_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group row',
    'weight' => '0',
    'children' => array(
      0 => 'group_col8',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group row',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_row|node|news|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_textes|node|news|news_2_3';
  $field_group->group_name = 'group_textes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'news_2_3';
  $field_group->parent_name = 'group_all';
  $field_group->data = array(
    'label' => 'group textes',
    'weight' => '28',
    'children' => array(
      0 => 'body',
      1 => 'field_news_date',
      2 => 'field_sector',
      3 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group textes',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-textes field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_textes|node|news|news_2_3'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_cat|node|news|full';
  $field_group->group_name = 'group_title_cat';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_img_title_cat';
  $field_group->data = array(
    'label' => 'group titre catégorie',
    'weight' => '31',
    'children' => array(
      0 => 'field_news_type',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group titre catégorie',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-title-cat field-group-div container position-relative',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_title_cat|node|news|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_zoom_news|node|news|zoom_news';
  $field_group->group_name = 'group_zoom_news';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'zoom_news';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group zoom actu',
    'weight' => '0',
    'children' => array(
      0 => 'field_news_type',
      1 => 'field_image',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group zoom actu',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-zoom-news field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_zoom_news|node|news|zoom_news'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Paramètres Crealead');
  t('group col-8');
  t('group image type');
  t('group img titre cat');
  t('group md-4');
  t('group row');
  t('group textes');
  t('group titre catégorie');
  t('group tous');
  t('group zoom actu');
  t('groupe image catégorie');

  return $field_groups;
}
