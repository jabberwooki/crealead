<?php

/**
 * @file
 * crealead_geolocations.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function crealead_geolocations_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'users_geolocation';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Géolocalisation utilisateurs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Carte des co-entrepreneurs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'getlocations';
  /* Relation: Utilisateur : Profil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  /* Champ: Utilisateur : Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Champ: Getlocations Fields : Glid */
  $handler->display->display_options['fields']['glid']['id'] = 'glid';
  $handler->display->display_options['fields']['glid']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['glid']['field'] = 'glid';
  /* Champ: Getlocations Fields : Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['label'] = '';
  $handler->display->display_options['fields']['latitude']['exclude'] = TRUE;
  $handler->display->display_options['fields']['latitude']['element_label_colon'] = FALSE;
  /* Champ: Getlocations Fields : Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['label'] = '';
  $handler->display->display_options['fields']['longitude']['exclude'] = TRUE;
  $handler->display->display_options['fields']['longitude']['element_label_colon'] = FALSE;
  /* Champ: Getlocations Fields : Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['label'] = '';
  $handler->display->display_options['fields']['postal_code']['element_label_colon'] = FALSE;
  /* Champ: Getlocations Fields : Ville */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  /* Champ: Getlocations Fields : Postal Code */
  $handler->display->display_options['fields']['postal_code_1']['id'] = 'postal_code_1';
  $handler->display->display_options['fields']['postal_code_1']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['postal_code_1']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code_1']['label'] = '';
  $handler->display->display_options['fields']['postal_code_1']['element_label_colon'] = FALSE;
  /* Critère de filtrage: Utilisateur : Active status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Profil : Statut de publication (field_coe_pub_status) */
  $handler->display->display_options['filters']['field_coe_pub_status_value']['id'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['table'] = 'field_data_field_coe_pub_status';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['field'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['value'] = array(
    1 => '1',
  );
  /* Critère de filtrage: Getlocations Fields : Glid */
  $handler->display->display_options['filters']['glid']['id'] = 'glid';
  $handler->display->display_options['filters']['glid']['table'] = 'getlocations_fields';
  $handler->display->display_options['filters']['glid']['field'] = 'glid';
  $handler->display->display_options['filters']['glid']['operator'] = 'not empty';
  /* Critère de filtrage: Getlocations Fields : Latitude */
  $handler->display->display_options['filters']['latitude']['id'] = 'latitude';
  $handler->display->display_options['filters']['latitude']['table'] = 'getlocations_fields';
  $handler->display->display_options['filters']['latitude']['field'] = 'latitude';
  $handler->display->display_options['filters']['latitude']['operator'] = '!=';
  $handler->display->display_options['filters']['latitude']['value']['value'] = '0';
  /* Critère de filtrage: Getlocations Fields : Longitude */
  $handler->display->display_options['filters']['longitude']['id'] = 'longitude';
  $handler->display->display_options['filters']['longitude']['table'] = 'getlocations_fields';
  $handler->display->display_options['filters']['longitude']['field'] = 'longitude';
  $handler->display->display_options['filters']['longitude']['operator'] = '!=';
  $handler->display->display_options['filters']['longitude']['value']['value'] = '0';

  /* Display: Carte coes */
  $handler = $view->new_display('page', 'Carte coes', 'coes_geolocation');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Localisation des co-entrepreneurs';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'getlocations';
  $handler->display->display_options['style_options']['node_map_marker'] = 'creandrea';
  $handler->display->display_options['style_options']['user_map_marker'] = 'creandrea';
  $handler->display->display_options['style_options']['term_map_marker'] = 'creandrea';
  $handler->display->display_options['style_options']['controltype'] = 'default';
  $handler->display->display_options['style_options']['maptype'] = 'OSM';
  $handler->display->display_options['style_options']['baselayers'] = array(
    'Map' => 0,
    'Satellite' => 0,
    'Hybrid' => 0,
    'Physical' => 0,
    'OSM' => 1,
    'OSMBW' => 0,
    'OSMDE' => 0,
    'OCM' => 0,
    'OCMT' => 0,
    'OCML' => 0,
    'OCMO' => 0,
    'Stamen' => 0,
    'StamenBG' => 0,
    'StamenHY' => 0,
    'StamenLI' => 0,
    'StamenLA' => 0,
    'StamenLT' => 0,
    'Watercolor' => 0,
    'ESRI' => 0,
    'DeLorme' => 0,
    'WorldTopoMap' => 0,
    'WorldImagery' => 0,
    'WorldTerrain' => 0,
    'WorldShadedRelief' => 0,
    'WorldPhysical' => 0,
    'OceanBasemap' => 0,
    'NatGeoWorldMap' => 0,
    'WorldGrayCanvas' => 0,
  );
  $handler->display->display_options['style_options']['usemarkermanager'] = 0;
  $handler->display->display_options['style_options']['useclustermanager'] = 0;
  $handler->display->display_options['style_options']['custom_content_enable'] = 1;
  $handler->display->display_options['style_options']['custom_content_source'] = 'view';
  $handler->display->display_options['style_options']['category_method'] = '0';
  $handler->display->display_options['style_options']['category_term_reference_field'] = 'scald_authors';
  $handler->display->display_options['style_options']['zoomcontrolposition'] = 'tl';
  $handler->display->display_options['style_options']['mapcontrolposition'] = 'tr';
  $handler->display->display_options['style_options']['empty_result'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Getlocations Fields : Glid */
  $handler->display->display_options['fields']['glid']['id'] = 'glid';
  $handler->display->display_options['fields']['glid']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['glid']['field'] = 'glid';
  $handler->display->display_options['fields']['glid']['group_type'] = 'count';
  $handler->display->display_options['fields']['glid']['label'] = '';
  $handler->display->display_options['fields']['glid']['element_label_colon'] = FALSE;
  /* Champ: Getlocations Fields : Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['label'] = '';
  $handler->display->display_options['fields']['latitude']['element_label_colon'] = FALSE;
  /* Champ: Getlocations Fields : Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['label'] = '';
  $handler->display->display_options['fields']['longitude']['element_label_colon'] = FALSE;
  /* Champ: Liste coes par point geo */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Liste coes par point geo';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'users_geolocation';
  $handler->display->display_options['fields']['view']['display'] = 'coes_per_point';
  $handler->display->display_options['fields']['view']['arguments'] = '[%latitude]/[%longitude]';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Utilisateur : Active status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Getlocations Fields : Glid */
  $handler->display->display_options['filters']['glid']['id'] = 'glid';
  $handler->display->display_options['filters']['glid']['table'] = 'getlocations_fields';
  $handler->display->display_options['filters']['glid']['field'] = 'glid';
  $handler->display->display_options['filters']['glid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['glid']['group'] = 1;
  /* Critère de filtrage: Getlocations Fields : Latitude */
  $handler->display->display_options['filters']['latitude']['id'] = 'latitude';
  $handler->display->display_options['filters']['latitude']['table'] = 'getlocations_fields';
  $handler->display->display_options['filters']['latitude']['field'] = 'latitude';
  $handler->display->display_options['filters']['latitude']['operator'] = '!=';
  $handler->display->display_options['filters']['latitude']['value']['value'] = '0';
  $handler->display->display_options['filters']['latitude']['group'] = 1;
  /* Critère de filtrage: Getlocations Fields : Longitude */
  $handler->display->display_options['filters']['longitude']['id'] = 'longitude';
  $handler->display->display_options['filters']['longitude']['table'] = 'getlocations_fields';
  $handler->display->display_options['filters']['longitude']['field'] = 'longitude';
  $handler->display->display_options['filters']['longitude']['operator'] = '!=';
  $handler->display->display_options['filters']['longitude']['value']['value'] = '0';
  $handler->display->display_options['filters']['longitude']['group'] = 1;
  /* Critère de filtrage: Utilisateur : Rôles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    103860121 => '103860121',
  );
  $handler->display->display_options['path'] = 'espace-co-entrepreneur/localisation-entrepreneurs';

  /* Display: Coes d'un point géo */
  $handler = $view->new_display('block', 'Coes d\'un point géo', 'coes_per_point');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Ville (CP) */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['ui_name'] = 'Ville (CP)';
  $handler->display->display_options['header']['area']['content'] = '<div class="city-cp">
<h3 class="city">[city]</h3>
<span class="cp">[postal_code]</span>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Entête: Nombre de coes */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['ui_name'] = 'Nombre de coes';
  $handler->display->display_options['header']['result']['content'] = '<p class="coes-number">@total co-entrepreneurs</p>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Utilisateur : Profil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Utilisateur : Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Champ: Utilisateur : Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['name']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h4';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Champ: Getlocations Fields : Ville */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  /* Champ: Getlocations Fields : Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['label'] = '';
  $handler->display->display_options['fields']['postal_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['postal_code']['element_label_colon'] = FALSE;
  /* Champ: Profil : Statut de publication */
  $handler->display->display_options['fields']['field_coe_pub_status']['id'] = 'field_coe_pub_status';
  $handler->display->display_options['fields']['field_coe_pub_status']['table'] = 'field_data_field_coe_pub_status';
  $handler->display->display_options['fields']['field_coe_pub_status']['field'] = 'field_coe_pub_status';
  $handler->display->display_options['fields']['field_coe_pub_status']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_coe_pub_status']['label'] = '';
  $handler->display->display_options['fields']['field_coe_pub_status']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_coe_pub_status']['alter']['text'] = '[field_coe_pub_status-value]';
  $handler->display->display_options['fields']['field_coe_pub_status']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_coe_pub_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coe_pub_status']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Utilisateur : Nom */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Utilisateur : Active status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Getlocations Fields : Glid */
  $handler->display->display_options['filters']['glid']['id'] = 'glid';
  $handler->display->display_options['filters']['glid']['table'] = 'getlocations_fields';
  $handler->display->display_options['filters']['glid']['field'] = 'glid';
  $handler->display->display_options['filters']['glid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['glid']['group'] = 1;
  /* Critère de filtrage: Getlocations Fields : Latitude */
  $handler->display->display_options['filters']['latitude']['id'] = 'latitude';
  $handler->display->display_options['filters']['latitude']['table'] = 'getlocations_fields';
  $handler->display->display_options['filters']['latitude']['field'] = 'latitude';
  $handler->display->display_options['filters']['latitude']['operator'] = '!=';
  $handler->display->display_options['filters']['latitude']['value']['value'] = '0';
  $handler->display->display_options['filters']['latitude']['group'] = 1;
  /* Critère de filtrage: Getlocations Fields : Longitude */
  $handler->display->display_options['filters']['longitude']['id'] = 'longitude';
  $handler->display->display_options['filters']['longitude']['table'] = 'getlocations_fields';
  $handler->display->display_options['filters']['longitude']['field'] = 'longitude';
  $handler->display->display_options['filters']['longitude']['operator'] = '!=';
  $handler->display->display_options['filters']['longitude']['value']['value'] = '0';
  $handler->display->display_options['filters']['longitude']['group'] = 1;
  /* Critère de filtrage: Utilisateur : Rôles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    103860121 => '103860121',
  );
  /* Critère de filtrage: Profil : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'profile';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coe_page' => 'coe_page',
  );

  /* Display: Backup coes d'un point géo */
  $handler = $view->new_display('block', 'Backup coes d\'un point géo', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Ville (CP) */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['ui_name'] = 'Ville (CP)';
  $handler->display->display_options['header']['area']['content'] = '<span class="city">[city]</span> <span class="cp">([postal_code])</span>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Entête: Nombre de coes */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['ui_name'] = 'Nombre de coes';
  $handler->display->display_options['header']['result']['content'] = '@total co-entrepreneur(s)';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Utilisateur : Profil */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  /* Relation: Entity Reference : Entité référante */
  $handler->display->display_options['relationships']['reverse_field_brand_coe_field_collection_item']['id'] = 'reverse_field_brand_coe_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_brand_coe_field_collection_item']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_brand_coe_field_collection_item']['field'] = 'reverse_field_brand_coe_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_brand_coe_field_collection_item']['label'] = 'Élément Field collection référençant Utilisateur depuis field_brand_coe';
  /* Relation: Field collection item : Entity with the Co-entrepreneurs (field_brand_coes) */
  $handler->display->display_options['relationships']['field_brand_coes_node']['id'] = 'field_brand_coes_node';
  $handler->display->display_options['relationships']['field_brand_coes_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_brand_coes_node']['field'] = 'field_brand_coes_node';
  $handler->display->display_options['relationships']['field_brand_coes_node']['relationship'] = 'reverse_field_brand_coe_field_collection_item';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Utilisateur : Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Champ: Utilisateur : Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['name']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = '0';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Champ: Nid marque */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_brand_coes_node';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Nid marque';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Champ: Marque */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_brand_coes_node';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Marque';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Contenu : Domaine d'intervention */
  $handler->display->display_options['fields']['field_business_sector']['id'] = 'field_business_sector';
  $handler->display->display_options['fields']['field_business_sector']['table'] = 'field_data_field_business_sector';
  $handler->display->display_options['fields']['field_business_sector']['field'] = 'field_business_sector';
  $handler->display->display_options['fields']['field_business_sector']['relationship'] = 'field_brand_coes_node';
  $handler->display->display_options['fields']['field_business_sector']['label'] = '';
  $handler->display->display_options['fields']['field_business_sector']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_business_sector']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_business_sector']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_business_sector']['delta_offset'] = '0';
  /* Champ: Getlocations Fields : Ville */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  /* Champ: Getlocations Fields : Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['label'] = '';
  $handler->display->display_options['fields']['postal_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['postal_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Utilisateur : Nom */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Utilisateur : Active status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Profil : Statut de publication (field_coe_pub_status) */
  $handler->display->display_options['filters']['field_coe_pub_status_value']['id'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['table'] = 'field_data_field_coe_pub_status';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['field'] = 'field_coe_pub_status_value';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_coe_pub_status_value']['value'] = array(
    1 => '1',
  );
  /* Critère de filtrage: Getlocations Fields : Glid */
  $handler->display->display_options['filters']['glid']['id'] = 'glid';
  $handler->display->display_options['filters']['glid']['table'] = 'getlocations_fields';
  $handler->display->display_options['filters']['glid']['field'] = 'glid';
  $handler->display->display_options['filters']['glid']['operator'] = 'not empty';
  /* Critère de filtrage: Getlocations Fields : Latitude */
  $handler->display->display_options['filters']['latitude']['id'] = 'latitude';
  $handler->display->display_options['filters']['latitude']['table'] = 'getlocations_fields';
  $handler->display->display_options['filters']['latitude']['field'] = 'latitude';
  $handler->display->display_options['filters']['latitude']['operator'] = '!=';
  $handler->display->display_options['filters']['latitude']['value']['value'] = '0';
  /* Critère de filtrage: Getlocations Fields : Longitude */
  $handler->display->display_options['filters']['longitude']['id'] = 'longitude';
  $handler->display->display_options['filters']['longitude']['table'] = 'getlocations_fields';
  $handler->display->display_options['filters']['longitude']['field'] = 'longitude';
  $handler->display->display_options['filters']['longitude']['operator'] = '!=';
  $handler->display->display_options['filters']['longitude']['value']['value'] = '0';
  /* Critère de filtrage: Contenu : Published status */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_brand_coes_node';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $translatables['users_geolocation'] = array(
    t('Master'),
    t('Carte des co-entrepreneurs'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Profil'),
    t('Glid'),
    t('Carte coes'),
    t('Localisation des co-entrepreneurs'),
    t('Coes d\'un point géo'),
    t('<div class="city-cp">
<h3 class="city">[city]</h3>
<span class="cp">[postal_code]</span>
</div>'),
    t('<p class="coes-number">@total co-entrepreneurs</p>'),
    t('[field_coe_pub_status-value]'),
    t('Backup coes d\'un point géo'),
    t('<span class="city">[city]</span> <span class="cp">([postal_code])</span>'),
    t('@total co-entrepreneur(s)'),
    t('Élément Field collection référençant Utilisateur depuis field_brand_coe'),
    t('field_brand_coes'),
  );
  $export['users_geolocation'] = $view;

  return $export;
}
