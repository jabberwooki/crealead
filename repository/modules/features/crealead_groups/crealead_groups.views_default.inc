<?php
/**
 * @file
 * crealead_groups.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function crealead_groups_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'business_groups';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Collectifs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Les collectifs Crealead';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|title';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
    'business_group' => 'business_group',
  );

  /* Display: Page collectifs territoriaux */
  $handler = $view->new_display('page', 'Page collectifs territoriaux', 'groups_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Les collectifs territoriaux';
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
    'business_group' => 'business_group',
  );
  /* Filter criterion: Field: Type de collectif (field_group_type) */
  $handler->display->display_options['filters']['field_group_type_value']['id'] = 'field_group_type_value';
  $handler->display->display_options['filters']['field_group_type_value']['table'] = 'field_data_field_group_type';
  $handler->display->display_options['filters']['field_group_type_value']['field'] = 'field_group_type_value';
  $handler->display->display_options['filters']['field_group_type_value']['value'] = array(
    'ct' => 'ct',
  );
  $handler->display->display_options['path'] = 'espace-co-entrepreneur/collectifs-territoriaux';

  /* Display: Page comités techniques */
  $handler = $view->new_display('page', 'Page comités techniques', 'committees_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Les comités techniques';
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
    'business_group' => 'business_group',
  );
  /* Filter criterion: Field: Type de collectif (field_group_type) */
  $handler->display->display_options['filters']['field_group_type_value']['id'] = 'field_group_type_value';
  $handler->display->display_options['filters']['field_group_type_value']['table'] = 'field_data_field_group_type';
  $handler->display->display_options['filters']['field_group_type_value']['field'] = 'field_group_type_value';
  $handler->display->display_options['filters']['field_group_type_value']['value'] = array(
    'tec' => 'tec',
  );
  $handler->display->display_options['path'] = 'espace-co-entrepreneur/comites-techniques';

  /* Display: Page collectifs pôles d'activité */
  $handler = $view->new_display('page', 'Page collectifs pôles d\'activité', 'activities_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Les collectifs de Pôle d\'activités';
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
    'business_group' => 'business_group',
  );
  /* Filter criterion: Field: Type de collectif (field_group_type) */
  $handler->display->display_options['filters']['field_group_type_value']['id'] = 'field_group_type_value';
  $handler->display->display_options['filters']['field_group_type_value']['table'] = 'field_data_field_group_type';
  $handler->display->display_options['filters']['field_group_type_value']['field'] = 'field_group_type_value';
  $handler->display->display_options['filters']['field_group_type_value']['value'] = array(
    'cm' => 'cm',
  );
  $handler->display->display_options['path'] = 'espace-co-entrepreneur/collectifs-pole-activites';

  /* Display: Page collectifs auto-gérés */
  $handler = $view->new_display('page', 'Page collectifs auto-gérés', 'auto_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Les collectifs auto-gérés';
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
    'business_group' => 'business_group',
  );
  /* Filter criterion: Field: Type de collectif (field_group_type) */
  $handler->display->display_options['filters']['field_group_type_value']['id'] = 'field_group_type_value';
  $handler->display->display_options['filters']['field_group_type_value']['table'] = 'field_data_field_group_type';
  $handler->display->display_options['filters']['field_group_type_value']['field'] = 'field_group_type_value';
  $handler->display->display_options['filters']['field_group_type_value']['value'] = array(
    'gag' => 'gag',
  );
  $handler->display->display_options['path'] = 'espace-co-entrepreneur/collectifs-auto-geres';

  /* Display: Bloc */
  $handler = $view->new_display('block', 'Bloc', 'bg_block');
  $handler->display->display_options['display_comment'] = 'Bloc présent sur la page Collectifs (bg_block = business groups block).';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';

  /* Display: Onglet Collectifs */
  $handler = $view->new_display('page', 'Onglet Collectifs', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Page visible depuis le sous-menu Vie Crealead de l\'espace coe';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Description Collectifs';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Les collectifs de Crealead
Se paramètre dans Configuration > Crealead > Collectifs.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: View (Views field view) */
  $handler->display->display_options['header']['view_field']['id'] = 'view_field';
  $handler->display->display_options['header']['view_field']['table'] = 'views';
  $handler->display->display_options['header']['view_field']['field'] = 'view_field';
  $handler->display->display_options['header']['view_field']['label'] = '';
  $handler->display->display_options['header']['view_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['header']['view_field']['view'] = 'business_groups';
  $handler->display->display_options['header']['view_field']['display'] = 'bg_links_list';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['empty'] = TRUE;
  $handler->display->display_options['header']['area_1']['content'] = 'Code HTML pour créer le lien "Ajouter un lien vers un document".
Est codé dans crealead_groups.module, fonction crealead_groups_views_pre_view(),
au moment de l\'interception et la ré-écriture du header.';
  $handler->display->display_options['header']['area_1']['format'] = 'full_html';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
    'page' => 'page',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '999999999';
  $handler->display->display_options['path'] = 'espace-co-entrepreneur/collectifs';

  /* Display: Bloc liens vers docs collectifs */
  $handler = $view->new_display('block', 'Bloc liens vers docs collectifs', 'bg_links_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Documents à consulter';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Pictogramme */
  $handler->display->display_options['fields']['field_pictogramme']['id'] = 'field_pictogramme';
  $handler->display->display_options['fields']['field_pictogramme']['table'] = 'field_data_field_pictogramme';
  $handler->display->display_options['fields']['field_pictogramme']['field'] = 'field_pictogramme';
  $handler->display->display_options['fields']['field_pictogramme']['label'] = '';
  $handler->display->display_options['fields']['field_pictogramme']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pictogramme']['type'] = 'ds_taxonomy_view_mode';
  /* Field: Content: Url du document */
  $handler->display->display_options['fields']['field_document_url']['id'] = 'field_document_url';
  $handler->display->display_options['fields']['field_document_url']['table'] = 'field_data_field_document_url';
  $handler->display->display_options['fields']['field_document_url']['field'] = 'field_document_url';
  $handler->display->display_options['fields']['field_document_url']['label'] = '';
  $handler->display->display_options['fields']['field_document_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_url']['click_sort_column'] = 'url';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
    'link_to_doc' => 'link_to_doc',
  );
  /* Filter criterion: Content: Rubrique (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'col' => 'col',
  );

  /* Display: Bloc collectifs pôles d'activités */
  $handler = $view->new_display('block', 'Bloc collectifs pôles d\'activités', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Les collectifs';
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
    'business_group' => 'business_group',
  );
  /* Filter criterion: Field: Type de collectif (field_group_type) */
  $handler->display->display_options['filters']['field_group_type_value']['id'] = 'field_group_type_value';
  $handler->display->display_options['filters']['field_group_type_value']['table'] = 'field_data_field_group_type';
  $handler->display->display_options['filters']['field_group_type_value']['field'] = 'field_group_type_value';
  $handler->display->display_options['filters']['field_group_type_value']['value'] = array(
    'cm' => 'cm',
  );
  $translatables['business_groups'] = array(
    t('Master'),
    t('Les collectifs Crealead'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page collectifs territoriaux'),
    t('Les collectifs territoriaux'),
    t('Page comités techniques'),
    t('Les comités techniques'),
    t('Page collectifs pôles d\'activité'),
    t('Les collectifs de Pôle d\'activités'),
    t('Page collectifs auto-gérés'),
    t('Les collectifs auto-gérés'),
    t('Bloc'),
    t('Onglet Collectifs'),
    t('Page visible depuis le sous-menu Vie Crealead de l\'espace coe'),
    t('Description Collectifs'),
    t('Les collectifs de Crealead
Se paramètre dans Configuration > Crealead > Collectifs.'),
    t('Code HTML pour créer le lien "Ajouter un lien vers un document".
Est codé dans crealead_groups.module, fonction crealead_groups_views_pre_view(),
au moment de l\'interception et la ré-écriture du header.'),
    t('Bloc liens vers docs collectifs'),
    t('Documents à consulter'),
    t('Bloc collectifs pôles d\'activités'),
    t('Les collectifs'),
  );
  $export['business_groups'] = $view;

  return $export;
}
