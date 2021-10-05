<?php

/**
 * @file
 * crealead_associates.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function crealead_associates_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'reports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Comptes-rendus';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Comptes-rendus de CA';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    157083709 => '157083709',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_meeting_date' => 'field_meeting_date',
    'field_report_theme' => 'field_report_theme',
    'title' => 'title',
    'body' => 'body',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_meeting_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_report_theme' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Nœud: Date de la réunion */
  $handler->display->display_options['fields']['field_meeting_date']['id'] = 'field_meeting_date';
  $handler->display->display_options['fields']['field_meeting_date']['table'] = 'field_data_field_meeting_date';
  $handler->display->display_options['fields']['field_meeting_date']['field'] = 'field_meeting_date';
  $handler->display->display_options['fields']['field_meeting_date']['label'] = 'Date réunion';
  $handler->display->display_options['fields']['field_meeting_date']['settings'] = array(
    'format_type' => 'info_meeting_medium',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Nœud: Thématique */
  $handler->display->display_options['fields']['field_report_theme']['id'] = 'field_report_theme';
  $handler->display->display_options['fields']['field_report_theme']['table'] = 'field_data_field_report_theme';
  $handler->display->display_options['fields']['field_report_theme']['field'] = 'field_report_theme';
  $handler->display->display_options['fields']['field_report_theme']['type'] = 'taxonomy_term_reference_plain';
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
  /* Field: Nœud: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'lire plus';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<p> <br>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
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
    'report' => 'report',
  );
  /* Filter criterion: Nœud: Catégorie (field_report_category) */
  $handler->display->display_options['filters']['field_report_category_value']['id'] = 'field_report_category_value';
  $handler->display->display_options['filters']['field_report_category_value']['table'] = 'field_data_field_report_category';
  $handler->display->display_options['filters']['field_report_category_value']['field'] = 'field_report_category_value';
  $handler->display->display_options['filters']['field_report_category_value']['value'] = array(
    'ca' => 'ca',
  );

  /* Display: Page CA */
  $handler = $view->new_display('page', 'Page CA', 'page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Options avancées',
    ),
    'field_meeting_date_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_report_theme_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
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
    'report' => 'report',
  );
  /* Filter criterion: Nœud: Catégorie (field_report_category) */
  $handler->display->display_options['filters']['field_report_category_value']['id'] = 'field_report_category_value';
  $handler->display->display_options['filters']['field_report_category_value']['table'] = 'field_data_field_report_category';
  $handler->display->display_options['filters']['field_report_category_value']['field'] = 'field_report_category_value';
  $handler->display->display_options['filters']['field_report_category_value']['value'] = array(
    'ca' => 'ca',
  );
  /* Filter criterion: Nœud: Date de la réunion (field_meeting_date) */
  $handler->display->display_options['filters']['field_meeting_date_value']['id'] = 'field_meeting_date_value';
  $handler->display->display_options['filters']['field_meeting_date_value']['table'] = 'field_data_field_meeting_date';
  $handler->display->display_options['filters']['field_meeting_date_value']['field'] = 'field_meeting_date_value';
  $handler->display->display_options['filters']['field_meeting_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_meeting_date_value']['expose']['operator_id'] = 'field_meeting_date_value_op';
  $handler->display->display_options['filters']['field_meeting_date_value']['expose']['label'] = 'Date du CA';
  $handler->display->display_options['filters']['field_meeting_date_value']['expose']['operator'] = 'field_meeting_date_value_op';
  $handler->display->display_options['filters']['field_meeting_date_value']['expose']['identifier'] = 'field_meeting_date_value';
  $handler->display->display_options['filters']['field_meeting_date_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_meeting_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Nœud: Thématique (field_report_theme) */
  $handler->display->display_options['filters']['field_report_theme_tid']['id'] = 'field_report_theme_tid';
  $handler->display->display_options['filters']['field_report_theme_tid']['table'] = 'field_data_field_report_theme';
  $handler->display->display_options['filters']['field_report_theme_tid']['field'] = 'field_report_theme_tid';
  $handler->display->display_options['filters']['field_report_theme_tid']['value'] = '';
  $handler->display->display_options['filters']['field_report_theme_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_report_theme_tid']['expose']['operator_id'] = 'field_report_theme_tid_op';
  $handler->display->display_options['filters']['field_report_theme_tid']['expose']['label'] = 'Thématique';
  $handler->display->display_options['filters']['field_report_theme_tid']['expose']['operator'] = 'field_report_theme_tid_op';
  $handler->display->display_options['filters']['field_report_theme_tid']['expose']['identifier'] = 'field_report_theme_tid';
  $handler->display->display_options['filters']['field_report_theme_tid']['expose']['remember_roles'] = array(
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
    1936756 => 0,
    36071687 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_report_theme_tid']['vocabulary'] = 'report_themes';
  $handler->display->display_options['filters']['field_report_theme_tid']['error_message'] = FALSE;
  $handler->display->display_options['path'] = 'espace-co-entrepreneur/espace-associes/comptes-rendus-ca';

  /* Display: Bloc CA */
  $handler = $view->new_display('block', 'Bloc CA', 'asso_area');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Derniers comptes-rendus de CA';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Options avancées',
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/espace-co-entrepreneur/espace-associes/comptes-rendus-ca">Voir tous les comptes-rendus de CA</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';

  /* Display: CR comités d'étude */
  $handler = $view->new_display('page', 'CR comités d\'étude', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Comptes-rendus de Comités d\'Étude';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Options avancées',
    ),
    'field_meeting_date_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_report_theme_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
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
    'report' => 'report',
  );
  /* Filter criterion: Nœud: Catégorie (field_report_category) */
  $handler->display->display_options['filters']['field_report_category_value']['id'] = 'field_report_category_value';
  $handler->display->display_options['filters']['field_report_category_value']['table'] = 'field_data_field_report_category';
  $handler->display->display_options['filters']['field_report_category_value']['field'] = 'field_report_category_value';
  $handler->display->display_options['filters']['field_report_category_value']['value'] = array(
    'ce' => 'ce',
  );
  /* Filter criterion: Nœud: Date de la réunion (field_meeting_date) */
  $handler->display->display_options['filters']['field_meeting_date_value']['id'] = 'field_meeting_date_value';
  $handler->display->display_options['filters']['field_meeting_date_value']['table'] = 'field_data_field_meeting_date';
  $handler->display->display_options['filters']['field_meeting_date_value']['field'] = 'field_meeting_date_value';
  $handler->display->display_options['filters']['field_meeting_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_meeting_date_value']['expose']['operator_id'] = 'field_meeting_date_value_op';
  $handler->display->display_options['filters']['field_meeting_date_value']['expose']['label'] = 'Date de la réunion';
  $handler->display->display_options['filters']['field_meeting_date_value']['expose']['operator'] = 'field_meeting_date_value_op';
  $handler->display->display_options['filters']['field_meeting_date_value']['expose']['identifier'] = 'field_meeting_date_value';
  $handler->display->display_options['filters']['field_meeting_date_value']['expose']['remember_roles'] = array(
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
    1936756 => 0,
    36071687 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_meeting_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Nœud: Thématique (field_report_theme) */
  $handler->display->display_options['filters']['field_report_theme_tid']['id'] = 'field_report_theme_tid';
  $handler->display->display_options['filters']['field_report_theme_tid']['table'] = 'field_data_field_report_theme';
  $handler->display->display_options['filters']['field_report_theme_tid']['field'] = 'field_report_theme_tid';
  $handler->display->display_options['filters']['field_report_theme_tid']['value'] = '';
  $handler->display->display_options['filters']['field_report_theme_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_report_theme_tid']['expose']['operator_id'] = 'field_report_theme_tid_op';
  $handler->display->display_options['filters']['field_report_theme_tid']['expose']['label'] = 'Thématique';
  $handler->display->display_options['filters']['field_report_theme_tid']['expose']['operator'] = 'field_report_theme_tid_op';
  $handler->display->display_options['filters']['field_report_theme_tid']['expose']['identifier'] = 'field_report_theme_tid';
  $handler->display->display_options['filters']['field_report_theme_tid']['expose']['remember_roles'] = array(
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
    1936756 => 0,
    36071687 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_report_theme_tid']['vocabulary'] = 'report_themes';
  $handler->display->display_options['filters']['field_report_theme_tid']['error_message'] = FALSE;
  $handler->display->display_options['path'] = 'espace-co-entrepreneur/espace-associes/cr-comites-etude';
  $translatables['reports'] = array(
    t('Master'),
    t('Comptes-rendus de CA'),
    t('plus'),
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
    t('Date réunion'),
    t('Thématique'),
    t('Titre'),
    t('lire plus'),
    t('Page CA'),
    t('more'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Options avancées'),
    t('Date du CA'),
    t('Bloc CA'),
    t('Derniers comptes-rendus de CA'),
    t('<a href="/espace-co-entrepreneur/espace-associes/comptes-rendus-ca">Voir tous les comptes-rendus de CA</a>'),
    t('CR comités d\'étude'),
    t('Comptes-rendus de Comités d\'Étude'),
    t('Date de la réunion'),
  );
  $export['reports'] = $view;

  return $export;
}
