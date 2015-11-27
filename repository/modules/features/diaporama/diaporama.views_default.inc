<?php
/**
 * @file
 * diaporama.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function diaporama_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'diaporama';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Diaporama';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Diaporama';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = 'Tout';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'controleur';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Critère de tri: Contenu : Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'diapositive' => 'diapositive',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Contenu : Corps */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Image */
  $handler->display->display_options['fields']['field_image_scald']['id'] = 'field_image_scald';
  $handler->display->display_options['fields']['field_image_scald']['table'] = 'field_data_field_image_scald';
  $handler->display->display_options['fields']['field_image_scald']['field'] = 'field_image_scald';
  $handler->display->display_options['fields']['field_image_scald']['label'] = '';
  $handler->display->display_options['fields']['field_image_scald']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_scald']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_scald']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_image_scald']['type'] = 'diaporama';
  $handler->display->display_options['fields']['field_image_scald']['settings'] = array(
    'link' => '0',
  );
  /* Champ: Contenu : URL de destination */
  $handler->display->display_options['fields']['field_url_de_destination']['id'] = 'field_url_de_destination';
  $handler->display->display_options['fields']['field_url_de_destination']['table'] = 'field_data_field_url_de_destination';
  $handler->display->display_options['fields']['field_url_de_destination']['field'] = 'field_url_de_destination';
  $handler->display->display_options['fields']['field_url_de_destination']['label'] = '';
  $handler->display->display_options['fields']['field_url_de_destination']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_url_de_destination']['alter']['text'] = '<div class="diapositive">
  <a href="[field_url_de_destination]">[field_image_scald]</a>
  <a href="[field_url_de_destination]">[body]</a>
</div>';
  $handler->display->display_options['fields']['field_url_de_destination']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_de_destination']['empty'] = '<div class="diapositive">
  [field_image_scald]
  [body]
</div>';
  $handler->display->display_options['fields']['field_url_de_destination']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['path'] = 'diaporama';

  /* Display: Bloc */
  $handler = $view->new_display('block', 'Bloc', 'block_home_slideshow');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Contenu : Image */
  $handler->display->display_options['fields']['field_image_scald']['id'] = 'field_image_scald';
  $handler->display->display_options['fields']['field_image_scald']['table'] = 'field_data_field_image_scald';
  $handler->display->display_options['fields']['field_image_scald']['field'] = 'field_image_scald';
  $handler->display->display_options['fields']['field_image_scald']['label'] = '';
  $handler->display->display_options['fields']['field_image_scald']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_scald']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_scald']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_image_scald']['type'] = 'diaporama';
  $handler->display->display_options['fields']['field_image_scald']['settings'] = array(
    'link' => '0',
  );
  /* Champ: Contenu : Corps */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Champ: Contenu : URL de destination */
  $handler->display->display_options['fields']['field_url_de_destination']['id'] = 'field_url_de_destination';
  $handler->display->display_options['fields']['field_url_de_destination']['table'] = 'field_data_field_url_de_destination';
  $handler->display->display_options['fields']['field_url_de_destination']['field'] = 'field_url_de_destination';
  $handler->display->display_options['fields']['field_url_de_destination']['label'] = '';
  $handler->display->display_options['fields']['field_url_de_destination']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_url_de_destination']['alter']['text'] = '<div class="diapositive">
  <a href="[field_url_de_destination]" class="img-diapo">[field_image_scald]</a>
  <div class="txt-diapo">  
    <a href="[field_url_de_destination]" class="link-diapo">[body]</a>
  </div>
</div>';
  $handler->display->display_options['fields']['field_url_de_destination']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_de_destination']['empty'] = '<div class="diapositive">
  [field_image_scald]
  <div class="txt-diapo">  
    [body]
