<?php
/**
 * @file
 * crealead_info_meetings.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function crealead_info_meetings_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'info_meetings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Réunions d\'information';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Les réunions d\'information';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Entête: Global : Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '
Co-entreprendre en CAE de 9h15 à 12h30

Accueil
Qu\'est ce qu\'une Coopérative d\'Activités et d\'Entrepreneurs (CAE) ? 
A quel moment intégrer la CAE ? Comment se préparer ? 
Le parcours : l\'accompagnement, les formations, le conseil.
Présentation de la plateforme de gestion en ligne, Louty
Combien ça coûte ? Combien de temps cela dure ? 
Quel statut ? Quel compatibilité avec mes indemnités Pôle Emploi, mon RSA ?
Les animations réseaux de Crealead
Quel intérêt par rapport au statut de l\'autoentrepreneur ?';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Pied de page: Global : Zone de texte */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = 'Hôtel de la coopération (aile droite)
contact@crealead.com 
55, rue Saint Cléophas 34000 Montpellier 
Téléphone : 04-67-06-96-72';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Champ: Contenu : Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_info_meeting_date']['id'] = 'field_info_meeting_date';
  $handler->display->display_options['fields']['field_info_meeting_date']['table'] = 'field_data_field_info_meeting_date';
  $handler->display->display_options['fields']['field_info_meeting_date']['field'] = 'field_info_meeting_date';
  $handler->display->display_options['fields']['field_info_meeting_date']['label'] = '';
  $handler->display->display_options['fields']['field_info_meeting_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_info_meeting_date']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_info_meeting_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_info_meeting_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
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
    'info_meeting' => 'info_meeting',
  );

  /* Display: Liste dates réunions */
  $handler = $view->new_display('page_with_page_title', 'Liste dates réunions', 'info_meetings_list');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p><strong>Co-entreprendre en CAE</strong></p>

<ul>
	<li>Accueil</li>
	<li>Qu\'est ce qu\'une Coopérative d\'Activités et d\'Entrepreneurs (CAE) ?</li>
	<li>A quel moment intégrer la CAE ?</li>
	<li>Comment se préparer ?</li>
	<li>Le parcours : l\'accompagnement, les formations, le conseil.</li>
	<li>Présentation de la plateforme de gestion en ligne, Louty</li>
	<li>Combien ça coûte ? Combien de temps cela dure ? Quel statut ?</li>
	<li>Quel compatibilité avec mes indemnités Pôle Emploi, mon RSA ?</li>
	<li>Les animations réseaux de Crealead</li>
	<li>Quel intérêt par rapport au statut de l\'autoentrepreneur ?</li>
</ul>

