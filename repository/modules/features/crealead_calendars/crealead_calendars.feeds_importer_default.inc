<?php
/**
 * @file
 * crealead_calendars.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function crealead_calendars_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'google_rooms_calendar';
  $feeds_importer->config = array(
    'name' => 'Calendrier Salles Google',
    'description' => 'Calendrier d\'occupation des salles Crealead',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
        'cache_http_result' => TRUE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'DateiCalFeedsParser',
      'config' => array(
        'indefinite_count' => '52',
        'indefinite_message_display' => TRUE,
        'until_not_utc' => FALSE,
        'skip_days' => NULL,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'DTSTART',
            'target' => 'field_gclal_date:start',
            'timezone' => 'Europe/Paris',
          ),
          1 => array(
            'source' => 'DTEND',
            'target' => 'field_gclal_date:end',
            'timezone' => 'Europe/Paris',
          ),
          2 => array(
            'source' => 'SUMMARY',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'DESCRIPTION',
            'target' => 'field_gcal_description',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'UID',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'LOCATION',
            'target' => 'field_gcal_location',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'delete',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'room_event',
        'language' => 'fr',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '3600',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['google_rooms_calendar'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'google_structure_calendar';
  $feeds_importer->config = array(
    'name' => 'Calendrier Structure Google',
    'description' => 'Calendrier des évenement Crealead Structure',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '',
        'auto_scheme' => 'http',
        'accept_invalid_cert' => 0,
        'cache_http_result' => 1,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'DateiCalFeedsParser',
      'config' => array(
        'indefinite_count' => '52',
        'indefinite_message_display' => TRUE,
        'until_not_utc' => FALSE,
        'skip_days' => NULL,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'DTSTART',
            'target' => 'field_gclal_date:start',
            'timezone' => 'Europe/Paris',
            'language' => 'und',
          ),
          1 => array(
            'source' => 'DTEND',
            'target' => 'field_gclal_date:end',
            'timezone' => 'Europe/Paris',
            'language' => 'und',
          ),
          2 => array(
            'source' => 'SUMMARY',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'DESCRIPTION',
            'target' => 'field_gcal_description',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'UID',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'LOCATION',
            'target' => 'field_gcal_location',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'delete',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'structure_event',
        'language' => 'fr',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '3600',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['google_structure_calendar'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'rooms_agenda';
  $feeds_importer->config = array(
    'name' => 'Agenda des salles',
    'description' => 'Occupation des salles Crealead',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => 1,
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'titre',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'debut',
            'target' => 'field_gclal_date:start',
            'timezone' => 'Europe/Paris',
            'language' => 'und',
          ),
          2 => array(
            'source' => 'fin',
            'target' => 'field_gclal_date:end',
            'timezone' => 'Europe/Paris',
            'language' => 'und',
          ),
          3 => array(
            'source' => 'salle',
            'target' => 'field_gcal_location',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'delete',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'room_event',
        'language' => 'fr',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '3600',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['rooms_agenda'] = $feeds_importer;

  return $export;
}
