<?php
/**
 * @file
 * localgov_content_promo.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function localgov_content_promo_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-promo-body'.
  $field_instances['node-promo-body'] = array(
    'bundle' => 'promo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'TODO: Add help text.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-promo-field_contactinfo'.
  $field_instances['node-promo-field_contactinfo'] = array(
    'bundle' => 'promo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select contact information to display on this page.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 95,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contactinfo',
    'is_property' => 0,
    'label' => 'Contact Information',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 95,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-promo-field_contactinfo_style'.
  $field_instances['node-promo-field_contactinfo_style'] = array(
    'bundle' => 'promo',
    'default_value' => array(
      0 => array(
        'value' => 'mini',
      ),
    ),
    'deleted' => 0,
    'description' => 'TODO: Add help text',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 96,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 96,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contactinfo_style',
    'is_property' => 0,
    'label' => 'Contact Information Style',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 96,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-promo-field_image'.
  $field_instances['node-promo-field_image'] = array(
    'bundle' => 'promo',
    'deleted' => 0,
    'description' => 'TODO: Add help text.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'is_property' => 0,
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'images/news',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 0,
          's3' => 's3',
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'localgov_document' => 0,
          'localgov_image' => 'localgov_image',
          'localgov_image_header' => 0,
          'localgov_video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-promo-field_related'.
  $field_instances['node-promo-field_related'] = array(
    'bundle' => 'promo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'TODO: Add help text.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 97,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 97,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related',
    'is_property' => 0,
    'label' => 'Related Links',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => '',
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'rel_remove_internal',
      'title' => 'required',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'advanced_link',
      'settings' => array(
        'default_titles' => '',
        'urls_allowed' => 'both',
        'urls_filter' => '',
        'urls_search' => 'start',
      ),
      'type' => 'advanced_link',
      'weight' => 10,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-promo-field_tags'.
  $field_instances['node-promo-field_tags'] = array(
    'bundle' => 'promo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'TODO: Add help text.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'hidden',
        'weight' => 90,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 90,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tags',
    'label' => 'Tags',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-promo-field_video'.
  $field_instances['node-promo-field_video'] = array(
    'bundle' => 'promo',
    'deleted' => 0,
    'description' => 'TODO: Add help text.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'autoplay' => 0,
          'controls' => 1,
          'height' => '',
          'loop' => 0,
          'multiple_file_behavior' => 'tags',
          'muted' => 0,
          'preload' => '',
          'width' => '',
        ),
        'type' => 'file_video',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_video',
    'is_property' => 0,
    'label' => 'Video',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'videos',
      'file_extensions' => 'avi mp4',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 0,
          's3' => 's3',
          'youtube' => 'youtube',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 0,
          'localgov_document' => 0,
          'localgov_image' => 0,
          'localgov_image_easyread' => 0,
          'localgov_image_header' => 0,
          'localgov_video' => 'localgov_video',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 'media_internet',
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Contact Information');
  t('Contact Information Style');
  t('Image');
  t('Related Links');
  t('Select contact information to display on this page.');
  t('TODO: Add help text');
  t('TODO: Add help text.');
  t('Tags');
  t('Video');

  return $field_instances;
}