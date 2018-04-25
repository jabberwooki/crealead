<?php
/**
 * @file
 * crealead_faqs.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function crealead_faqs_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'faqs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FAQs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'FAQs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'isotope_grid';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'title' => 0,
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faq' => 'faq',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Foire aux questions';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope_grid';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_faq_caegory' => 'field_faq_caegory',
    'field_related_population' => 'field_related_population',
    'title' => 0,
    'field_detailed_question' => 0,
    'field_answer' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Filtre catégories */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['ui_name'] = 'Filtre catégories';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'faqs:category_filter';
  /* Header: Filtre populations */
  $handler->display->display_options['header']['view_1']['id'] = 'view_1';
  $handler->display->display_options['header']['view_1']['table'] = 'views';
  $handler->display->display_options['header']['view_1']['field'] = 'view';
  $handler->display->display_options['header']['view_1']['ui_name'] = 'Filtre populations';
  $handler->display->display_options['header']['view_1']['view_to_insert'] = 'faqs:populations_filter';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '60%';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '80%';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Catégorie */
  $handler->display->display_options['fields']['field_faq_caegory']['id'] = 'field_faq_caegory';
  $handler->display->display_options['fields']['field_faq_caegory']['table'] = 'field_data_field_faq_caegory';
  $handler->display->display_options['fields']['field_faq_caegory']['field'] = 'field_faq_caegory';
  $handler->display->display_options['fields']['field_faq_caegory']['label'] = '';
  $handler->display->display_options['fields']['field_faq_caegory']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_faq_caegory']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faq_caegory']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_faq_caegory']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Population concernée */
  $handler->display->display_options['fields']['field_related_population']['id'] = 'field_related_population';
  $handler->display->display_options['fields']['field_related_population']['table'] = 'field_data_field_related_population';
  $handler->display->display_options['fields']['field_related_population']['field'] = 'field_related_population';
  $handler->display->display_options['fields']['field_related_population']['label'] = '';
  $handler->display->display_options['fields']['field_related_population']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_related_population']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_population']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_related_population']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_related_population']['delta_offset'] = '0';
  /* Field: Content: Question détaillée */
  $handler->display->display_options['fields']['field_detailed_question']['id'] = 'field_detailed_question';
  $handler->display->display_options['fields']['field_detailed_question']['table'] = 'field_data_field_detailed_question';
  $handler->display->display_options['fields']['field_detailed_question']['field'] = 'field_detailed_question';
  $handler->display->display_options['fields']['field_detailed_question']['label'] = '';
  $handler->display->display_options['fields']['field_detailed_question']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_detailed_question']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_detailed_question']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="question">[title]</div>
<div class="detailed-question">[field_detailed_question]</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'faqs';

  /* Display: Filtre catégories */
  $handler = $view->new_display('block', 'Filtre catégories', 'category_filter');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope_filter';
  $handler->display->display_options['style_options']['filter_group'] = 'Catégorie';
  $handler->display->display_options['style_options']['data_fields'] = 'field_faq_caegory';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Catégorie */
  $handler->display->display_options['fields']['field_faq_caegory']['id'] = 'field_faq_caegory';
  $handler->display->display_options['fields']['field_faq_caegory']['table'] = 'field_data_field_faq_caegory';
  $handler->display->display_options['fields']['field_faq_caegory']['field'] = 'field_faq_caegory';
  $handler->display->display_options['fields']['field_faq_caegory']['label'] = '';
  $handler->display->display_options['fields']['field_faq_caegory']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faq_caegory']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_faq_caegory']['settings'] = array(
    'field_formatter_class' => '',
  );

  /* Display: Filtre populations */
  $handler = $view->new_display('block', 'Filtre populations', 'populations_filter');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope_filter';
  $handler->display->display_options['style_options']['filter_group'] = 'Population concernée';
  $handler->display->display_options['style_options']['data_fields'] = 'field_related_population';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Population concernée */
  $handler->display->display_options['fields']['field_related_population']['id'] = 'field_related_population';
  $handler->display->display_options['fields']['field_related_population']['table'] = 'field_data_field_related_population';
  $handler->display->display_options['fields']['field_related_population']['field'] = 'field_related_population';
  $handler->display->display_options['fields']['field_related_population']['label'] = '';
  $handler->display->display_options['fields']['field_related_population']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_population']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_related_population']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_related_population']['delta_offset'] = '0';

  /* Display: Page publique */
  $handler = $view->new_display('page', 'Page publique', 'public_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Foire aux questions';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope_grid';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_faq_caegory' => 'field_faq_caegory',
    'title' => 0,
    'field_related_population' => 0,
    'field_detailed_question' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Lien FAQ privée';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div class="view-faqs private-faq-link">
<a href="/faqs">Accéder à la FAQ privée</a>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Filtre catégories 2 */
  $handler->display->display_options['header']['view_1']['id'] = 'view_1';
  $handler->display->display_options['header']['view_1']['table'] = 'views';
  $handler->display->display_options['header']['view_1']['field'] = 'view';
  $handler->display->display_options['header']['view_1']['ui_name'] = 'Filtre catégories 2';
  $handler->display->display_options['header']['view_1']['view_to_insert'] = 'faqs:category_filter2';
  /* Header: Filtre catégories */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['ui_name'] = 'Filtre catégories';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'faqs:category_filter';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '60%';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '80%';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Catégorie */
  $handler->display->display_options['fields']['field_faq_caegory']['id'] = 'field_faq_caegory';
  $handler->display->display_options['fields']['field_faq_caegory']['table'] = 'field_data_field_faq_caegory';
  $handler->display->display_options['fields']['field_faq_caegory']['field'] = 'field_faq_caegory';
  $handler->display->display_options['fields']['field_faq_caegory']['label'] = '';
  $handler->display->display_options['fields']['field_faq_caegory']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_faq_caegory']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faq_caegory']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_faq_caegory']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Question détaillée */
  $handler->display->display_options['fields']['field_detailed_question']['id'] = 'field_detailed_question';
  $handler->display->display_options['fields']['field_detailed_question']['table'] = 'field_data_field_detailed_question';
  $handler->display->display_options['fields']['field_detailed_question']['field'] = 'field_detailed_question';
  $handler->display->display_options['fields']['field_detailed_question']['label'] = '';
  $handler->display->display_options['fields']['field_detailed_question']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_detailed_question']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_detailed_question']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="question">[title]</div>
<div class="detailed-question">[field_detailed_question]</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faq' => 'faq',
  );
  /* Filter criterion: Content: FAQ publique (field_public_faq) */
  $handler->display->display_options['filters']['field_public_faq_value']['id'] = 'field_public_faq_value';
  $handler->display->display_options['filters']['field_public_faq_value']['table'] = 'field_data_field_public_faq';
  $handler->display->display_options['filters']['field_public_faq_value']['field'] = 'field_public_faq_value';
  $handler->display->display_options['filters']['field_public_faq_value']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['path'] = 'faq-publique';
  $translatables['faqs'] = array(
    t('Master'),
    t('FAQs'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('Foire aux questions'),
    t('<div class="question">[title]</div>
<div class="detailed-question">[field_detailed_question]</div>
'),
    t('Filtre catégories'),
    t('Filtre populations'),
    t('Page publique'),
    t('Lien FAQ privée'),
    t('<div class="view-faqs private-faq-link">
<a href="/faqs">Accéder à la FAQ privée</a>
</div>'),
  );
  $export['faqs'] = $view;

  return $export;
}
