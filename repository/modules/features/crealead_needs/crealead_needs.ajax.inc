<?php
/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 15/06/17
 * Time: 18:07
 */

// Ajax callback functions

function crealead_needs_add_coe($type='ajax') {
  if ($type == 'ajax') {
    // Currently connected user who wants to add themselves to the need.
    global $user;
    // Need nid catched from the ajax requested url.
    $need_id = arg(1);

    // First, we load the need and we add user to it.
    $need_wrapper = entity_metadata_wrapper('node', $need_id);
    $need_wrapper->field_other_enquirers[] = $user;
    $need_wrapper->save();

    // Then, we get the needs_list view block content
    // in order to replace view content by the updated view content
    $output = views_embed_view('needs','needs_list');

    // Finally, we prepare the ajax response and deliver it.
    $commands = array();
    $commands[] = ajax_command_replace('#view-needs-list-wrapper', $output);
    $page = array('#type' => 'ajax', '#commands' => $commands);
    ajax_deliver($page);
  }
  else {
    $output = 'Contenu non ajax. Javascript est désactivé';
    return $output;
  }
}

function crealead_needs_remove_coe($type='ajax', $need_nid) {
  if ($type == 'ajax') {
    // Currently connected user who wants to add themselves to the need.
    global $user;
    // Need nid catched from the ajax requested url.
    $need_id = arg(1);

    // First, we load the need and we remove user from it.
    $need_wrapper = entity_metadata_wrapper('node', $need_id);
    foreach ($need_wrapper->field_other_enquirers->value() as $key=>$coe) {
      if ($coe->uid == $user->uid) {
        unset($need_wrapper->field_other_enquirers[$key]);
        break;
      }
    }
    $need_wrapper->save();

    // Then, we get the needs_list view block content
    // in order to replace view content by the updated view content
    $output = views_embed_view('needs','needs_list');

    $commands = array();
    $commands[] = ajax_command_replace('#view-needs-list-wrapper', $output);
    $page = array('#type' => 'ajax', '#commands' => $commands);
    ajax_deliver($page);
  }
  else {
    $output = 'Contenu non ajax. Javascript est désactivé';
    return $output;
  }
}

function crealead_needs_add_coe_from_node($type='ajax') {
  if ($type == 'ajax') {
    // Currently connected user who wants to add themselves to the need.
    global $user;
    // Need nid catched from the ajax requested url.
    $need_id = arg(1);

    // First, we load the need and we add user to it.
    $need_wrapper = entity_metadata_wrapper('node', $need_id);
    $need_wrapper->field_other_enquirers[] = $user;
    $need_wrapper->save();

    // Then, we get the needs_list view block content
    // in order to replace view content by the updated view content
    $need = node_load($need_id);
    $output = drupal_render(node_view($need));

    // Finally, we prepare the ajax response and deliver it.
    $commands = array();
    $commands[] = ajax_command_replace('#node-need-full-wrapper', $output);
    $page = array('#type' => 'ajax', '#commands' => $commands);
    ajax_deliver($page);
  }
  else {
    $output = 'Contenu non ajax. Javascript est désactivé';
    return $output;
  }
}

function crealead_needs_remove_coe_from_node($type='ajax', $need_nid) {
  if ($type == 'ajax') {
    // Currently connected user who wants to add themselves to the need.
    global $user;
    // Need nid catched from the ajax requested url.
    $need_id = arg(1);

    // First, we load the need and we remove user from it.
    $need_wrapper = entity_metadata_wrapper('node', $need_id);
    foreach ($need_wrapper->field_other_enquirers->value() as $key=>$coe) {
      if ($coe->uid == $user->uid) {
        unset($need_wrapper->field_other_enquirers[$key]);
        break;
      }
    }
    $need_wrapper->save();

    // Then, we get the needs_list view block content
    // in order to replace view content by the updated view content
    $need = node_load($need_id);
    $output = drupal_render(node_view($need));

    $commands = array();
    $commands[] = ajax_command_replace('#node-need-full-wrapper', $output);
    $page = array('#type' => 'ajax', '#commands' => $commands);
    ajax_deliver($page);
  }
  else {
    $output = 'Contenu non ajax. Javascript est désactivé';
    return $output;
  }
}