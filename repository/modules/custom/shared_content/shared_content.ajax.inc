<?php
/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 14/03/18
 * Time: 15:01
 */

function crealead_alter_shared_content_status($type='ajax') {
  if ($type == 'ajax') {
    $content_type = arg(1);
    $new_status = arg(2);
    $node_nid = arg(3);
    $brand_nid = arg(4);

    // We update the shared content status.
    db_update('crealead_shared_content')
      ->fields(array('status' => $new_status))
      ->condition('nid', $node_nid)
      ->condition('brand_id', $brand_nid)
      ->execute();

    $commands = array();

    // Then we get a fresh list of shared content.
    $output = _get_shared_content($content_type, $brand_nid);
    $commands[] = ajax_command_replace('#shared-content-wrapper', $output);

    // Then, we get the view block content
    // in order to replace its content by the updated content
    switch ($content_type) {
      case 'article':
        $view_content = views_embed_view('articles','allowed_articles', $brand_nid);
        if (!strpos($view_content, '<div class="view-content">')) {
          $view_content = '';
        }
        $view_output = '<div id="allowed-articles-wrapper">';
        $view_output .= $view_content;
        $view_output .= '</div>';

        $commands[] = ajax_command_replace('#allowed-articles-wrapper', $view_output);
        break;

      case 'news':

        break;

      case 'training':
        $view_content = views_embed_view('trainings','allowed_trainings', $brand_nid);
        if (!strpos($view_content, '<div class="view-content')) {
          $view_content = '';
        }
        $view_output = '<div id="allowed-trainings-wrapper">';
        $view_output .= $view_content;
        $view_output .= '</div>';

        $commands[] = ajax_command_replace('#allowed-trainings-wrapper', $view_output);
        break;
    }

    $page = array('#type' => 'ajax', '#commands' => $commands);
    ajax_deliver($page);
  }
  else {
    $output = 'Contenu non ajax. Javascript est désactivé';
    return $output;
  }
}