</div>
</div>';

  /* Display: Col 1 controleurs */
  $handler = $view->new_display('attachment', 'Col 1 controleurs', 'controlers_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 id="title-controler-col-1">Devenez <br><span class="subtitle-controler-1">Co-entrepreneur</span></h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Contenu : URL de destination */
  $handler->display->display_options['fields']['field_url_de_destination']['id'] = 'field_url_de_destination';
  $handler->display->display_options['fields']['field_url_de_destination']['table'] = 'field_data_field_url_de_destination';
  $handler->display->display_options['fields']['field_url_de_destination']['field'] = 'field_url_de_destination';
  $handler->display->display_options['fields']['field_url_de_destination']['label'] = '';
  $handler->display->display_options['fields']['field_url_de_destination']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_url_de_destination']['alter']['text'] = '<div class="controler"><a href="[field_url_de_destination]" class="link-controler">[title]</a></div>';
  $handler->display->display_options['fields']['field_url_de_destination']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_de_destination']['empty'] = '<div class="controler">[title]</div>';
  $handler->display->display_options['fields']['field_url_de_destination']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'diapositive' => 'diapositive',
  );
  /* Critère de filtrage: Contenu : Colonne (field_colonne) */
  $handler->display->display_options['filters']['field_colonne_value']['id'] = 'field_colonne_value';
  $handler->display->display_options['filters']['field_colonne_value']['table'] = 'field_data_field_colonne';
  $handler->display->display_options['filters']['field_colonne_value']['field'] = 'field_colonne_value';
  $handler->display->display_options['filters']['field_colonne_value']['value'] = array(
    'col-1' => 'col-1',
  );
  $handler->display->display_options['displays'] = array(
    'block_home_slideshow' => 'block_home_slideshow',
    'default' => 0,
    'page' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Col 2 controleurs */
  $handler = $view->new_display('attachment', 'Col 2 controleurs', 'controlers_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 id="title-controler-col-1">Trouvez <br><span class="subtitle-controler-2">un prestataire ou un artisan</span></h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'controleur';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Contenu : URL de destination */
  $handler->display->display_options['fields']['field_url_de_destination']['id'] = 'field_url_de_destination';
  $handler->display->display_options['fields']['field_url_de_destination']['table'] = 'field_data_field_url_de_destination';
  $handler->display->display_options['fields']['field_url_de_destination']['field'] = 'field_url_de_destination';
  $handler->display->display_options['fields']['field_url_de_destination']['label'] = '';
  $handler->display->display_options['fields']['field_url_de_destination']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_url_de_destination']['alter']['text'] = '<div class="controler"><a href="[field_url_de_destination]" class="link-controler">[title]</a></div>';
  $handler->display->display_options['fields']['field_url_de_destination']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_de_destination']['empty'] = '<div class="controler">[title]</div>';
  $handler->display->display_options['fields']['field_url_de_destination']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'diapositive' => 'diapositive',
  );
  /* Critère de filtrage: Contenu : Colonne (field_colonne) */
  $handler->display->display_options['filters']['field_colonne_value']['id'] = 'field_colonne_value';
  $handler->display->display_options['filters']['field_colonne_value']['table'] = 'field_data_field_colonne';
  $handler->display->display_options['filters']['field_colonne_value']['field'] = 'field_colonne_value';
  $handler->display->display_options['filters']['field_colonne_value']['value'] = array(
    'col-2' => 'col-2',
  );
  $handler->display->display_options['displays'] = array(
    'block_home_slideshow' => 'block_home_slideshow',
    'default' => 0,
    'page' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $translatables['diaporama'] = array(
    t('Master'),
    t('Diaporama'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('Tout'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Page'),
    t('<div class="diapositive">
  <a href="[field_url_de_destination]">[field_image_scald]</a>
  <a href="[field_url_de_destination]">[body]</a>
</div>'),
    t('<div class="diapositive">
  [field_image_scald]
  [body]
</div>'),
    t('Bloc'),
    t('<div class="diapositive">
  <a href="[field_url_de_destination]" class="img-diapo">[field_image_scald]</a>
  <div class="txt-diapo">  
    <a href="[field_url_de_destination]" class="link-diapo">[body]</a>
  </div>
</div>'),
    t('<div class="diapositive">
  [field_image_scald]
  <div class="txt-diapo">  
    [body]
</div>
</div>'),
    t('Col 1 controleurs'),
    t('<h2 id="title-controler-col-1">Devenez <br><span class="subtitle-controler-1">Co-entrepreneur</span></h2>'),
    t('<div class="controler"><a href="[field_url_de_destination]" class="link-controler">[title]</a></div>'),
    t('<div class="controler">[title]</div>'),
    t('Col 2 controleurs'),
    t('<h2 id="title-controler-col-1">Trouvez <br><span class="subtitle-controler-2">un prestataire ou un artisan</span></h2>'),
  );
  $export['diaporama'] = $view;

  return $export;
}