<p><span style="font-size:16px"><strong>Prochaines réunions</strong></span></p>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Pied de page: Global : Zone de texte */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p class="rtecenter"><strong>Hôtel de la coopération (aile droite)</strong><br />
<a href="mailto:contact@crealead.com">contact@crealead.com</a><br />
55, rue Saint Cléophas 34000 Montpellier<br />
Téléphone : 04&nbsp;67&nbsp;06&nbsp;96&nbsp;72</p>
';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Registration : Nœud to Registration */
  $handler->display->display_options['relationships']['registration_rel']['id'] = 'registration_rel';
  $handler->display->display_options['relationships']['registration_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['registration_rel']['field'] = 'registration_rel';
  $handler->display->display_options['relationships']['registration_rel']['label'] = 'Inscriptions';
  /* Relation: Registration Settings : Nœud to Registration Settings */
  $handler->display->display_options['relationships']['registration_settings_rel']['id'] = 'registration_settings_rel';
  $handler->display->display_options['relationships']['registration_settings_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['registration_settings_rel']['field'] = 'registration_settings_rel';
  $handler->display->display_options['relationships']['registration_settings_rel']['label'] = 'Paramètres inscription';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Champ: Registration : Slots consumed */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'registration';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['count']['group_type'] = 'sum';
  $handler->display->display_options['fields']['count']['exclude'] = TRUE;
  /* Champ: Registration Settings : Slots Total */
  $handler->display->display_options['fields']['capacity_total']['id'] = 'capacity_total';
  $handler->display->display_options['fields']['capacity_total']['table'] = 'registration_entity';
  $handler->display->display_options['fields']['capacity_total']['field'] = 'capacity_total';
  $handler->display->display_options['fields']['capacity_total']['relationship'] = 'registration_settings_rel';
  $handler->display->display_options['fields']['capacity_total']['exclude'] = TRUE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_info_meeting_date']['id'] = 'field_info_meeting_date';
  $handler->display->display_options['fields']['field_info_meeting_date']['table'] = 'field_data_field_info_meeting_date';
  $handler->display->display_options['fields']['field_info_meeting_date']['field'] = 'field_info_meeting_date';
  $handler->display->display_options['fields']['field_info_meeting_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_info_meeting_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Champ: Global : Expression mathématique */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Places restantes';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[capacity_total] - [count]';
  /* Champ: Contenu : Lien */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 's\'inscrire';
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
    'info_meeting' => 'info_meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Registration Settings : Date d'ouverture */
  $handler->display->display_options['filters']['open']['id'] = 'open';
  $handler->display->display_options['filters']['open']['table'] = 'registration_entity';
  $handler->display->display_options['filters']['open']['field'] = 'open';
  $handler->display->display_options['filters']['open']['relationship'] = 'registration_settings_rel';
  $handler->display->display_options['filters']['open']['operator'] = '<=';
  $handler->display->display_options['filters']['open']['value']['value'] = 'now';
  $handler->display->display_options['filters']['open']['value']['type'] = 'offset';
  /* Critère de filtrage: Registration Settings : Date de fermeture */
  $handler->display->display_options['filters']['close']['id'] = 'close';
  $handler->display->display_options['filters']['close']['table'] = 'registration_entity';
  $handler->display->display_options['filters']['close']['field'] = 'close';
  $handler->display->display_options['filters']['close']['relationship'] = 'registration_settings_rel';
  $handler->display->display_options['filters']['close']['operator'] = '>=';
  $handler->display->display_options['filters']['close']['value']['value'] = 'now';
  $handler->display->display_options['filters']['close']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'reunions-information';

  /* Display: Inscriptions */
  $handler = $view->new_display('page', 'Inscriptions', 'registrations_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Inscriptions réunions d\'information';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_info_meeting_date',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'field_info_meeting_date' => 'field_info_meeting_date',
    'registration_id' => 'registration_id',
    'created' => 'created',
    'field_registrant_lastname' => 'field_registrant_lastname',
    'field_registrant_firstname' => 'field_registrant_lastname',
    'anon_mail' => 'anon_mail',
    'field_registrant_status' => 'field_registrant_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_info_meeting_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'registration_id' => array(
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
    'field_registrant_lastname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'field_registrant_firstname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'anon_mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_registrant_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Registration : Nœud to Registration */
  $handler->display->display_options['relationships']['registration_rel']['id'] = 'registration_rel';
  $handler->display->display_options['relationships']['registration_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['registration_rel']['field'] = 'registration_rel';
  $handler->display->display_options['relationships']['registration_rel']['label'] = 'Inscriptions';
  $handler->display->display_options['relationships']['registration_rel']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_info_meeting_date']['id'] = 'field_info_meeting_date';
  $handler->display->display_options['fields']['field_info_meeting_date']['table'] = 'field_data_field_info_meeting_date';
  $handler->display->display_options['fields']['field_info_meeting_date']['field'] = 'field_info_meeting_date';
  $handler->display->display_options['fields']['field_info_meeting_date']['label'] = '';
  $handler->display->display_options['fields']['field_info_meeting_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_info_meeting_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_info_meeting_date']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_info_meeting_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_info_meeting_date']['settings'] = array(
    'format_type' => 'info_meeting_medium',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Champ: Registration : Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['registration_id']['label'] = 'N°';
  /* Champ: Registration : Date de création */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'registration';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['created']['label'] = 'Date d\'inscription';
  $handler->display->display_options['fields']['created']['date_format'] = 'info_meeting_medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Champ: Registration : Nom */
  $handler->display->display_options['fields']['field_registrant_lastname']['id'] = 'field_registrant_lastname';
  $handler->display->display_options['fields']['field_registrant_lastname']['table'] = 'field_data_field_registrant_lastname';
  $handler->display->display_options['fields']['field_registrant_lastname']['field'] = 'field_registrant_lastname';
  $handler->display->display_options['fields']['field_registrant_lastname']['relationship'] = 'registration_rel';
  /* Champ: Registration : Prénom */
  $handler->display->display_options['fields']['field_registrant_firstname']['id'] = 'field_registrant_firstname';
  $handler->display->display_options['fields']['field_registrant_firstname']['table'] = 'field_data_field_registrant_firstname';
  $handler->display->display_options['fields']['field_registrant_firstname']['field'] = 'field_registrant_firstname';
  $handler->display->display_options['fields']['field_registrant_firstname']['relationship'] = 'registration_rel';
  /* Champ: Registration : Anonymous e-mail */
  $handler->display->display_options['fields']['anon_mail']['id'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['table'] = 'registration';
  $handler->display->display_options['fields']['anon_mail']['field'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['relationship'] = 'registration_rel';
  $handler->display->display_options['fields']['anon_mail']['label'] = 'Courriel';
  /* Champ: Registration : Statut */
  $handler->display->display_options['fields']['field_registrant_status']['id'] = 'field_registrant_status';
  $handler->display->display_options['fields']['field_registrant_status']['table'] = 'field_data_field_registrant_status';
  $handler->display->display_options['fields']['field_registrant_status']['field'] = 'field_registrant_status';
  $handler->display->display_options['fields']['field_registrant_status']['relationship'] = 'registration_rel';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Contenu : Date - date de début (field_info_meeting_date) */
  $handler->display->display_options['sorts']['field_info_meeting_date_value']['id'] = 'field_info_meeting_date_value';
  $handler->display->display_options['sorts']['field_info_meeting_date_value']['table'] = 'field_data_field_info_meeting_date';
  $handler->display->display_options['sorts']['field_info_meeting_date_value']['field'] = 'field_info_meeting_date_value';
  /* Critère de tri: Registration : Registration ID */
  $handler->display->display_options['sorts']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['sorts']['registration_id']['table'] = 'registration';
  $handler->display->display_options['sorts']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['sorts']['registration_id']['relationship'] = 'registration_rel';
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
    'info_meeting' => 'info_meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'reunions-information-inscriptions';
  $translatables['info_meetings'] = array(
    t('Master'),
    t('Les réunions d\'information'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('
Co-entreprendre en CAE de 9h15 à 12h30

Accueil
Qu\'est ce qu\'une Coopérative d\'Activités et d\'Entrepreneurs (CAE) ? 
A quel moment intégrer la CAE ? Comment se préparer ? 
Le parcours : l\'accompagnement, les formations, le conseil.
Présentation de la plateforme de gestion en ligne, Louty
Combien ça coûte ? Combien de temps cela dure ? 
Quel statut ? Quel compatibilité avec mes indemnités Pôle Emploi, mon RSA ?
Les animations réseaux de Crealead
Quel intérêt par rapport au statut de l\'autoentrepreneur ?'),
    t('Hôtel de la coopération (aile droite)
contact@crealead.com 
55, rue Saint Cléophas 34000 Montpellier 
Téléphone : 04-67-06-96-72'),
    t('Liste dates réunions'),
    t('<p><strong>Co-entreprendre en CAE</strong></p>

<ul>
	<li>Accueil</li>
	<li>Qu\'est ce qu\'une Coopérative d\'Activités et d\'Entrepreneurs (CAE) ?</li>
	<li>A quel moment intégrer la CAE ?</li>
	<li>Comment se préparer ?</li>
	<li>Le parcours : l\'accompagnement, les formations, le conseil.</li>
	<li>Présentation de la plateforme de gestion en ligne, Louty</li>
	<li>Combien ça coûte ? Combien de temps cela dure ? Quel statut ?</li>
	<li>Quel compatibilité avec mes indemnités Pôle Emploi, mon RSA ?</li>
	<li>Les animations réseaux de Crealead</li>
	<li>Quel intérêt par rapport au statut de l\'autoentrepreneur ?</li>
</ul>

<p><span style="font-size:16px"><strong>Prochaines réunions</strong></span></p>
'),
    t('<p class="rtecenter"><strong>Hôtel de la coopération (aile droite)</strong><br />
<a href="mailto:contact@crealead.com">contact@crealead.com</a><br />
55, rue Saint Cléophas 34000 Montpellier<br />
Téléphone : 04&nbsp;67&nbsp;06&nbsp;96&nbsp;72</p>
'),
    t('Inscriptions'),
    t('Paramètres inscription'),
    t('Slots consumed'),
    t('.'),
    t(','),
    t('Slots Total'),
    t('Date'),
    t('Places restantes'),
    t('s\'inscrire'),
    t('Inscriptions réunions d\'information'),
    t('N°'),
    t('Date d\'inscription'),
    t('Nom'),
    t('Prénom'),
    t('Courriel'),
    t('Statut'),
  );
  $export['info_meetings'] = $view;

  return $export;
}
