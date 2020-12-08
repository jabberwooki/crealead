<?php
/**
 * @file
 * crealead_needs.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function crealead_needs_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'needs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Demandes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Demandes';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'created' => 'created',
    'title' => 'title',
    'field_other_enquirers' => 'field_other_enquirers',
    'field_need_action' => 'field_need_action',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_other_enquirers' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_need_action' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'code du bouton Ajouter
voir crealead_needs_views_pre_render()';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = 'code du bouton Ajouter
voir crealead_needs_views_pre_render()';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Il n\'y a actuellement aucune demande.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Demandé par */
  $handler->display->display_options['fields']['field_need_client']['id'] = 'field_need_client';
  $handler->display->display_options['fields']['field_need_client']['table'] = 'field_data_field_need_client';
  $handler->display->display_options['fields']['field_need_client']['field'] = 'field_need_client';
  $handler->display->display_options['fields']['field_need_client']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_need_client']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Coordonnées */
  $handler->display->display_options['fields']['field_need_contact_details']['id'] = 'field_need_contact_details';
  $handler->display->display_options['fields']['field_need_contact_details']['table'] = 'field_data_field_need_contact_details';
  $handler->display->display_options['fields']['field_need_contact_details']['field'] = 'field_need_contact_details';
  $handler->display->display_options['fields']['field_need_contact_details']['label'] = 'Contact';
  $handler->display->display_options['fields']['field_need_contact_details']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['date_format'] = 'news_short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Prises de contact */
  $handler->display->display_options['fields']['field_other_enquirers']['id'] = 'field_other_enquirers';
  $handler->display->display_options['fields']['field_other_enquirers']['table'] = 'field_data_field_other_enquirers';
  $handler->display->display_options['fields']['field_other_enquirers']['field'] = 'field_other_enquirers';
  $handler->display->display_options['fields']['field_other_enquirers']['settings'] = array(
    'link' => 0,
    'colorbox_node_link' => 0,
    'colorbox_node_width' => '600',
    'colorbox_node_height' => '600',
    'colorbox_node_classes' => '',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_other_enquirers']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_other_enquirers']['multi_type'] = 'ul';
  /* Field: Content: Action */
  $handler->display->display_options['fields']['field_need_action']['id'] = 'field_need_action';
  $handler->display->display_options['fields']['field_need_action']['table'] = 'field_data_field_need_action';
  $handler->display->display_options['fields']['field_need_action']['field'] = 'field_need_action';
  $handler->display->display_options['fields']['field_need_action']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'need' => 'need',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_display_end_date.field_display_end_date_value' => 'field_data_field_display_end_date.field_display_end_date_value',
  );
  /* Filter criterion: Content: J&#039;ai trouvé une solution (field_solution_found) */
  $handler->display->display_options['filters']['field_solution_found_value']['id'] = 'field_solution_found_value';
  $handler->display->display_options['filters']['field_solution_found_value']['table'] = 'field_data_field_solution_found';
  $handler->display->display_options['filters']['field_solution_found_value']['field'] = 'field_solution_found_value';
  $handler->display->display_options['filters']['field_solution_found_value']['value'] = array(
    0 => '0',
  );

  /* Display: Bloc espace coes */
  $handler = $view->new_display('block', 'Bloc espace coes', 'needs_list');
  $handler->display->display_options['defaults']['css_class'] = FALSE;

  /* Display: Page espace coes */
  $handler = $view->new_display('page_with_page_title', 'Page espace coes', 'needs_page');
  $handler->display->display_options['path'] = 'espace-co-entrepreneur/demandes';

  /* Display: Bloc liens vers docs échanges */
  $handler = $view->new_display('block', 'Bloc liens vers docs échanges', 'links_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Documents à consulter';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Rubrique (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'ech' => 'ech',
  );

  /* Display: Bloc liens vers docs coopins */
  $handler = $view->new_display('block', 'Bloc liens vers docs coopins', 'coo_links_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Documents à consulter';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Rubrique (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'coo' => 'coo',
  );

  /* Display: Bloc liens vers docs associés */
  $handler = $view->new_display('block', 'Bloc liens vers docs associés', 'ass_links_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Documents à consulter';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Rubrique (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'ass' => 'ass',
  );
  $translatables['needs'] = array(
    t('Master'),
    t('Demandes'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('code du bouton Ajouter
voir crealead_needs_views_pre_render()'),
    t('Il n\'y a actuellement aucune demande.'),
    t('Title'),
    t('Demandé par'),
    t('Contact'),
    t('Date'),
    t('Prises de contact'),
    t('Action'),
    t('Bloc espace coes'),
    t('Page espace coes'),
    t('Bloc liens vers docs échanges'),
    t('Documents à consulter'),
    t('Bloc liens vers docs coopins'),
    t('Bloc liens vers docs associés'),
  );
  $export['needs'] = $view;

  return $export;
}
