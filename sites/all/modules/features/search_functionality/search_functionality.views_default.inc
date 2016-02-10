<?php
/**
 * @file
 * search_functionality.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function search_functionality_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_category_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_select_all_none_nested' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'province' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'city' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Results found for your state';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listing' => 'listing',
  );
  /* Filter criterion: Content: Category (field_category) */
  $handler->display->display_options['filters']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['value'] = array(
    2 => '2',
    3 => '3',
  );
  $handler->display->display_options['filters']['field_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_category_tid']['expose']['operator_id'] = 'field_category_tid_op';
  $handler->display->display_options['filters']['field_category_tid']['expose']['label'] = 'Category (field_category)';
  $handler->display->display_options['filters']['field_category_tid']['expose']['operator'] = 'field_category_tid_op';
  $handler->display->display_options['filters']['field_category_tid']['expose']['identifier'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_category_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  $handler->display->display_options['filters']['field_category_tid']['hierarchy'] = 1;
  /* Filter criterion: Location: Province */
  $handler->display->display_options['filters']['province']['id'] = 'province';
  $handler->display->display_options['filters']['province']['table'] = 'location';
  $handler->display->display_options['filters']['province']['field'] = 'province';
  $handler->display->display_options['filters']['province']['value'] = 'GA';
  $handler->display->display_options['filters']['province']['exposed'] = TRUE;
  $handler->display->display_options['filters']['province']['expose']['operator_id'] = 'province_op';
  $handler->display->display_options['filters']['province']['expose']['label'] = 'Province';
  $handler->display->display_options['filters']['province']['expose']['operator'] = 'province_op';
  $handler->display->display_options['filters']['province']['expose']['identifier'] = 'province';
  $handler->display->display_options['filters']['province']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['province']['type'] = 'select';
  /* Filter criterion: Location: City */
  $handler->display->display_options['filters']['city']['id'] = 'city';
  $handler->display->display_options['filters']['city']['table'] = 'location';
  $handler->display->display_options['filters']['city']['field'] = 'city';
  $handler->display->display_options['filters']['city']['exposed'] = TRUE;
  $handler->display->display_options['filters']['city']['expose']['operator_id'] = 'city_op';
  $handler->display->display_options['filters']['city']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['city']['expose']['operator'] = 'city_op';
  $handler->display->display_options['filters']['city']['expose']['identifier'] = 'city';
  $handler->display->display_options['filters']['city']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Category (field_category) */
  $handler->display->display_options['filters']['field_category_tid_1']['id'] = 'field_category_tid_1';
  $handler->display->display_options['filters']['field_category_tid_1']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_tid_1']['field'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid_1']['value'] = array(
    1 => '1',
    2 => '2',
    3 => '3',
  );
  $handler->display->display_options['filters']['field_category_tid_1']['vocabulary'] = 'category';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_category_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_select_all_none_nested' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Can Tho all',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'province' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'city' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => 'All Cities',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'save';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  /* Field: Content: Cần Thợ */
  $handler->display->display_options['fields']['field_can_tho']['id'] = 'field_can_tho';
  $handler->display->display_options['fields']['field_can_tho']['table'] = 'field_data_field_can_tho';
  $handler->display->display_options['fields']['field_can_tho']['field'] = 'field_can_tho';
  $handler->display->display_options['fields']['field_can_tho']['hide_empty'] = TRUE;
  /* Field: Content: Thợ Làm */
  $handler->display->display_options['fields']['field_tho_lam']['id'] = 'field_tho_lam';
  $handler->display->display_options['fields']['field_tho_lam']['table'] = 'field_data_field_tho_lam';
  $handler->display->display_options['fields']['field_tho_lam']['field'] = 'field_tho_lam';
  $handler->display->display_options['fields']['field_tho_lam']['hide_empty'] = TRUE;
  /* Field: Content: Kinh Nghiệm */
  $handler->display->display_options['fields']['field_kinh_nghiem']['id'] = 'field_kinh_nghiem';
  $handler->display->display_options['fields']['field_kinh_nghiem']['table'] = 'field_data_field_kinh_nghiem';
  $handler->display->display_options['fields']['field_kinh_nghiem']['field'] = 'field_kinh_nghiem';
  $handler->display->display_options['fields']['field_kinh_nghiem']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_kinh_nghiem']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_kinh_nghiem']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_kinh_nghiem']['delta_offset'] = '0';
  /* Field: Content: Kinh Nghiệm */
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['id'] = 'field_kinh_nghiem_toc';
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['table'] = 'field_data_field_kinh_nghiem_toc';
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['field'] = 'field_kinh_nghiem_toc';
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['delta_offset'] = '0';
  /* Field: Content: Cần License */
  $handler->display->display_options['fields']['field_can_license']['id'] = 'field_can_license';
  $handler->display->display_options['fields']['field_can_license']['table'] = 'field_data_field_can_license';
  $handler->display->display_options['fields']['field_can_license']['field'] = 'field_can_license';
  $handler->display->display_options['fields']['field_can_license']['hide_empty'] = TRUE;
  /* Field: Content: Khu Vực */
  $handler->display->display_options['fields']['field_khu_vuc']['id'] = 'field_khu_vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['table'] = 'field_data_field_khu_vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['field'] = 'field_khu_vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_khu_vuc']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_khu_vuc']['delta_offset'] = '0';
  /* Field: Content: Tiền Lương */
  $handler->display->display_options['fields']['field_tien_luong']['id'] = 'field_tien_luong';
  $handler->display->display_options['fields']['field_tien_luong']['table'] = 'field_data_field_tien_luong';
  $handler->display->display_options['fields']['field_tien_luong']['field'] = 'field_tien_luong';
  $handler->display->display_options['fields']['field_tien_luong']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tien_luong']['type'] = 'select_or_other_formatter';
  /* Field: Content: Contact Name */
  $handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['hide_empty'] = TRUE;
  /* Field: Content: Contact Phone */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['hide_empty'] = TRUE;
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['label'] = '';
  $handler->display->display_options['fields']['province']['exclude'] = TRUE;
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['province']['style'] = 'code';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province_1']['id'] = 'province_1';
  $handler->display->display_options['fields']['province_1']['table'] = 'location';
  $handler->display->display_options['fields']['province_1']['field'] = 'province';
  $handler->display->display_options['fields']['province_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['province_1']['alter']['text'] = '[province_1],[province]';
  $handler->display->display_options['fields']['province_1']['hide_empty'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['group_column'] = 'entity_id';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: COUNT(DISTINCT Content: Image) */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_1']['alter']['text'] = '[field_image_1] Images Avalible';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['separator'] = ', ';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted';
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listing' => 'listing',
  );
  /* Filter criterion: Content: Category (field_category) */
  $handler->display->display_options['filters']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['value'] = array(
    2 => '2',
    3 => '3',
  );
  $handler->display->display_options['filters']['field_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_category_tid']['expose']['operator_id'] = 'field_category_tid_op';
  $handler->display->display_options['filters']['field_category_tid']['expose']['operator'] = 'field_category_tid_op';
  $handler->display->display_options['filters']['field_category_tid']['expose']['identifier'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_category_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  $handler->display->display_options['filters']['field_category_tid']['hierarchy'] = 1;
  /* Filter criterion: Location: Province */
  $handler->display->display_options['filters']['province']['id'] = 'province';
  $handler->display->display_options['filters']['province']['table'] = 'location';
  $handler->display->display_options['filters']['province']['field'] = 'province';
  $handler->display->display_options['filters']['province']['value'] = 'AL';
  $handler->display->display_options['filters']['province']['exposed'] = TRUE;
  $handler->display->display_options['filters']['province']['expose']['operator_id'] = 'province_op';
  $handler->display->display_options['filters']['province']['expose']['operator'] = 'province_op';
  $handler->display->display_options['filters']['province']['expose']['identifier'] = 'province';
  $handler->display->display_options['filters']['province']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['province']['type'] = 'select';
  /* Filter criterion: Location: City */
  $handler->display->display_options['filters']['city']['id'] = 'city';
  $handler->display->display_options['filters']['city']['table'] = 'location';
  $handler->display->display_options['filters']['city']['field'] = 'city';
  $handler->display->display_options['filters']['city']['exposed'] = TRUE;
  $handler->display->display_options['filters']['city']['expose']['operator_id'] = 'city_op';
  $handler->display->display_options['filters']['city']['expose']['operator'] = 'city_op';
  $handler->display->display_options['filters']['city']['expose']['identifier'] = 'city';
  $handler->display->display_options['filters']['city']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Category (field_category) */
  $handler->display->display_options['filters']['field_category_tid_1']['id'] = 'field_category_tid_1';
  $handler->display->display_options['filters']['field_category_tid_1']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_tid_1']['field'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid_1']['value'] = array(
    1 => '1',
    2 => '2',
    3 => '3',
  );
  $handler->display->display_options['filters']['field_category_tid_1']['vocabulary'] = 'category';
  $handler->display->display_options['path'] = 'can-tho-search';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_category_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_select_all_none_nested' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Sang Tiem all',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'province' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'city' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => 'All Cities',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  /* Field: Content: Khu Vực */
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['id'] = 'field_khu_vuc_sang_tiem_nails';
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['table'] = 'field_data_field_khu_vuc_sang_tiem_nails';
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['field'] = 'field_khu_vuc_sang_tiem_nails';
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['delta_offset'] = '0';
  /* Field: Content: # Ghế */
  $handler->display->display_options['fields']['field_ghe']['id'] = 'field_ghe';
  $handler->display->display_options['fields']['field_ghe']['table'] = 'field_data_field_ghe';
  $handler->display->display_options['fields']['field_ghe']['field'] = 'field_ghe';
  $handler->display->display_options['fields']['field_ghe']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_ghe']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Monthly Rent? */
  $handler->display->display_options['fields']['field_monthly_rent']['id'] = 'field_monthly_rent';
  $handler->display->display_options['fields']['field_monthly_rent']['table'] = 'field_data_field_monthly_rent';
  $handler->display->display_options['fields']['field_monthly_rent']['field'] = 'field_monthly_rent';
  $handler->display->display_options['fields']['field_monthly_rent']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_monthly_rent']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_monthly_rent']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_monthly_rent']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Tiem SQ/FT */
  $handler->display->display_options['fields']['field_tiem_sq_ft']['id'] = 'field_tiem_sq_ft';
  $handler->display->display_options['fields']['field_tiem_sq_ft']['table'] = 'field_data_field_tiem_sq_ft';
  $handler->display->display_options['fields']['field_tiem_sq_ft']['field'] = 'field_tiem_sq_ft';
  $handler->display->display_options['fields']['field_tiem_sq_ft']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tiem_sq_ft']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: # Bàn */
  $handler->display->display_options['fields']['field_ban']['id'] = 'field_ban';
  $handler->display->display_options['fields']['field_ban']['table'] = 'field_data_field_ban';
  $handler->display->display_options['fields']['field_ban']['field'] = 'field_ban';
  $handler->display->display_options['fields']['field_ban']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ban']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_ban']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: # Thợ */
  $handler->display->display_options['fields']['field_tho']['id'] = 'field_tho';
  $handler->display->display_options['fields']['field_tho']['table'] = 'field_data_field_tho';
  $handler->display->display_options['fields']['field_tho']['field'] = 'field_tho';
  $handler->display->display_options['fields']['field_tho']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tho']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_tho']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Phòng Wax?  */
  $handler->display->display_options['fields']['field_phong_wax']['id'] = 'field_phong_wax';
  $handler->display->display_options['fields']['field_phong_wax']['table'] = 'field_data_field_phong_wax';
  $handler->display->display_options['fields']['field_phong_wax']['field'] = 'field_phong_wax';
  $handler->display->display_options['fields']['field_phong_wax']['hide_empty'] = TRUE;
  /* Field: Content: Phòng Massage? */
  $handler->display->display_options['fields']['field_phong_massage']['id'] = 'field_phong_massage';
  $handler->display->display_options['fields']['field_phong_massage']['table'] = 'field_data_field_phong_massage';
  $handler->display->display_options['fields']['field_phong_massage']['field'] = 'field_phong_massage';
  $handler->display->display_options['fields']['field_phong_massage']['hide_empty'] = TRUE;
  /* Field: Content: Phòng Facial?  */
  $handler->display->display_options['fields']['field_phong_facial']['id'] = 'field_phong_facial';
  $handler->display->display_options['fields']['field_phong_facial']['table'] = 'field_data_field_phong_facial';
  $handler->display->display_options['fields']['field_phong_facial']['field'] = 'field_phong_facial';
  $handler->display->display_options['fields']['field_phong_facial']['hide_empty'] = TRUE;
  /* Field: Content: Phòng Tan? */
  $handler->display->display_options['fields']['field_phong_tan']['id'] = 'field_phong_tan';
  $handler->display->display_options['fields']['field_phong_tan']['table'] = 'field_data_field_phong_tan';
  $handler->display->display_options['fields']['field_phong_tan']['field'] = 'field_phong_tan';
  $handler->display->display_options['fields']['field_phong_tan']['hide_empty'] = TRUE;
  /* Field: Content: Trong Khu Shopping Center */
  $handler->display->display_options['fields']['field_trong_khu_shopping_center']['id'] = 'field_trong_khu_shopping_center';
  $handler->display->display_options['fields']['field_trong_khu_shopping_center']['table'] = 'field_data_field_trong_khu_shopping_center';
  $handler->display->display_options['fields']['field_trong_khu_shopping_center']['field'] = 'field_trong_khu_shopping_center';
  $handler->display->display_options['fields']['field_trong_khu_shopping_center']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_trong_khu_shopping_center']['type'] = 'select_or_other_formatter';
  /* Field: Content: Price $/Giá Bán? */
  $handler->display->display_options['fields']['field_price_gia_ban_']['id'] = 'field_price_gia_ban_';
  $handler->display->display_options['fields']['field_price_gia_ban_']['table'] = 'field_data_field_price_gia_ban_';
  $handler->display->display_options['fields']['field_price_gia_ban_']['field'] = 'field_price_gia_ban_';
  $handler->display->display_options['fields']['field_price_gia_ban_']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_price_gia_ban_']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_price_gia_ban_']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Type of Business */
  $handler->display->display_options['fields']['field_type_of_business']['id'] = 'field_type_of_business';
  $handler->display->display_options['fields']['field_type_of_business']['table'] = 'field_data_field_type_of_business';
  $handler->display->display_options['fields']['field_type_of_business']['field'] = 'field_type_of_business';
  $handler->display->display_options['fields']['field_type_of_business']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_type_of_business']['type'] = 'select_or_other_formatter';
  /* Field: Content: Monthly Income? */
  $handler->display->display_options['fields']['field_monthly_income_']['id'] = 'field_monthly_income_';
  $handler->display->display_options['fields']['field_monthly_income_']['table'] = 'field_data_field_monthly_income_';
  $handler->display->display_options['fields']['field_monthly_income_']['field'] = 'field_monthly_income_';
  $handler->display->display_options['fields']['field_monthly_income_']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_monthly_income_']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_monthly_income_']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Monthly Rent */
  $handler->display->display_options['fields']['field_monthly_rent_sang_tiem']['id'] = 'field_monthly_rent_sang_tiem';
  $handler->display->display_options['fields']['field_monthly_rent_sang_tiem']['table'] = 'field_data_field_monthly_rent_sang_tiem';
  $handler->display->display_options['fields']['field_monthly_rent_sang_tiem']['field'] = 'field_monthly_rent_sang_tiem';
  $handler->display->display_options['fields']['field_monthly_rent_sang_tiem']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_monthly_rent_sang_tiem']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_monthly_rent_sang_tiem']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: How Many SQ/FT? */
  $handler->display->display_options['fields']['field_how_many_sq_ft']['id'] = 'field_how_many_sq_ft';
  $handler->display->display_options['fields']['field_how_many_sq_ft']['table'] = 'field_data_field_how_many_sq_ft';
  $handler->display->display_options['fields']['field_how_many_sq_ft']['field'] = 'field_how_many_sq_ft';
  $handler->display->display_options['fields']['field_how_many_sq_ft']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_how_many_sq_ft']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_how_many_sq_ft']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Sale Price? */
  $handler->display->display_options['fields']['field_sale_price']['id'] = 'field_sale_price';
  $handler->display->display_options['fields']['field_sale_price']['table'] = 'field_data_field_sale_price';
  $handler->display->display_options['fields']['field_sale_price']['field'] = 'field_sale_price';
  $handler->display->display_options['fields']['field_sale_price']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sale_price']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_sale_price']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Contact Name */
  $handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['hide_empty'] = TRUE;
  /* Field: Content: Contact Phone */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['hide_empty'] = TRUE;
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['label'] = '';
  $handler->display->display_options['fields']['province']['exclude'] = TRUE;
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['province']['style'] = 'code';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province_1']['id'] = 'province_1';
  $handler->display->display_options['fields']['province_1']['table'] = 'location';
  $handler->display->display_options['fields']['province_1']['field'] = 'province';
  $handler->display->display_options['fields']['province_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['province_1']['alter']['text'] = '[province_1],[province]';
  $handler->display->display_options['fields']['province_1']['hide_empty'] = TRUE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: COUNT(DISTINCT Content: Image) */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_1']['alter']['text'] = '[field_image_1] Images Avaliable';
  $handler->display->display_options['fields']['field_image_1']['separator'] = ', ';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['group_column'] = 'entity_id';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted';
  $handler->display->display_options['fields']['created']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listing' => 'listing',
  );
  /* Filter criterion: Content: Category (field_category) */
  $handler->display->display_options['filters']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['value'] = array(
    5 => '5',
    6 => '6',
  );
  $handler->display->display_options['filters']['field_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_category_tid']['expose']['operator_id'] = 'field_category_tid_op';
  $handler->display->display_options['filters']['field_category_tid']['expose']['operator'] = 'field_category_tid_op';
  $handler->display->display_options['filters']['field_category_tid']['expose']['identifier'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_category_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  $handler->display->display_options['filters']['field_category_tid']['hierarchy'] = 1;
  /* Filter criterion: Location: Province */
  $handler->display->display_options['filters']['province']['id'] = 'province';
  $handler->display->display_options['filters']['province']['table'] = 'location';
  $handler->display->display_options['filters']['province']['field'] = 'province';
  $handler->display->display_options['filters']['province']['value'] = 'AL';
  $handler->display->display_options['filters']['province']['exposed'] = TRUE;
  $handler->display->display_options['filters']['province']['expose']['operator_id'] = 'province_op';
  $handler->display->display_options['filters']['province']['expose']['operator'] = 'province_op';
  $handler->display->display_options['filters']['province']['expose']['identifier'] = 'province';
  $handler->display->display_options['filters']['province']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['province']['type'] = 'select';
  /* Filter criterion: Location: City */
  $handler->display->display_options['filters']['city']['id'] = 'city';
  $handler->display->display_options['filters']['city']['table'] = 'location';
  $handler->display->display_options['filters']['city']['field'] = 'city';
  $handler->display->display_options['filters']['city']['exposed'] = TRUE;
  $handler->display->display_options['filters']['city']['expose']['operator_id'] = 'city_op';
  $handler->display->display_options['filters']['city']['expose']['operator'] = 'city_op';
  $handler->display->display_options['filters']['city']['expose']['identifier'] = 'city';
  $handler->display->display_options['filters']['city']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Category (field_category) */
  $handler->display->display_options['filters']['field_category_tid_1']['id'] = 'field_category_tid_1';
  $handler->display->display_options['filters']['field_category_tid_1']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_tid_1']['field'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid_1']['value'] = array(
    5 => '5',
    6 => '6',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_category_tid_1']['vocabulary'] = 'category';
  $handler->display->display_options['path'] = 'sang-tiem-search';
  $translatables['search'] = array(
    t('Master'),
    t('Search'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No Results found for your state'),
    t('Custom text'),
    t('Category (field_category)'),
    t('Province'),
    t('City'),
    t('Page'),
    t('search'),
    t('Can Tho all'),
    t('All Cities'),
    t('save'),
    t('Category'),
    t('Cần Thợ'),
    t('Thợ Làm'),
    t('Kinh Nghiệm'),
    t('Cần License'),
    t('Khu Vực'),
    t('Tiền Lương'),
    t('Contact Name'),
    t('Contact Phone'),
    t('[province_1],[province]'),
    t('[field_image_1] Images Avalible'),
    t('Posted'),
    t('Sang Tiem all'),
    t('# Ghế'),
    t('Monthly Rent?'),
    t('Tiem SQ/FT'),
    t('# Bàn'),
    t('# Thợ'),
    t('Phòng Wax? '),
    t('Phòng Massage?'),
    t('Phòng Facial? '),
    t('Phòng Tan?'),
    t('Trong Khu Shopping Center'),
    t('Price $/Giá Bán?'),
    t('Type of Business'),
    t('Monthly Income?'),
    t('Monthly Rent'),
    t('How Many SQ/FT?'),
    t('Sale Price?'),
    t('Image'),
    t('[field_image_1] Images Avaliable'),
    t('Body'),
  );
  $export['search'] = $view;

  return $export;
}
