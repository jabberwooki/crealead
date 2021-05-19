<?php
/**
 * @file
 * crealead_newsflashes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function crealead_newsflashes_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'newsflashes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Brèves';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Brèves';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Tout';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'name' => 'name',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Il n\'y a actuellement aucune brève. Veuillez modifier vos critères de recherche le cas échéant.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'auteur';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Titre';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Population concernée */
  $handler->display->display_options['fields']['field_related_population']['id'] = 'field_related_population';
  $handler->display->display_options['fields']['field_related_population']['table'] = 'field_data_field_related_population';
  $handler->display->display_options['fields']['field_related_population']['field'] = 'field_related_population';
  $handler->display->display_options['fields']['field_related_population']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_population']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_related_population']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Auteur';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'news_short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
    'newsflash' => 'newsflash',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date de fin d&#039;affichage (field_display_end_date) */
  $handler->display->display_options['filters']['field_display_end_date_value']['id'] = 'field_display_end_date_value';
  $handler->display->display_options['filters']['field_display_end_date_value']['table'] = 'field_data_field_display_end_date';
  $handler->display->display_options['filters']['field_display_end_date_value']['field'] = 'field_display_end_date_value';
  $handler->display->display_options['filters']['field_display_end_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_display_end_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_display_end_date_value']['default_date'] = 'now';

  /* Display: Bloc espace coes */
  $handler = $view->new_display('block', 'Bloc espace coes', 'coes_area_block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Rechercher';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Tout';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
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
    'newsflash' => 'newsflash',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date de fin d&#039;affichage (field_display_end_date) */
  $handler->display->display_options['filters']['field_display_end_date_value']['id'] = 'field_display_end_date_value';
  $handler->display->display_options['filters']['field_display_end_date_value']['table'] = 'field_data_field_display_end_date';
  $handler->display->display_options['filters']['field_display_end_date_value']['field'] = 'field_display_end_date_value';
  $handler->display->display_options['filters']['field_display_end_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_display_end_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_display_end_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Thème (field_theme_breve) */
  $handler->display->display_options['filters']['field_theme_breve_tid']['id'] = 'field_theme_breve_tid';
  $handler->display->display_options['filters']['field_theme_breve_tid']['table'] = 'field_data_field_theme_breve';
  $handler->display->display_options['filters']['field_theme_breve_tid']['field'] = 'field_theme_breve_tid';
  $handler->display->display_options['filters']['field_theme_breve_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_theme_breve_tid']['expose']['operator_id'] = 'field_theme_breve_tid_op';
  $handler->display->display_options['filters']['field_theme_breve_tid']['expose']['label'] = 'Thème';
  $handler->display->display_options['filters']['field_theme_breve_tid']['expose']['operator'] = 'field_theme_breve_tid_op';
  $handler->display->display_options['filters']['field_theme_breve_tid']['expose']['identifier'] = 'field_theme_breve_tid';
  $handler->display->display_options['filters']['field_theme_breve_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_theme_breve_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    14479344 => '14479344',
    103860121 => '103860121',
    191976793 => '191976793',
    259028912 => '259028912',
    7178059 => '7178059',
    157297110 => '157297110',
    31497918 => '31497918',
    231346920 => '231346920',
    193262079 => '193262079',
  );
  $handler->display->display_options['filters']['field_theme_breve_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_theme_breve_tid']['vocabulary'] = 'th_mes_br_ve';
  /* Filter criterion: Content: Population concernée (field_related_population) */
  $handler->display->display_options['filters']['field_related_population_tid']['id'] = 'field_related_population_tid';
  $handler->display->display_options['filters']['field_related_population_tid']['table'] = 'field_data_field_related_population';
  $handler->display->display_options['filters']['field_related_population_tid']['field'] = 'field_related_population_tid';
  $handler->display->display_options['filters']['field_related_population_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_related_population_tid']['expose']['operator_id'] = 'field_related_population_tid_op';
  $handler->display->display_options['filters']['field_related_population_tid']['expose']['label'] = 'Population concernée';
  $handler->display->display_options['filters']['field_related_population_tid']['expose']['operator'] = 'field_related_population_tid_op';
  $handler->display->display_options['filters']['field_related_population_tid']['expose']['identifier'] = 'field_related_population_tid';
  $handler->display->display_options['filters']['field_related_population_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_related_population_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14479344 => 0,
    103860121 => 0,
    191976793 => 0,
    259028912 => 0,
    7178059 => 0,
    157297110 => 0,
    31497918 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_related_population_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_related_population_tid']['vocabulary'] = 'populations';

  /* Display: Page espace coes */
  $handler = $view->new_display('page_with_page_title', 'Page espace coes', 'coe_area_page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '&nbsp;';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
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
    'newsflash' => 'newsflash',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date de fin d&#039;affichage (field_display_end_date) */
  $handler->display->display_options['filters']['field_display_end_date_value']['id'] = 'field_display_end_date_value';
  $handler->display->display_options['filters']['field_display_end_date_value']['table'] = 'field_data_field_display_end_date';
  $handler->display->display_options['filters']['field_display_end_date_value']['field'] = 'field_display_end_date_value';
  $handler->display->display_options['filters']['field_display_end_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_display_end_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_display_end_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Thème (field_theme_breve) */
  $handler->display->display_options['filters']['field_theme_breve_tid']['id'] = 'field_theme_breve_tid';
  $handler->display->display_options['filters']['field_theme_breve_tid']['table'] = 'field_data_field_theme_breve';
  $handler->display->display_options['filters']['field_theme_breve_tid']['field'] = 'field_theme_breve_tid';
  $handler->display->display_options['filters']['field_theme_breve_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_theme_breve_tid']['expose']['operator_id'] = 'field_theme_breve_tid_op';
  $handler->display->display_options['filters']['field_theme_breve_tid']['expose']['label'] = 'Thème';
  $handler->display->display_options['filters']['field_theme_breve_tid']['expose']['operator'] = 'field_theme_breve_tid_op';
  $handler->display->display_options['filters']['field_theme_breve_tid']['expose']['identifier'] = 'field_theme_breve_tid';
  $handler->display->display_options['filters']['field_theme_breve_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_theme_breve_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14479344 => 0,
    199363405 => 0,
    103860121 => 0,
    227964678 => 0,
    157083709 => 0,
    7178059 => 0,
    259028912 => 0,
    157297110 => 0,
    191976793 => 0,
    8998634 => 0,
    31497918 => 0,
    65237971 => 0,
    58920180 => 0,
    155486910 => 0,
    231346920 => 0,
    193262079 => 0,
    1936756 => 0,
  );
  $handler->display->display_options['filters']['field_theme_breve_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_theme_breve_tid']['vocabulary'] = 'th_mes_br_ve';
  /* Filter criterion: Content: Population concernée (field_related_population) */
  $handler->display->display_options['filters']['field_related_population_tid']['id'] = 'field_related_population_tid';
  $handler->display->display_options['filters']['field_related_population_tid']['table'] = 'field_data_field_related_population';
  $handler->display->display_options['filters']['field_related_population_tid']['field'] = 'field_related_population_tid';
  $handler->display->display_options['filters']['field_related_population_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_related_population_tid']['expose']['operator_id'] = 'field_related_population_tid_op';
  $handler->display->display_options['filters']['field_related_population_tid']['expose']['label'] = 'Population concernée';
  $handler->display->display_options['filters']['field_related_population_tid']['expose']['operator'] = 'field_related_population_tid_op';
  $handler->display->display_options['filters']['field_related_population_tid']['expose']['identifier'] = 'field_related_population_tid';
  $handler->display->display_options['filters']['field_related_population_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_related_population_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14479344 => 0,
    199363405 => 0,
    103860121 => 0,
    227964678 => 0,
    157083709 => 0,
    7178059 => 0,
    259028912 => 0,
    157297110 => 0,
    191976793 => 0,
    8998634 => 0,
    31497918 => 0,
    65237971 => 0,
    58920180 => 0,
    155486910 => 0,
    231346920 => 0,
    193262079 => 0,
    1936756 => 0,
  );
  $handler->display->display_options['filters']['field_related_population_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_related_population_tid']['vocabulary'] = 'populations';
  $handler->display->display_options['path'] = 'espace-co-entrepreneur/breves';
  $translatables['newsflashes'] = array(
    t('Master'),
    t('Brèves'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('Tout'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Il n\'y a actuellement aucune brève. Veuillez modifier vos critères de recherche le cas échéant.'),
    t('auteur'),
    t('Titre'),
    t('Population concernée'),
    t('Auteur'),
    t('Date'),
    t('Bloc espace coes'),
    t('Rechercher'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Thème'),
    t('Page espace coes'),
    t('&nbsp;'),
  );
  $export['newsflashes'] = $view;

  return $export;
}
