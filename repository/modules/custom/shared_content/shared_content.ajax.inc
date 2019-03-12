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

    // Then, for each content type :
    // 1) we get a fresh list of shared content
    // 2) we get the view block content in order to replace its content by the updated content
    $output = _get_shared_content($content_type, $brand_nid);

    // Then, we get the view block content
    // in order to replace its content by the updated content
    switch ($content_type) {
      case 'article':
        // 1) shared content update
        $commands[] = ajax_command_replace('.field-name-allowed-articles-handling #shared-content-wrapper', $output);

        // 2) view block update
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
        // 1) shared content update
        $commands[] = ajax_command_replace('.field-name-allowed-trainings-handling #shared-content-wrapper', $output);

        // 2) view block update
        $view_content = views_embed_view('trainings','allowed_trainings', $brand_nid);
        if (!strpos($view_content, '<div class="view-content')) {
          $view_content = '';
        }
        $view_output = '<div id="allowed-trainings-wrapper">';
        $view_output .= $view_content;
        $view_output .= '</div>';

        $commands[] = ajax_command_replace('#allowed-trainings-wrapper', $view_output);
        break;

      case 'product':
        // 1) shared content update
        $commands[] = ajax_command_replace('.field-name-allowed-products-handling #shared-content-wrapper', $output);

        // 2) view block update
        $view_content = views_embed_view('products','allowed_products', $brand_nid);
        if (!strpos($view_content, '<div class="view-content')) {
          $view_content = '';
        }
        $view_output = '<div id="allowed-products-wrapper">';
        $view_output .= $view_content;
        $view_output .= '</div>';

        $commands[] = ajax_command_replace('#allowed-products-wrapper', $view_output);
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
