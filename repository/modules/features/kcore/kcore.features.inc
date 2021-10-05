<?php

/**
 * @file
 * kcore.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kcore_ctools_plugin_api($module = NULL, $api = NULL) {
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
}

/**
 * Implements hook_views_api().
 */
function kcore_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function kcore_default_entityform_type() {
  $items = array();
  $items['site_contact'] = entity_import('entityform_type', '{
    "type" : "site_contact",
    "label" : "Nous contacter",
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
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "full_html" },
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
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003EPour tout renseignement sur l\\u0027adh\\u00e9sion \\u00e0 la coop\\u00e9rative, vous pouvez vous inscrire \\u00e0 une \\u003Ca href=\\u0022\\/reunions-information\\u0022\\u003Er\\u00e9union d\\u0027information\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EPour tout autre demande, vous pouvez utiliser le formulaire ci-dessous.\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/site-contact",
        "alias" : "page-contact",
        "language" : "und"
      }
    }
  }');
  return $items;
}

/**
 * Implements hook_features_date_format_default().
 */
function kcore_features_date_format_default() {
  $fdf_config = array();

  $fdf_config[] = array(
    'dfid' => 36,
    'format' => 'l d F Y - H\\hi',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 37,
    'format' => 'l d F Y',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 38,
    'format' => 'D d F Y',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 39,
    'format' => 'd F Y',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 40,
    'format' => 'd/m/Y -H\\hi',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 41,
    'format' => 'd/m/Y',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 42,
    'format' => 'd/m/y -H\\hi',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 43,
    'format' => 'd/m/y',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 44,
    'format' => 'd F Y - H\\hi',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 45,
    'format' => 'D d F Y - H\\hi',
    'type' => 'custom',
    'locked' => 0,
  );
  return $fdf_config;
}

/**
 * Implements hook_image_default_styles().
 */
function kcore_image_default_styles() {
  $styles = array();

  // Exported image style: 400x400.
  $styles['400x400'] = array(
    'label' => '400x400',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 400,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 400,
          'height' => 400,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: carre_large.
  $styles['carre_large'] = array(
    'label' => 'carré large (480x480)',
    'effects' => array(
      4 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 480,
          'height' => 480,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'carre_large',
        ),
        'weight' => 0,
      ),
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 480,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
