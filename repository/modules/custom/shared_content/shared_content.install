<?php
/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 21/03/18
 * Time: 16:52
 */

/**
 * Implements hook_schema().
 */
function shared_content_schema() {
  $schema['crealead_shared_content'] = array(
    'description' => 'Stores info about content shared by brands.',
    'fields' => array(
      'nid' => array(
        'description' => 'Nid of the shared content',
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE
      ),
      'type' => array(
        'type' => 'varchar',
        'length' => 32,
        'not null' => TRUE,
        'default' => ''
      ),
      'brand_id' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE
      ),
      'status' => array(
        'description' => 'Boolean indicating whether the shared content is published by recipient brand.',
        'type' => 'int',
        'not null' => TRUE,
        'default' => 1,
      ),
    ),
  );
  return $schema;
}
