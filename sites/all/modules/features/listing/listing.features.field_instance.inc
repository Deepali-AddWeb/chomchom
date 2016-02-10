<?php
/**
 * @file
 * listing.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function listing_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-listing-body'.
  $field_instances['node-listing-body'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-listing-field_alternative_phone'.
  $field_instances['node-listing-field_alternative_phone'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_alternative_phone',
    'label' => 'Alternative Phone',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-listing-field_ban'.
  $field_instances['node-listing-field_ban'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ban',
    'label' => '# Bàn',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'available_options' => '2|Contact Salon Owner',
        'available_options_php' => '',
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Điền Vào',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other_buttons',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'node-listing-field_can_license'.
  $field_instances['node-listing-field_can_license'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_can_license',
    'label' => 'Cần License',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-listing-field_can_tho'.
  $field_instances['node-listing-field_can_tho'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_can_tho',
    'label' => 'Cần Thợ',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-listing-field_category'.
  $field_instances['node-listing-field_category'] = array(
    'bundle' => 'listing',
    'default_value' => array(
      0 => array(
        'tid' => 2,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_category',
    'label' => 'Category',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'shs',
      'settings' => array(
        'shs' => array(
          'create_new_levels' => 0,
          'create_new_terms' => 0,
          'force_deepest' => 1,
          'node_count' => 0,
        ),
      ),
      'type' => 'taxonomy_shs',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-listing-field_contact_name'.
  $field_instances['node-listing-field_contact_name'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contact_name',
    'label' => 'Contact Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-listing-field_contact_phone'.
  $field_instances['node-listing-field_contact_phone'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contact_phone',
    'label' => 'Contact Phone',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-listing-field_featured_date'.
  $field_instances['node-listing-field_featured_date'] = array(
    'bundle' => 'listing',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_featured_date',
    'label' => 'Featured Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-listing-field_ghe'.
  $field_instances['node-listing-field_ghe'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ghe',
    'label' => '# Ghế',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-listing-field_how_many_sq_ft'.
  $field_instances['node-listing-field_how_many_sq_ft'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_how_many_sq_ft',
    'label' => 'How Many SQ/FT?',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => 'sq ft',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'available_options' => '1|Contact Us',
        'available_options_php' => '',
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Fill in',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other_buttons',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-listing-field_image'.
  $field_instances['node-listing-field_image'] = array(
    'bundle' => 'listing',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bxslider',
        'settings' => array(
          'auto' => array(
            'auto' => 0,
            'autoDelay' => 0,
            'autoDirection' => 'next',
            'autoHover' => 0,
            'autoStart' => 1,
            'pause' => 4000,
          ),
          'carousel' => array(
            'maxSlides' => 1,
            'minSlides' => 1,
            'moveSlides' => 0,
            'slideWidth' => 0,
          ),
          'colorbox' => array(
            'enable' => FALSE,
            'image_style' => 'large',
            'slideshow' => FALSE,
            'slideshow_speed' => 2000,
            'transition' => 'elastic',
            'transition_speed' => 350,
          ),
          'controls' => array(
            'autoControls' => 0,
            'autoControlsCombine' => 0,
            'autoControlsSelector' => '',
            'controls' => 1,
            'nextSelector' => '',
            'nextText' => 'Next',
            'prevSelector' => '',
            'prevText' => 'Prev',
            'startText' => 'Start',
            'stopText' => 'Stop',
          ),
          'general' => array(
            'adaptiveHeight' => 0,
            'adaptiveHeightSpeed' => 500,
            'captions' => 0,
            'easing' => '',
            'hideControlOnEnd' => 1,
            'infiniteLoop' => 0,
            'mode' => 'horizontal',
            'oneToOneTouch' => 1,
            'preloadImages' => 0,
            'preventDefaultSwipeX' => 1,
            'preventDefaultSwipeY' => 0,
            'randomStart' => 0,
            'responsive' => 1,
            'slideMargin' => 0,
            'speed' => 500,
            'startSlide' => 0,
            'swipeThreshold' => 50,
            'ticker' => 0,
            'tickerHover' => 0,
            'useCSS' => 1,
            'video' => 0,
          ),
          'image_style' => 'large',
          'pager' => array(
            'pager' => FALSE,
          ),
          'thumbnail_slider' => array(
            'auto' => array(
              'auto' => 0,
              'autoDelay' => 0,
              'autoDirection' => 'next',
              'autoHover' => 0,
              'autoStart' => 1,
              'pause' => 4000,
            ),
            'carousel' => array(
              'maxSlides' => 4,
              'minSlides' => 4,
              'moveSlides' => 1,
              'slideWidth' => 0,
            ),
            'controls' => array(
              'autoControls' => 0,
              'autoControlsCombine' => 0,
              'controls' => 1,
              'nextText' => 'Next',
              'prevText' => 'Prev',
              'startText' => 'Start',
              'stopText' => 'Stop',
            ),
            'general' => array(
              'adaptiveHeight' => 0,
              'adaptiveHeightSpeed' => 500,
              'captions' => 0,
              'easing' => '',
              'hideControlOnEnd' => 0,
              'infiniteLoop' => 1,
              'mode' => 'horizontal',
              'oneToOneTouch' => 1,
              'preloadImages' => 0,
              'preventDefaultSwipeX' => 1,
              'preventDefaultSwipeY' => 0,
              'randomStart' => 0,
              'responsive' => 1,
              'slideMargin' => 0,
              'speed' => 500,
              'startSlide' => 0,
              'swipeThreshold' => 50,
              'ticker' => 0,
              'tickerHover' => 0,
              'useCSS' => 1,
            ),
            'pager' => array(
              'pager' => '',
            ),
            'thumbnail_style' => 'thumbnail',
          ),
        ),
        'type' => 'bxslider_ths',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-listing-field_khu_vuc'.
  $field_instances['node-listing-field_khu_vuc'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_khu_vuc',
    'label' => 'Khu Vực',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-listing-field_khu_vuc_sang_tiem_nails'.
  $field_instances['node-listing-field_khu_vuc_sang_tiem_nails'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_khu_vuc_sang_tiem_nails',
    'label' => 'Khu Vực',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-listing-field_kinh_nghiem'.
  $field_instances['node-listing-field_kinh_nghiem'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_kinh_nghiem',
    'label' => 'Kinh Nghiệm',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'available_options' => '1|Tất Cả
2|Gel
3|Eyelashes
4|Facial
5|Làm Bột
6|Tay Chân Nước 
7|Sẽ Đào Tạo
8|Wax',
        'available_options_php' => '',
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Điền Vào ',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other_buttons',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-listing-field_kinh_nghiem_toc'.
  $field_instances['node-listing-field_kinh_nghiem_toc'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_kinh_nghiem_toc',
    'label' => 'Kinh Nghiệm',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'available_options' => '1|Tất Cả
2|Cut
3|Color
4|Perm',
        'available_options_php' => '',
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Điền Vào',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other_buttons',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-listing-field_monthly_income_'.
  $field_instances['node-listing-field_monthly_income_'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_monthly_income_',
    'label' => 'Monthly Income?',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'available_options' => '0.00|Contact Us',
        'available_options_php' => '',
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Fill in',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other_buttons',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-listing-field_monthly_rent'.
  $field_instances['node-listing-field_monthly_rent'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_monthly_rent',
    'label' => 'Monthly Rent?',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'available_options' => '0.00|Contact Us',
        'available_options_php' => '',
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Fill in',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other_buttons',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-listing-field_monthly_rent_sang_tiem'.
  $field_instances['node-listing-field_monthly_rent_sang_tiem'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_monthly_rent_sang_tiem',
    'label' => 'Monthly Rent',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'available_options' => '0.00|Contact Salon Owner',
        'available_options_php' => '',
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Điền Vào',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other_buttons',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-listing-field_phong_facial'.
  $field_instances['node-listing-field_phong_facial'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_phong_facial',
    'label' => 'Phòng Facial? ',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-listing-field_phong_massage'.
  $field_instances['node-listing-field_phong_massage'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_phong_massage',
    'label' => 'Phòng Massage?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-listing-field_phong_tan'.
  $field_instances['node-listing-field_phong_tan'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_phong_tan',
    'label' => 'Phòng Tan?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-listing-field_phong_wax'.
  $field_instances['node-listing-field_phong_wax'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_phong_wax',
    'label' => 'Phòng Wax? ',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'node-listing-field_price_gia_ban_'.
  $field_instances['node-listing-field_price_gia_ban_'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_price_gia_ban_',
    'label' => 'Price $/Giá Bán?',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'available_options' => '0.00|Contact Salon Owner',
        'available_options_php' => '',
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Điền Vào',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other_buttons',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-listing-field_sale_price'.
  $field_instances['node-listing-field_sale_price'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
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
    'entity_type' => 'node',
    'field_name' => 'field_sale_price',
    'label' => 'Sale Price?',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'available_options' => '0.00|Contact Us',
        'available_options_php' => '',
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Fill in',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other_buttons',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-listing-field_tho'.
  $field_instances['node-listing-field_tho'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tho',
    'label' => '# Thợ',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'available_options' => '2|Contact Salon Owner',
        'available_options_php' => '',
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Điền Vào',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other_buttons',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'node-listing-field_tho_lam'.
  $field_instances['node-listing-field_tho_lam'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tho_lam',
    'label' => 'Thợ Làm',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-listing-field_tiem_sq_ft'.
  $field_instances['node-listing-field_tiem_sq_ft'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tiem_sq_ft',
    'label' => 'Tiem SQ/FT',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => 'sq ft',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'available_options' => '2|Contact Salon Owner',
        'available_options_php' => '',
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Điền Vào',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other_buttons',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-listing-field_tien_luong'.
  $field_instances['node-listing-field_tien_luong'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tien_luong',
    'label' => 'Tiền Lương',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'available_options' => '3|Thương Lượng
4|Bao Lương',
        'available_options_php' => '',
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Điền Vào',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other_buttons',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-listing-field_trong_khu_shopping_center'.
  $field_instances['node-listing-field_trong_khu_shopping_center'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_trong_khu_shopping_center',
    'label' => 'Trong Khu Shopping Center',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'available_options' => '2|Yes
3|No
4|Contact Salon Owner',
        'available_options_php' => '',
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Điền Vào',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other_buttons',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-listing-field_type_of_business'.
  $field_instances['node-listing-field_type_of_business'] = array(
    'bundle' => 'listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_type_of_business',
    'label' => 'Type of Business',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 17,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('# Bàn');
  t('# Ghế');
  t('# Thợ');
  t('Alternative Phone');
  t('Body');
  t('Category');
  t('Contact Name');
  t('Contact Phone');
  t('Cần License');
  t('Cần Thợ');
  t('Featured Date');
  t('How Many SQ/FT?');
  t('Image');
  t('Khu Vực');
  t('Kinh Nghiệm');
  t('Monthly Income?');
  t('Monthly Rent');
  t('Monthly Rent?');
  t('Phòng Facial? ');
  t('Phòng Massage?');
  t('Phòng Tan?');
  t('Phòng Wax? ');
  t('Price $/Giá Bán?');
  t('Sale Price?');
  t('Thợ Làm');
  t('Tiem SQ/FT');
  t('Tiền Lương');
  t('Trong Khu Shopping Center');
  t('Type of Business');

  return $field_instances;
}
