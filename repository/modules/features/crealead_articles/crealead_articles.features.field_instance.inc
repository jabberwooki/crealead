<?php
/**
 * @file
 * crealead_articles.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function crealead_articles_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-article-body'.
  $field_instances['node-article-body'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
          'trim_length' => 400,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 2,
      ),
      'brand_articles' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'landing_page_block' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
          'trim_length' => 150,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 1,
      ),
      'sector_brand_block' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
          'trim_length' => 200,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
          'trim_length' => 300,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Corps',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'context' => 'debug',
      'context_default' => 'sdl_editor_representation',
      'display_summary' => 1,
      'dnd_enabled' => 1,
      'linkit' => array(
        'button_text' => 'Rechercher',
        'enable' => 0,
        'profile' => '',
      ),
      'mee_enabled' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-article-field_article_kind'.
  $field_instances['node-article-field_article_kind'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'brand_articles' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'landing_page_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'sector_brand_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_article_kind',
    'label' => 'Nature de l\'article',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-article-field_article_related_brands'.
  $field_instances['node-article-field_article_related_brands'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'brand_articles' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_formatter_class' => '',
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'field_formatter_class' => '',
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 16,
      ),
      'landing_page_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'sector_brand_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_article_related_brands',
    'label' => 'Marque(s) concernée(s)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-article-field_image'.
  $field_instances['node-article-field_image'] = array(
    'bundle' => 'article',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_formatter_class' => '',
          'image_link' => 'content',
          'image_style' => 'image_temoignage_accueil',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'brand_articles' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_formatter_class' => '',
          'image_link' => 'content',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'field_formatter_class' => '',
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_formatter_class' => '',
          'image_link' => '',
          'image_style' => 'large_bandeau',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'landing_page_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'sector_brand_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_formatter_class' => '',
          'image_link' => 'content',
          'image_style' => 'carre_large',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '540x256',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 0,
            'reference' => 0,
            'remote' => 0,
            'scald' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
            'search_all_fields' => 0,
          ),
        ),
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(
          'carre_large' => 'carre_large',
          'image_temoignage_accueil' => 'image_temoignage_accueil',
          'large_bandeau' => 'large_bandeau',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 1,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-article-field_landing_pages'.
  $field_instances['node-article-field_landing_pages'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Les "thématiques concernées" permettent de mettre en valeur sur le site web de Crealead des articles spécifiques à ces dîtes thématiques. Merci de cocher une thématique que si c\'est un sujet important de votre article.',
    'display' => array(
      'block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'brand_articles' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 4,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'landing_page_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'sector_brand_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_landing_pages',
    'label' => 'Thématique(s) concernée(s)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-article-field_related_sector_brands'.
  $field_instances['node-article-field_related_sector_brands'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'brand_articles' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'landing_page_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'sector_brand_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_related_sector_brands',
    'label' => 'Marque(s) sectorielle(s) concernée(s)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Corps');
  t('Image');
  t('Les "thématiques concernées" permettent de mettre en valeur sur le site web de Crealead des articles spécifiques à ces dîtes thématiques. Merci de cocher une thématique que si c\'est un sujet important de votre article.');
  t('Marque(s) concernée(s)');
  t('Marque(s) sectorielle(s) concernée(s)');
  t('Nature de l\'article');
  t('Thématique(s) concernée(s)');

  return $field_instances;
}
