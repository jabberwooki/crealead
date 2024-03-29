<?php

/**
 * @file
 * crealead_brands.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crealead_brands_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "taxonomy_display" && $api == "taxonomy_display") {
    return array("version" => "1");
  }
  if ($module == "video_embed_field" && $api == "default_video_embed_styles") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function crealead_brands_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function crealead_brands_default_entityform_type() {
  $items = array();
  $items['contact'] = entity_import('entityform_type', '{
    "type" : "contact",
    "label" : "Contact",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "Envoyer",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "Envoi du formulaire de contact ",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EVotre demande a bien \\u00e9t\\u00e9 envoy\\u00e9e.\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "1" : "1",
        "2" : "2",
        "14479344" : 0,
        "103860121" : 0,
        "191976793" : 0,
        "7178059" : 0,
        "31497918" : 0,
        "231346920" : 0,
        "193262079" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "[current-page:url]",
      "instruction_pre" : { "value" : "", "format" : "full_html" }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  $items['pole_coes_contact'] = entity_import('entityform_type', '{
    "type" : "pole_coes_contact",
    "label" : "Envoi d\\u0027un message aux co-entrepreneurs du p\\u00f4le",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "Envoyer",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "Envoi d\\u0027un courriel aux co-entrepreneurs",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EVotre message a bien \\u00e9t\\u00e9 envoy\\u00e9.\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "36071687" : "36071687",
        "231346920" : "231346920",
        "193262079" : "193262079",
        "1" : 0,
        "2" : 0,
        "14479344" : 0,
        "199363405" : 0,
        "103860121" : 0,
        "227964678" : 0,
        "157083709" : 0,
        "7178059" : 0,
        "259028912" : 0,
        "157297110" : 0,
        "191976793" : 0,
        "8998634" : 0,
        "31497918" : 0,
        "65237971" : 0,
        "58920180" : 0,
        "155486910" : 0,
        "1936756" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "[current-page:url]",
      "instruction_pre" : { "value" : "", "format" : "full_html" }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  $items['pole_contact'] = entity_import('entityform_type', '{
    "type" : "pole_contact",
    "label" : "Contact p\\u00f4le",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "Envoyer",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "Envoi du formulaire de contact ",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EVotre demande a bien \\u00e9t\\u00e9 envoy\\u00e9e.\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "1" : "1",
        "2" : "2",
        "14479344" : 0,
        "199363405" : 0,
        "103860121" : 0,
        "227964678" : 0,
        "157083709" : 0,
        "7178059" : 0,
        "259028912" : 0,
        "157297110" : 0,
        "191976793" : 0,
        "8998634" : 0,
        "31497918" : 0,
        "65237971" : 0,
        "58920180" : 0,
        "155486910" : 0,
        "1936756" : 0,
        "36071687" : 0,
        "231346920" : 0,
        "193262079" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "[current-page:url]",
      "instruction_pre" : { "value" : "", "format" : "full_html" }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  return $items;
}

/**
 * Implements hook_image_default_styles().
 */
function crealead_brands_image_default_styles() {
  $styles = array();

  // Exported image style: achievements_280x210.
  $styles['achievements_280x210'] = array(
    'label' => 'Réalisations (280x210)',
    'effects' => array(
      23 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 280,
          'height' => 210,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: brand_logo.
  $styles['brand_logo'] = array(
    'label' => 'Logo',
    'effects' => array(
      22 => array(
        'name' => 'canvasactions_aspect',
        'data' => array(
          'portrait' => 'height_150',
          'landscape' => 'width_260',
          'ratio_adjustment' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: certif_label_logo.
  $styles['certif_label_logo'] = array(
    'label' => 'Logo certif/label',
    'effects' => array(
      28 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 50,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: height_150.
  $styles['height_150'] = array(
    'label' => 'Hauteur 150',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 150,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: realisation.
  $styles['realisation'] = array(
    'label' => 'realisation (540/400)',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 540,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thumbnail_50x50.
  $styles['thumbnail_50x50'] = array(
    'label' => 'Thumbnail (50x50)',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 50,
          'height' => 50,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: width_260.
  $styles['width_260'] = array(
    'label' => 'Largeur 260',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 260,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function crealead_brands_node_info() {
  $items = array(
    'achievement' => array(
      'name' => t('Réalisation'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Intitulé'),
      'help' => '',
    ),
    'brand' => array(
      'name' => t('Marque'),
      'base' => 'node_content',
      'description' => t('Marque commerciale d\'un entrepreneur ou d\'un groupe d\'entrepreneurs.'),
      'has_title' => '1',
      'title_label' => t('Nom de marque'),
      'help' => '',
    ),
    'client' => array(
      'name' => t('Client'),
      'base' => 'node_content',
      'description' => t('Une référence client.'),
      'has_title' => '1',
      'title_label' => t('Nom du client'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
