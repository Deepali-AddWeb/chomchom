<?php
/**
 * @file
 * listing.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function listing_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'business_for_sale';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Business For Sale';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Listing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
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
  $handler->display->display_options['fields']['title']['label'] = 'Posting Title';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
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
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  /* Field: Content: Type of Business */
  $handler->display->display_options['fields']['field_type_of_business']['id'] = 'field_type_of_business';
  $handler->display->display_options['fields']['field_type_of_business']['table'] = 'field_data_field_type_of_business';
  $handler->display->display_options['fields']['field_type_of_business']['field'] = 'field_type_of_business';
  $handler->display->display_options['fields']['field_type_of_business']['type'] = 'select_or_other_formatter';
  /* Field: Content: Monthly Income? */
  $handler->display->display_options['fields']['field_monthly_income_']['id'] = 'field_monthly_income_';
  $handler->display->display_options['fields']['field_monthly_income_']['table'] = 'field_data_field_monthly_income_';
  $handler->display->display_options['fields']['field_monthly_income_']['field'] = 'field_monthly_income_';
  $handler->display->display_options['fields']['field_monthly_income_']['label'] = 'Monthly Income ?';
  $handler->display->display_options['fields']['field_monthly_income_']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_monthly_income_']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Monthly Rent? */
  $handler->display->display_options['fields']['field_monthly_rent']['id'] = 'field_monthly_rent';
  $handler->display->display_options['fields']['field_monthly_rent']['table'] = 'field_data_field_monthly_rent';
  $handler->display->display_options['fields']['field_monthly_rent']['field'] = 'field_monthly_rent';
  $handler->display->display_options['fields']['field_monthly_rent']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_monthly_rent']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: How Many SQ/FT? */
  $handler->display->display_options['fields']['field_how_many_sq_ft']['id'] = 'field_how_many_sq_ft';
  $handler->display->display_options['fields']['field_how_many_sq_ft']['table'] = 'field_data_field_how_many_sq_ft';
  $handler->display->display_options['fields']['field_how_many_sq_ft']['field'] = 'field_how_many_sq_ft';
  $handler->display->display_options['fields']['field_how_many_sq_ft']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_how_many_sq_ft']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Sale Price? */
  $handler->display->display_options['fields']['field_sale_price']['id'] = 'field_sale_price';
  $handler->display->display_options['fields']['field_sale_price']['table'] = 'field_data_field_sale_price';
  $handler->display->display_options['fields']['field_sale_price']['field'] = 'field_sale_price';
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
  $handler->display->display_options['fields']['field_contact_name']['label'] = 'Contact Information';
  /* Field: Content: Contact Phone */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['label'] = '';
  $handler->display->display_options['fields']['field_contact_phone']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['province_1']['label'] = '';
  $handler->display->display_options['fields']['province_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['province_1']['alter']['text'] = '[province_1],[province]';
  $handler->display->display_options['fields']['province_1']['element_label_colon'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Image) */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '[field_image] Images Available';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['separator'] = ', ';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_1']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_image_1']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['group_column'] = 'entity_id';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted';
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
    6 => '6',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  /* Filter criterion: Content: Featured Date (field_featured_date) */
  $handler->display->display_options['filters']['field_featured_date_value']['id'] = 'field_featured_date_value';
  $handler->display->display_options['filters']['field_featured_date_value']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['filters']['field_featured_date_value']['field'] = 'field_featured_date_value';
  $handler->display->display_options['filters']['field_featured_date_value']['operator'] = 'empty';
  /* Filter criterion: Location: Province */
  $handler->display->display_options['filters']['province']['id'] = 'province';
  $handler->display->display_options['filters']['province']['table'] = 'location';
  $handler->display->display_options['filters']['province']['field'] = 'province';
  $handler->display->display_options['filters']['province']['value'] = 'AL';
  $handler->display->display_options['filters']['province']['type'] = 'select';

  /* Display: business for sale */
  $handler = $view->new_display('page', 'business for sale', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['path'] = 'business-for-sale';

  /* Display: featured business for sale */
  $handler = $view->new_display('block', 'featured business for sale', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Listing';
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
    6 => '6',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  /* Filter criterion: Content: Featured Date (field_featured_date) */
  $handler->display->display_options['filters']['field_featured_date_value']['id'] = 'field_featured_date_value';
  $handler->display->display_options['filters']['field_featured_date_value']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['filters']['field_featured_date_value']['field'] = 'field_featured_date_value';
  $handler->display->display_options['filters']['field_featured_date_value']['operator'] = 'not empty';
  /* Filter criterion: Location: Province */
  $handler->display->display_options['filters']['province']['id'] = 'province';
  $handler->display->display_options['filters']['province']['table'] = 'location';
  $handler->display->display_options['filters']['province']['field'] = 'province';
  $handler->display->display_options['filters']['province']['value'] = 'AL';
  $handler->display->display_options['filters']['province']['type'] = 'select';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'export business for sale';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_category' => 'field_category',
    'field_type_of_business' => 'field_type_of_business',
    'field_monthly_income_' => 'field_monthly_income_',
    'field_monthly_rent' => 'field_monthly_rent',
    'field_how_many_sq_ft' => 'field_how_many_sq_ft',
    'field_sale_price' => 'field_sale_price',
    'field_contact_name' => 'field_contact_name',
    'field_contact_phone' => 'field_contact_phone',
    'province' => 'province',
    'province_1' => 'province_1',
    'changed' => 'changed',
    'body' => 'body',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_type_of_business' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_monthly_income_' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_monthly_rent' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_how_many_sq_ft' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sale_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'province' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'province_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = 'category';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  /* Field: Content: Type of Business */
  $handler->display->display_options['fields']['field_type_of_business']['id'] = 'field_type_of_business';
  $handler->display->display_options['fields']['field_type_of_business']['table'] = 'field_data_field_type_of_business';
  $handler->display->display_options['fields']['field_type_of_business']['field'] = 'field_type_of_business';
  $handler->display->display_options['fields']['field_type_of_business']['label'] = 'type of business';
  $handler->display->display_options['fields']['field_type_of_business']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_business']['type'] = 'select_or_other_formatter';
  /* Field: Content: Monthly Income? */
  $handler->display->display_options['fields']['field_monthly_income_']['id'] = 'field_monthly_income_';
  $handler->display->display_options['fields']['field_monthly_income_']['table'] = 'field_data_field_monthly_income_';
  $handler->display->display_options['fields']['field_monthly_income_']['field'] = 'field_monthly_income_';
  $handler->display->display_options['fields']['field_monthly_income_']['label'] = 'monthly income';
  $handler->display->display_options['fields']['field_monthly_income_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_monthly_income_']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_monthly_income_']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Monthly Rent? */
  $handler->display->display_options['fields']['field_monthly_rent']['id'] = 'field_monthly_rent';
  $handler->display->display_options['fields']['field_monthly_rent']['table'] = 'field_data_field_monthly_rent';
  $handler->display->display_options['fields']['field_monthly_rent']['field'] = 'field_monthly_rent';
  $handler->display->display_options['fields']['field_monthly_rent']['label'] = 'monthly rent?';
  $handler->display->display_options['fields']['field_monthly_rent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_monthly_rent']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_monthly_rent']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: How Many SQ/FT? */
  $handler->display->display_options['fields']['field_how_many_sq_ft']['id'] = 'field_how_many_sq_ft';
  $handler->display->display_options['fields']['field_how_many_sq_ft']['table'] = 'field_data_field_how_many_sq_ft';
  $handler->display->display_options['fields']['field_how_many_sq_ft']['field'] = 'field_how_many_sq_ft';
  $handler->display->display_options['fields']['field_how_many_sq_ft']['label'] = 'how many sq/ft?';
  $handler->display->display_options['fields']['field_how_many_sq_ft']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_how_many_sq_ft']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_how_many_sq_ft']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Sale Price? */
  $handler->display->display_options['fields']['field_sale_price']['id'] = 'field_sale_price';
  $handler->display->display_options['fields']['field_sale_price']['table'] = 'field_data_field_sale_price';
  $handler->display->display_options['fields']['field_sale_price']['field'] = 'field_sale_price';
  $handler->display->display_options['fields']['field_sale_price']['label'] = 'sale price?';
  $handler->display->display_options['fields']['field_sale_price']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_contact_name']['label'] = 'contact name';
  $handler->display->display_options['fields']['field_contact_name']['element_label_colon'] = FALSE;
  /* Field: Content: Contact Phone */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['label'] = 'contact phone';
  $handler->display->display_options['fields']['field_contact_phone']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['province_1']['label'] = 'province';
  $handler->display->display_options['fields']['province_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['province_1']['alter']['text'] = '[province_1],[province]';
  $handler->display->display_options['fields']['province_1']['element_label_colon'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'update date';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['group_column'] = 'entity_id';
  /* Field: Content: Featured Date */
  $handler->display->display_options['fields']['field_featured_date']['id'] = 'field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['field'] = 'field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Featured Date (field_featured_date) */
  $handler->display->display_options['sorts']['field_featured_date_value']['id'] = 'field_featured_date_value';
  $handler->display->display_options['sorts']['field_featured_date_value']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['sorts']['field_featured_date_value']['field'] = 'field_featured_date_value';
  $handler->display->display_options['sorts']['field_featured_date_value']['order'] = 'DESC';
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
    6 => '6',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  $handler->display->display_options['path'] = 'export/business-for-sale';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = 'category';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  /* Field: Content: Type of Business */
  $handler->display->display_options['fields']['field_type_of_business']['id'] = 'field_type_of_business';
  $handler->display->display_options['fields']['field_type_of_business']['table'] = 'field_data_field_type_of_business';
  $handler->display->display_options['fields']['field_type_of_business']['field'] = 'field_type_of_business';
  $handler->display->display_options['fields']['field_type_of_business']['label'] = 'type of business';
  $handler->display->display_options['fields']['field_type_of_business']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_business']['type'] = 'select_or_other_formatter';
  /* Field: Content: Monthly Income? */
  $handler->display->display_options['fields']['field_monthly_income_']['id'] = 'field_monthly_income_';
  $handler->display->display_options['fields']['field_monthly_income_']['table'] = 'field_data_field_monthly_income_';
  $handler->display->display_options['fields']['field_monthly_income_']['field'] = 'field_monthly_income_';
  $handler->display->display_options['fields']['field_monthly_income_']['label'] = 'monthly income';
  $handler->display->display_options['fields']['field_monthly_income_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_monthly_income_']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_monthly_income_']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Monthly Rent? */
  $handler->display->display_options['fields']['field_monthly_rent']['id'] = 'field_monthly_rent';
  $handler->display->display_options['fields']['field_monthly_rent']['table'] = 'field_data_field_monthly_rent';
  $handler->display->display_options['fields']['field_monthly_rent']['field'] = 'field_monthly_rent';
  $handler->display->display_options['fields']['field_monthly_rent']['label'] = 'monthly rent?';
  $handler->display->display_options['fields']['field_monthly_rent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_monthly_rent']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_monthly_rent']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: How Many SQ/FT? */
  $handler->display->display_options['fields']['field_how_many_sq_ft']['id'] = 'field_how_many_sq_ft';
  $handler->display->display_options['fields']['field_how_many_sq_ft']['table'] = 'field_data_field_how_many_sq_ft';
  $handler->display->display_options['fields']['field_how_many_sq_ft']['field'] = 'field_how_many_sq_ft';
  $handler->display->display_options['fields']['field_how_many_sq_ft']['label'] = 'how many sq/ft?';
  $handler->display->display_options['fields']['field_how_many_sq_ft']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_how_many_sq_ft']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_how_many_sq_ft']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Sale Price? */
  $handler->display->display_options['fields']['field_sale_price']['id'] = 'field_sale_price';
  $handler->display->display_options['fields']['field_sale_price']['table'] = 'field_data_field_sale_price';
  $handler->display->display_options['fields']['field_sale_price']['field'] = 'field_sale_price';
  $handler->display->display_options['fields']['field_sale_price']['label'] = 'sale price?';
  $handler->display->display_options['fields']['field_sale_price']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_contact_name']['label'] = 'contact name';
  $handler->display->display_options['fields']['field_contact_name']['element_label_colon'] = FALSE;
  /* Field: Content: Contact Phone */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['label'] = 'contact phone';
  $handler->display->display_options['fields']['field_contact_phone']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['province_1']['label'] = 'province';
  $handler->display->display_options['fields']['province_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['province_1']['alter']['text'] = '[province_1],[province]';
  $handler->display->display_options['fields']['province_1']['element_label_colon'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'update date';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['group_column'] = 'entity_id';
  /* Field: Content: Featured Date */
  $handler->display->display_options['fields']['field_featured_date']['id'] = 'field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['field'] = 'field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Featured Date (field_featured_date) */
  $handler->display->display_options['sorts']['field_featured_date_value']['id'] = 'field_featured_date_value';
  $handler->display->display_options['sorts']['field_featured_date_value']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['sorts']['field_featured_date_value']['field'] = 'field_featured_date_value';
  $handler->display->display_options['sorts']['field_featured_date_value']['order'] = 'DESC';
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
    6 => '6',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  $handler->display->display_options['path'] = 'export-business-for-sale';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
  );
  $translatables['business_for_sale'] = array(
    t('Master'),
    t('All Listing'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No Results found for your state'),
    t('Posting Title'),
    t('save'),
    t('Type of Business'),
    t('Monthly Income ?'),
    t('Monthly Rent?'),
    t('How Many SQ/FT?'),
    t('Sale Price?'),
    t('Contact Information'),
    t('[province_1],[province]'),
    t('[field_image] Images Available'),
    t('Posted'),
    t('business for sale'),
    t('featured business for sale'),
    t('Featured Listing'),
    t('Page'),
    t('export business for sale'),
    t('title'),
    t('category'),
    t('type of business'),
    t('monthly income'),
    t('monthly rent?'),
    t('how many sq/ft?'),
    t('sale price?'),
    t('contact name'),
    t('contact phone'),
    t('province'),
    t('update date'),
    t('body'),
    t('Featured Date'),
    t('Data export'),
  );
  $export['business_for_sale'] = $view;

  $view = new view();
  $view->name = 'can_tho';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Can Tho Nails';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Listing';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
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
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = 'image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Posting Title';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
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
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_category']['alter']['text'] = '[field_category]  :';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  /* Field: Content: Cần Thợ */
  $handler->display->display_options['fields']['field_can_tho']['id'] = 'field_can_tho';
  $handler->display->display_options['fields']['field_can_tho']['table'] = 'field_data_field_can_tho';
  $handler->display->display_options['fields']['field_can_tho']['field'] = 'field_can_tho';
  $handler->display->display_options['fields']['field_can_tho']['label'] = '';
  $handler->display->display_options['fields']['field_can_tho']['element_label_colon'] = FALSE;
  /* Field: Content: Thợ Làm */
  $handler->display->display_options['fields']['field_tho_lam']['id'] = 'field_tho_lam';
  $handler->display->display_options['fields']['field_tho_lam']['table'] = 'field_data_field_tho_lam';
  $handler->display->display_options['fields']['field_tho_lam']['field'] = 'field_tho_lam';
  $handler->display->display_options['fields']['field_tho_lam']['label'] = '';
  $handler->display->display_options['fields']['field_tho_lam']['element_label_colon'] = FALSE;
  /* Field: Content: Kinh Nghiệm */
  $handler->display->display_options['fields']['field_kinh_nghiem']['id'] = 'field_kinh_nghiem';
  $handler->display->display_options['fields']['field_kinh_nghiem']['table'] = 'field_data_field_kinh_nghiem';
  $handler->display->display_options['fields']['field_kinh_nghiem']['field'] = 'field_kinh_nghiem';
  $handler->display->display_options['fields']['field_kinh_nghiem']['label'] = 'kinh nghiem';
  $handler->display->display_options['fields']['field_kinh_nghiem']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kinh_nghiem']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_kinh_nghiem']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_kinh_nghiem']['delta_offset'] = '0';
  /* Field: Content: Cần License */
  $handler->display->display_options['fields']['field_can_license']['id'] = 'field_can_license';
  $handler->display->display_options['fields']['field_can_license']['table'] = 'field_data_field_can_license';
  $handler->display->display_options['fields']['field_can_license']['field'] = 'field_can_license';
  $handler->display->display_options['fields']['field_can_license']['label'] = 'Can License';
  $handler->display->display_options['fields']['field_can_license']['element_label_colon'] = FALSE;
  /* Field: Content: Khu Vực */
  $handler->display->display_options['fields']['field_khu_vuc']['id'] = 'field_khu_vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['table'] = 'field_data_field_khu_vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['field'] = 'field_khu_vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_khu_vuc']['delta_offset'] = '0';
  /* Field: Content: Tiền Lương */
  $handler->display->display_options['fields']['field_tien_luong']['id'] = 'field_tien_luong';
  $handler->display->display_options['fields']['field_tien_luong']['table'] = 'field_data_field_tien_luong';
  $handler->display->display_options['fields']['field_tien_luong']['field'] = 'field_tien_luong';
  $handler->display->display_options['fields']['field_tien_luong']['label'] = 'Tien Luong';
  $handler->display->display_options['fields']['field_tien_luong']['type'] = 'select_or_other_formatter';
  /* Field: Content: Contact Name */
  $handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['label'] = 'Contact Information';
  $handler->display->display_options['fields']['field_contact_name']['element_label_colon'] = FALSE;
  /* Field: Content: Contact Phone */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['label'] = '';
  $handler->display->display_options['fields']['field_contact_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_phone']['group_column'] = 'entity_id';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province_1']['id'] = 'province_1';
  $handler->display->display_options['fields']['province_1']['table'] = 'location';
  $handler->display->display_options['fields']['province_1']['field'] = 'province';
  $handler->display->display_options['fields']['province_1']['label'] = '';
  $handler->display->display_options['fields']['province_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['province_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['province_1']['style'] = 'code';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['label'] = '';
  $handler->display->display_options['fields']['province']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['province']['alter']['text'] = '[province],[province_1]';
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['group_column'] = 'entity_id';
  /* Field: COUNT(DISTINCT Content: Image) */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_1']['alter']['text'] = '[field_image_1] images available';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['separator'] = ', ';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted';
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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

  /* Display: can tho nails */
  $handler = $view->new_display('page', 'can tho nails', 'page');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Results found for your state';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = 'image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Posting Title';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
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
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_category']['alter']['text'] = '[field_category]  :';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  /* Field: Content: Cần Thợ */
  $handler->display->display_options['fields']['field_can_tho']['id'] = 'field_can_tho';
  $handler->display->display_options['fields']['field_can_tho']['table'] = 'field_data_field_can_tho';
  $handler->display->display_options['fields']['field_can_tho']['field'] = 'field_can_tho';
  $handler->display->display_options['fields']['field_can_tho']['label'] = '';
  $handler->display->display_options['fields']['field_can_tho']['element_label_colon'] = FALSE;
  /* Field: Content: Thợ Làm */
  $handler->display->display_options['fields']['field_tho_lam']['id'] = 'field_tho_lam';
  $handler->display->display_options['fields']['field_tho_lam']['table'] = 'field_data_field_tho_lam';
  $handler->display->display_options['fields']['field_tho_lam']['field'] = 'field_tho_lam';
  $handler->display->display_options['fields']['field_tho_lam']['label'] = '';
  $handler->display->display_options['fields']['field_tho_lam']['element_label_colon'] = FALSE;
  /* Field: Content: Kinh Nghiệm */
  $handler->display->display_options['fields']['field_kinh_nghiem']['id'] = 'field_kinh_nghiem';
  $handler->display->display_options['fields']['field_kinh_nghiem']['table'] = 'field_data_field_kinh_nghiem';
  $handler->display->display_options['fields']['field_kinh_nghiem']['field'] = 'field_kinh_nghiem';
  $handler->display->display_options['fields']['field_kinh_nghiem']['label'] = 'kinh nghiem';
  $handler->display->display_options['fields']['field_kinh_nghiem']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_kinh_nghiem']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_kinh_nghiem']['alter']['more_link_text'] = 'more';
  $handler->display->display_options['fields']['field_kinh_nghiem']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kinh_nghiem']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_kinh_nghiem']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_kinh_nghiem']['delta_offset'] = '0';
  /* Field: Content: Cần License */
  $handler->display->display_options['fields']['field_can_license']['id'] = 'field_can_license';
  $handler->display->display_options['fields']['field_can_license']['table'] = 'field_data_field_can_license';
  $handler->display->display_options['fields']['field_can_license']['field'] = 'field_can_license';
  $handler->display->display_options['fields']['field_can_license']['label'] = 'Can License';
  $handler->display->display_options['fields']['field_can_license']['element_label_colon'] = FALSE;
  /* Field: Content: Khu Vực */
  $handler->display->display_options['fields']['field_khu_vuc']['id'] = 'field_khu_vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['table'] = 'field_data_field_khu_vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['field'] = 'field_khu_vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_khu_vuc']['delta_offset'] = '0';
  /* Field: Content: Tiền Lương */
  $handler->display->display_options['fields']['field_tien_luong']['id'] = 'field_tien_luong';
  $handler->display->display_options['fields']['field_tien_luong']['table'] = 'field_data_field_tien_luong';
  $handler->display->display_options['fields']['field_tien_luong']['field'] = 'field_tien_luong';
  $handler->display->display_options['fields']['field_tien_luong']['label'] = 'Tien Luong';
  $handler->display->display_options['fields']['field_tien_luong']['type'] = 'select_or_other_formatter';
  /* Field: Content: Contact Name */
  $handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['label'] = 'Contact Information';
  $handler->display->display_options['fields']['field_contact_name']['element_label_colon'] = FALSE;
  /* Field: Content: Contact Phone */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['label'] = '';
  $handler->display->display_options['fields']['field_contact_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_phone']['group_column'] = 'entity_id';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province_1']['id'] = 'province_1';
  $handler->display->display_options['fields']['province_1']['table'] = 'location';
  $handler->display->display_options['fields']['province_1']['field'] = 'province';
  $handler->display->display_options['fields']['province_1']['label'] = '';
  $handler->display->display_options['fields']['province_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['province_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['province_1']['style'] = 'code';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['label'] = '';
  $handler->display->display_options['fields']['province']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['province']['alter']['text'] = '[province],[province_1]';
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['group_column'] = 'entity_id';
  /* Field: COUNT(DISTINCT Content: Image) */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_1']['alter']['text'] = '[field_image_1] images available';
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
  /* Filter criterion: Content: Featured Date (field_featured_date) */
  $handler->display->display_options['filters']['field_featured_date_value']['id'] = 'field_featured_date_value';
  $handler->display->display_options['filters']['field_featured_date_value']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['filters']['field_featured_date_value']['field'] = 'field_featured_date_value';
  $handler->display->display_options['filters']['field_featured_date_value']['operator'] = 'empty';
  /* Filter criterion: Content: Category (field_category) */
  $handler->display->display_options['filters']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['value'] = array(
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['filters']['field_category_tid']['expose']['operator_id'] = 'field_category_tid_op';
  $handler->display->display_options['filters']['field_category_tid']['expose']['label'] = 'Category (field_category)';
  $handler->display->display_options['filters']['field_category_tid']['expose']['operator'] = 'field_category_tid_op';
  $handler->display->display_options['filters']['field_category_tid']['expose']['identifier'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  $handler->display->display_options['filters']['field_category_tid']['hierarchy'] = 1;
  /* Filter criterion: Location: Province */
  $handler->display->display_options['filters']['province']['id'] = 'province';
  $handler->display->display_options['filters']['province']['table'] = 'location';
  $handler->display->display_options['filters']['province']['field'] = 'province';
  $handler->display->display_options['filters']['province']['value'] = 'AL';
  $handler->display->display_options['filters']['province']['type'] = 'select';
  $handler->display->display_options['path'] = 'can-tho-nails';

  /* Display: can tho Featured Listing */
  $handler = $view->new_display('block', 'can tho Featured Listing', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Listing';
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
  /* Filter criterion: Content: Featured Date (field_featured_date) */
  $handler->display->display_options['filters']['field_featured_date_value']['id'] = 'field_featured_date_value';
  $handler->display->display_options['filters']['field_featured_date_value']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['filters']['field_featured_date_value']['field'] = 'field_featured_date_value';
  $handler->display->display_options['filters']['field_featured_date_value']['operator'] = 'not empty';
  /* Filter criterion: Content: Category (field_category) */
  $handler->display->display_options['filters']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['value'] = array(
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  /* Filter criterion: Location: Province */
  $handler->display->display_options['filters']['province']['id'] = 'province';
  $handler->display->display_options['filters']['province']['table'] = 'location';
  $handler->display->display_options['filters']['province']['field'] = 'province';
  $handler->display->display_options['filters']['province']['value'] = 'AL';
  $handler->display->display_options['filters']['province']['type'] = 'select';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = 'category';
  $handler->display->display_options['fields']['field_category']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_category']['alter']['text'] = '[field_category]  :';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  /* Field: Content: Cần Thợ */
  $handler->display->display_options['fields']['field_can_tho']['id'] = 'field_can_tho';
  $handler->display->display_options['fields']['field_can_tho']['table'] = 'field_data_field_can_tho';
  $handler->display->display_options['fields']['field_can_tho']['field'] = 'field_can_tho';
  $handler->display->display_options['fields']['field_can_tho']['label'] = 'can tho';
  $handler->display->display_options['fields']['field_can_tho']['element_label_colon'] = FALSE;
  /* Field: Content: Thợ Làm */
  $handler->display->display_options['fields']['field_tho_lam']['id'] = 'field_tho_lam';
  $handler->display->display_options['fields']['field_tho_lam']['table'] = 'field_data_field_tho_lam';
  $handler->display->display_options['fields']['field_tho_lam']['field'] = 'field_tho_lam';
  $handler->display->display_options['fields']['field_tho_lam']['label'] = 'tho lam';
  $handler->display->display_options['fields']['field_tho_lam']['element_label_colon'] = FALSE;
  /* Field: Content: Kinh Nghiệm */
  $handler->display->display_options['fields']['field_kinh_nghiem']['id'] = 'field_kinh_nghiem';
  $handler->display->display_options['fields']['field_kinh_nghiem']['table'] = 'field_data_field_kinh_nghiem';
  $handler->display->display_options['fields']['field_kinh_nghiem']['field'] = 'field_kinh_nghiem';
  $handler->display->display_options['fields']['field_kinh_nghiem']['label'] = 'kinh nghiem';
  $handler->display->display_options['fields']['field_kinh_nghiem']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kinh_nghiem']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_kinh_nghiem']['delta_offset'] = '0';
  /* Field: Content: Cần License */
  $handler->display->display_options['fields']['field_can_license']['id'] = 'field_can_license';
  $handler->display->display_options['fields']['field_can_license']['table'] = 'field_data_field_can_license';
  $handler->display->display_options['fields']['field_can_license']['field'] = 'field_can_license';
  $handler->display->display_options['fields']['field_can_license']['label'] = 'can license';
  $handler->display->display_options['fields']['field_can_license']['element_label_colon'] = FALSE;
  /* Field: Content: Khu Vực */
  $handler->display->display_options['fields']['field_khu_vuc']['id'] = 'field_khu_vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['table'] = 'field_data_field_khu_vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['field'] = 'field_khu_vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['delta_offset'] = '0';
  /* Field: Content: Tiền Lương */
  $handler->display->display_options['fields']['field_tien_luong']['id'] = 'field_tien_luong';
  $handler->display->display_options['fields']['field_tien_luong']['table'] = 'field_data_field_tien_luong';
  $handler->display->display_options['fields']['field_tien_luong']['field'] = 'field_tien_luong';
  $handler->display->display_options['fields']['field_tien_luong']['type'] = 'select_or_other_formatter';
  /* Field: Content: Contact Name */
  $handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['label'] = 'contact name';
  $handler->display->display_options['fields']['field_contact_name']['element_label_colon'] = FALSE;
  /* Field: Content: Contact Phone */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['group_column'] = 'entity_id';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province_1']['id'] = 'province_1';
  $handler->display->display_options['fields']['province_1']['table'] = 'location';
  $handler->display->display_options['fields']['province_1']['field'] = 'province';
  $handler->display->display_options['fields']['province_1']['label'] = '';
  $handler->display->display_options['fields']['province_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['province_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['province_1']['style'] = 'code';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['label'] = 'province';
  $handler->display->display_options['fields']['province']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['province']['alter']['text'] = '[province],[province_1]';
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['group_column'] = 'entity_id';
  /* Field: Content: Featured Date */
  $handler->display->display_options['fields']['field_featured_date']['id'] = 'field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['field'] = 'field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Featured Date (field_featured_date) */
  $handler->display->display_options['sorts']['field_featured_date_value']['id'] = 'field_featured_date_value';
  $handler->display->display_options['sorts']['field_featured_date_value']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['sorts']['field_featured_date_value']['field'] = 'field_featured_date_value';
  $handler->display->display_options['sorts']['field_featured_date_value']['order'] = 'DESC';
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
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  $handler->display->display_options['path'] = 'export-can-tho-nails';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
  );

  /* Display: export can tho nails */
  $handler = $view->new_display('page', 'export can tho nails', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'export can tho nails';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_image' => 'field_image',
    'title' => 'title',
    'nothing' => 'nothing',
    'field_category' => 'field_category',
    'field_can_tho' => 'field_can_tho',
    'field_tho_lam' => 'field_tho_lam',
    'field_kinh_nghiem_toc' => 'field_kinh_nghiem_toc',
    'field_kinh_nghiem' => 'field_kinh_nghiem',
    'field_can_license' => 'field_can_license',
    'field_khu_vuc' => 'field_khu_vuc',
    'field_tien_luong' => 'field_tien_luong',
    'field_contact_name' => 'field_contact_name',
    'field_contact_phone' => 'field_contact_phone',
    'province_1' => 'province_1',
    'province' => 'province',
    'changed' => 'changed',
    'body' => 'body',
    'field_image_1' => 'field_image_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_image' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_can_tho' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tho_lam' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_kinh_nghiem_toc' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_kinh_nghiem' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_can_license' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_khu_vuc' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tien_luong' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'province_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'province' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = 'category';
  $handler->display->display_options['fields']['field_category']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_category']['alter']['text'] = '[field_category]  :';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  /* Field: Content: Cần Thợ */
  $handler->display->display_options['fields']['field_can_tho']['id'] = 'field_can_tho';
  $handler->display->display_options['fields']['field_can_tho']['table'] = 'field_data_field_can_tho';
  $handler->display->display_options['fields']['field_can_tho']['field'] = 'field_can_tho';
  $handler->display->display_options['fields']['field_can_tho']['label'] = 'can tho';
  $handler->display->display_options['fields']['field_can_tho']['element_label_colon'] = FALSE;
  /* Field: Content: Thợ Làm */
  $handler->display->display_options['fields']['field_tho_lam']['id'] = 'field_tho_lam';
  $handler->display->display_options['fields']['field_tho_lam']['table'] = 'field_data_field_tho_lam';
  $handler->display->display_options['fields']['field_tho_lam']['field'] = 'field_tho_lam';
  $handler->display->display_options['fields']['field_tho_lam']['label'] = 'tho lam';
  $handler->display->display_options['fields']['field_tho_lam']['element_label_colon'] = FALSE;
  /* Field: Content: Kinh Nghiệm */
  $handler->display->display_options['fields']['field_kinh_nghiem']['id'] = 'field_kinh_nghiem';
  $handler->display->display_options['fields']['field_kinh_nghiem']['table'] = 'field_data_field_kinh_nghiem';
  $handler->display->display_options['fields']['field_kinh_nghiem']['field'] = 'field_kinh_nghiem';
  $handler->display->display_options['fields']['field_kinh_nghiem']['label'] = 'kinh nghiem ';
  $handler->display->display_options['fields']['field_kinh_nghiem']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kinh_nghiem']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_kinh_nghiem']['delta_offset'] = '0';
  /* Field: Content: Cần License */
  $handler->display->display_options['fields']['field_can_license']['id'] = 'field_can_license';
  $handler->display->display_options['fields']['field_can_license']['table'] = 'field_data_field_can_license';
  $handler->display->display_options['fields']['field_can_license']['field'] = 'field_can_license';
  $handler->display->display_options['fields']['field_can_license']['label'] = '';
  $handler->display->display_options['fields']['field_can_license']['element_label_colon'] = FALSE;
  /* Field: Content: Khu Vực */
  $handler->display->display_options['fields']['field_khu_vuc']['id'] = 'field_khu_vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['table'] = 'field_data_field_khu_vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['field'] = 'field_khu_vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['delta_offset'] = '0';
  /* Field: Content: Tiền Lương */
  $handler->display->display_options['fields']['field_tien_luong']['id'] = 'field_tien_luong';
  $handler->display->display_options['fields']['field_tien_luong']['table'] = 'field_data_field_tien_luong';
  $handler->display->display_options['fields']['field_tien_luong']['field'] = 'field_tien_luong';
  $handler->display->display_options['fields']['field_tien_luong']['type'] = 'select_or_other_formatter';
  /* Field: Content: Contact Name */
  $handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['label'] = 'contact name';
  $handler->display->display_options['fields']['field_contact_name']['element_label_colon'] = FALSE;
  /* Field: Content: Contact Phone */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['group_column'] = 'entity_id';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province_1']['id'] = 'province_1';
  $handler->display->display_options['fields']['province_1']['table'] = 'location';
  $handler->display->display_options['fields']['province_1']['field'] = 'province';
  $handler->display->display_options['fields']['province_1']['label'] = '';
  $handler->display->display_options['fields']['province_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['province_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['province_1']['style'] = 'code';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['label'] = 'province';
  $handler->display->display_options['fields']['province']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['province']['alter']['text'] = '[province],[province_1]';
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['group_column'] = 'entity_id';
  /* Field: Content: Featured Date */
  $handler->display->display_options['fields']['field_featured_date']['id'] = 'field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['field'] = 'field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Featured Date (field_featured_date) */
  $handler->display->display_options['sorts']['field_featured_date_value']['id'] = 'field_featured_date_value';
  $handler->display->display_options['sorts']['field_featured_date_value']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['sorts']['field_featured_date_value']['field'] = 'field_featured_date_value';
  $handler->display->display_options['sorts']['field_featured_date_value']['order'] = 'DESC';
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
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  $handler->display->display_options['path'] = 'export/sang-tiem-nails';
  $translatables['can_tho'] = array(
    t('Master'),
    t('All Listing'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No Results found for your state'),
    t('image'),
    t('Posting Title'),
    t('save'),
    t('[field_category]  :'),
    t('kinh nghiem'),
    t('Can License'),
    t('Khu Vực'),
    t('Tien Luong'),
    t('Contact Information'),
    t('[province],[province_1]'),
    t('Updated date'),
    t('[field_image_1] images available'),
    t('Posted'),
    t('can tho nails'),
    t('Category (field_category)'),
    t('can tho Featured Listing'),
    t('Featured Listing'),
    t('Data export'),
    t('title'),
    t('category'),
    t('can tho'),
    t('tho lam'),
    t('can license'),
    t('Tiền Lương'),
    t('contact name'),
    t('Contact Phone'),
    t('province'),
    t('body'),
    t('Featured Date'),
    t('export can tho nails'),
    t('kinh nghiem '),
  );
  $export['can_tho'] = $view;

  $view = new view();
  $view->name = 'can_tho_toc';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Can Tho Toc';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Listing';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Posting Title';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
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
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_category']['alter']['text'] = '[field_category]  :';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  /* Field: Content: Cần Thợ */
  $handler->display->display_options['fields']['field_can_tho']['id'] = 'field_can_tho';
  $handler->display->display_options['fields']['field_can_tho']['table'] = 'field_data_field_can_tho';
  $handler->display->display_options['fields']['field_can_tho']['field'] = 'field_can_tho';
  $handler->display->display_options['fields']['field_can_tho']['label'] = '';
  $handler->display->display_options['fields']['field_can_tho']['element_label_colon'] = FALSE;
  /* Field: Content: Thợ Làm */
  $handler->display->display_options['fields']['field_tho_lam']['id'] = 'field_tho_lam';
  $handler->display->display_options['fields']['field_tho_lam']['table'] = 'field_data_field_tho_lam';
  $handler->display->display_options['fields']['field_tho_lam']['field'] = 'field_tho_lam';
  $handler->display->display_options['fields']['field_tho_lam']['label'] = '';
  $handler->display->display_options['fields']['field_tho_lam']['element_label_colon'] = FALSE;
  /* Field: Content: Kinh Nghiệm */
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['id'] = 'field_kinh_nghiem_toc';
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['table'] = 'field_data_field_kinh_nghiem_toc';
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['field'] = 'field_kinh_nghiem_toc';
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['label'] = 'Biet Lam';
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['delta_offset'] = '0';
  /* Field: Content: Cần License */
  $handler->display->display_options['fields']['field_can_license']['id'] = 'field_can_license';
  $handler->display->display_options['fields']['field_can_license']['table'] = 'field_data_field_can_license';
  $handler->display->display_options['fields']['field_can_license']['field'] = 'field_can_license';
  $handler->display->display_options['fields']['field_can_license']['label'] = 'Can License';
  $handler->display->display_options['fields']['field_can_license']['element_label_colon'] = FALSE;
  /* Field: Content: Khu Vực */
  $handler->display->display_options['fields']['field_khu_vuc']['id'] = 'field_khu_vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['table'] = 'field_data_field_khu_vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['field'] = 'field_khu_vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_khu_vuc']['delta_offset'] = '0';
  /* Field: Content: Tiền Lương */
  $handler->display->display_options['fields']['field_tien_luong']['id'] = 'field_tien_luong';
  $handler->display->display_options['fields']['field_tien_luong']['table'] = 'field_data_field_tien_luong';
  $handler->display->display_options['fields']['field_tien_luong']['field'] = 'field_tien_luong';
  $handler->display->display_options['fields']['field_tien_luong']['label'] = 'Tien Lưong';
  $handler->display->display_options['fields']['field_tien_luong']['type'] = 'select_or_other_formatter';
  /* Field: Content: Contact Name */
  $handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['label'] = '';
  $handler->display->display_options['fields']['field_contact_name']['element_label_colon'] = FALSE;
  /* Field: Content: Contact Phone */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['label'] = '';
  $handler->display->display_options['fields']['field_contact_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_phone']['group_column'] = 'entity_id';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province_1']['id'] = 'province_1';
  $handler->display->display_options['fields']['province_1']['table'] = 'location';
  $handler->display->display_options['fields']['province_1']['field'] = 'province';
  $handler->display->display_options['fields']['province_1']['label'] = '';
  $handler->display->display_options['fields']['province_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['province_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['province_1']['style'] = 'code';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['label'] = '';
  $handler->display->display_options['fields']['province']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['province']['alter']['text'] = '[province],[province_1]';
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['group_column'] = 'entity_id';
  /* Field: COUNT(DISTINCT Content: Image) */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_1']['alter']['text'] = '[field_image_1] images available';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['separator'] = ', ';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted';
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';

  /* Display: can tho toc */
  $handler = $view->new_display('page', 'can tho toc', 'page');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
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
  /* Filter criterion: Content: Featured Date (field_featured_date) */
  $handler->display->display_options['filters']['field_featured_date_value']['id'] = 'field_featured_date_value';
  $handler->display->display_options['filters']['field_featured_date_value']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['filters']['field_featured_date_value']['field'] = 'field_featured_date_value';
  $handler->display->display_options['filters']['field_featured_date_value']['operator'] = 'empty';
  /* Filter criterion: Content: Category (field_category) */
  $handler->display->display_options['filters']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['value'] = array(
    1 => '1',
    3 => '3',
  );
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  /* Filter criterion: Location: Province */
  $handler->display->display_options['filters']['province']['id'] = 'province';
  $handler->display->display_options['filters']['province']['table'] = 'location';
  $handler->display->display_options['filters']['province']['field'] = 'province';
  $handler->display->display_options['filters']['province']['value'] = 'AL';
  $handler->display->display_options['filters']['province']['type'] = 'select';
  $handler->display->display_options['path'] = 'can-tho-toc';

  /* Display: Can Tho Toc Featured Listing */
  $handler = $view->new_display('block', 'Can Tho Toc Featured Listing', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Listing';
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
  /* Filter criterion: Content: Featured Date (field_featured_date) */
  $handler->display->display_options['filters']['field_featured_date_value']['id'] = 'field_featured_date_value';
  $handler->display->display_options['filters']['field_featured_date_value']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['filters']['field_featured_date_value']['field'] = 'field_featured_date_value';
  $handler->display->display_options['filters']['field_featured_date_value']['operator'] = 'not empty';
  /* Filter criterion: Content: Category (field_category) */
  $handler->display->display_options['filters']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['value'] = array(
    1 => '1',
    3 => '3',
  );
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  /* Filter criterion: Location: Province */
  $handler->display->display_options['filters']['province']['id'] = 'province';
  $handler->display->display_options['filters']['province']['table'] = 'location';
  $handler->display->display_options['filters']['province']['field'] = 'province';
  $handler->display->display_options['filters']['province']['value'] = 'AL';
  $handler->display->display_options['filters']['province']['type'] = 'select';

  /* Display: export can tho toc */
  $handler = $view->new_display('page', 'export can tho toc', 'page_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_image' => 'field_image',
    'title' => 'title',
    'nothing' => 'nothing',
    'field_category' => 'field_category',
    'field_can_tho' => 'field_can_tho',
    'field_tho_lam' => 'field_tho_lam',
    'field_kinh_nghiem_toc' => 'field_kinh_nghiem_toc',
    'field_can_license' => 'field_can_license',
    'field_khu_vuc' => 'field_khu_vuc',
    'field_tien_luong' => 'field_tien_luong',
    'field_contact_name' => 'field_contact_name',
    'field_contact_phone' => 'field_contact_phone',
    'province_1' => 'province_1',
    'province' => 'province',
    'changed' => 'changed',
    'body' => 'body',
    'field_image_1' => 'field_image_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_image' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_can_tho' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tho_lam' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_kinh_nghiem_toc' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_can_license' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_khu_vuc' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tien_luong' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'province_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'province' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = 'category';
  $handler->display->display_options['fields']['field_category']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_category']['alter']['text'] = '[field_category]  :';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  /* Field: Content: Cần Thợ */
  $handler->display->display_options['fields']['field_can_tho']['id'] = 'field_can_tho';
  $handler->display->display_options['fields']['field_can_tho']['table'] = 'field_data_field_can_tho';
  $handler->display->display_options['fields']['field_can_tho']['field'] = 'field_can_tho';
  $handler->display->display_options['fields']['field_can_tho']['label'] = 'can-tho';
  $handler->display->display_options['fields']['field_can_tho']['element_label_colon'] = FALSE;
  /* Field: Content: Thợ Làm */
  $handler->display->display_options['fields']['field_tho_lam']['id'] = 'field_tho_lam';
  $handler->display->display_options['fields']['field_tho_lam']['table'] = 'field_data_field_tho_lam';
  $handler->display->display_options['fields']['field_tho_lam']['field'] = 'field_tho_lam';
  $handler->display->display_options['fields']['field_tho_lam']['label'] = 'tho lam';
  $handler->display->display_options['fields']['field_tho_lam']['element_label_colon'] = FALSE;
  /* Field: Content: Kinh Nghiệm */
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['id'] = 'field_kinh_nghiem_toc';
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['table'] = 'field_data_field_kinh_nghiem_toc';
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['field'] = 'field_kinh_nghiem_toc';
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['label'] = 'kinh nghiem';
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['delta_offset'] = '0';
  /* Field: Content: Cần License */
  $handler->display->display_options['fields']['field_can_license']['id'] = 'field_can_license';
  $handler->display->display_options['fields']['field_can_license']['table'] = 'field_data_field_can_license';
  $handler->display->display_options['fields']['field_can_license']['field'] = 'field_can_license';
  $handler->display->display_options['fields']['field_can_license']['label'] = 'can license';
  $handler->display->display_options['fields']['field_can_license']['element_label_colon'] = FALSE;
  /* Field: Content: Khu Vực */
  $handler->display->display_options['fields']['field_khu_vuc']['id'] = 'field_khu_vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['table'] = 'field_data_field_khu_vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['field'] = 'field_khu_vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_khu_vuc']['delta_offset'] = '0';
  /* Field: Content: Tiền Lương */
  $handler->display->display_options['fields']['field_tien_luong']['id'] = 'field_tien_luong';
  $handler->display->display_options['fields']['field_tien_luong']['table'] = 'field_data_field_tien_luong';
  $handler->display->display_options['fields']['field_tien_luong']['field'] = 'field_tien_luong';
  $handler->display->display_options['fields']['field_tien_luong']['type'] = 'select_or_other_formatter';
  /* Field: Content: Contact Name */
  $handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['label'] = 'contact name';
  $handler->display->display_options['fields']['field_contact_name']['element_label_colon'] = FALSE;
  /* Field: Content: Contact Phone */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['group_column'] = 'entity_id';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province_1']['id'] = 'province_1';
  $handler->display->display_options['fields']['province_1']['table'] = 'location';
  $handler->display->display_options['fields']['province_1']['field'] = 'province';
  $handler->display->display_options['fields']['province_1']['label'] = '';
  $handler->display->display_options['fields']['province_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['province_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['province_1']['style'] = 'code';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['label'] = 'province';
  $handler->display->display_options['fields']['province']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['province']['alter']['text'] = '[province],[province_1]';
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['group_column'] = 'entity_id';
  /* Field: Content: Featured Date */
  $handler->display->display_options['fields']['field_featured_date']['id'] = 'field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['field'] = 'field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Featured Date (field_featured_date) */
  $handler->display->display_options['sorts']['field_featured_date_value']['id'] = 'field_featured_date_value';
  $handler->display->display_options['sorts']['field_featured_date_value']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['sorts']['field_featured_date_value']['field'] = 'field_featured_date_value';
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
    1 => '1',
    3 => '3',
  );
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  $handler->display->display_options['path'] = 'export/can-tho-toc';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = 'category';
  $handler->display->display_options['fields']['field_category']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_category']['alter']['text'] = '[field_category]  :';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  /* Field: Content: Cần Thợ */
  $handler->display->display_options['fields']['field_can_tho']['id'] = 'field_can_tho';
  $handler->display->display_options['fields']['field_can_tho']['table'] = 'field_data_field_can_tho';
  $handler->display->display_options['fields']['field_can_tho']['field'] = 'field_can_tho';
  $handler->display->display_options['fields']['field_can_tho']['label'] = 'can tho';
  $handler->display->display_options['fields']['field_can_tho']['element_label_colon'] = FALSE;
  /* Field: Content: Thợ Làm */
  $handler->display->display_options['fields']['field_tho_lam']['id'] = 'field_tho_lam';
  $handler->display->display_options['fields']['field_tho_lam']['table'] = 'field_data_field_tho_lam';
  $handler->display->display_options['fields']['field_tho_lam']['field'] = 'field_tho_lam';
  $handler->display->display_options['fields']['field_tho_lam']['label'] = 'tho lam';
  $handler->display->display_options['fields']['field_tho_lam']['element_label_colon'] = FALSE;
  /* Field: Content: Kinh Nghiệm */
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['id'] = 'field_kinh_nghiem_toc';
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['table'] = 'field_data_field_kinh_nghiem_toc';
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['field'] = 'field_kinh_nghiem_toc';
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['label'] = 'kinh nghiem';
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['delta_offset'] = '0';
  /* Field: Content: Cần License */
  $handler->display->display_options['fields']['field_can_license']['id'] = 'field_can_license';
  $handler->display->display_options['fields']['field_can_license']['table'] = 'field_data_field_can_license';
  $handler->display->display_options['fields']['field_can_license']['field'] = 'field_can_license';
  $handler->display->display_options['fields']['field_can_license']['label'] = 'can license';
  $handler->display->display_options['fields']['field_can_license']['element_label_colon'] = FALSE;
  /* Field: Content: Khu Vực */
  $handler->display->display_options['fields']['field_khu_vuc']['id'] = 'field_khu_vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['table'] = 'field_data_field_khu_vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['field'] = 'field_khu_vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_khu_vuc']['delta_offset'] = '0';
  /* Field: Content: Tiền Lương */
  $handler->display->display_options['fields']['field_tien_luong']['id'] = 'field_tien_luong';
  $handler->display->display_options['fields']['field_tien_luong']['table'] = 'field_data_field_tien_luong';
  $handler->display->display_options['fields']['field_tien_luong']['field'] = 'field_tien_luong';
  $handler->display->display_options['fields']['field_tien_luong']['type'] = 'select_or_other_formatter';
  /* Field: Content: Contact Name */
  $handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['label'] = 'contact name';
  $handler->display->display_options['fields']['field_contact_name']['element_label_colon'] = FALSE;
  /* Field: Content: Contact Phone */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['group_column'] = 'entity_id';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province_1']['id'] = 'province_1';
  $handler->display->display_options['fields']['province_1']['table'] = 'location';
  $handler->display->display_options['fields']['province_1']['field'] = 'province';
  $handler->display->display_options['fields']['province_1']['label'] = '';
  $handler->display->display_options['fields']['province_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['province_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['province_1']['style'] = 'code';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['label'] = 'province';
  $handler->display->display_options['fields']['province']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['province']['alter']['text'] = '[province],[province_1]';
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['group_column'] = 'entity_id';
  /* Field: Content: Featured Date */
  $handler->display->display_options['fields']['field_featured_date']['id'] = 'field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['field'] = 'field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Featured Date (field_featured_date) */
  $handler->display->display_options['sorts']['field_featured_date_value']['id'] = 'field_featured_date_value';
  $handler->display->display_options['sorts']['field_featured_date_value']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['sorts']['field_featured_date_value']['field'] = 'field_featured_date_value';
  $handler->display->display_options['sorts']['field_featured_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    1 => '1',
    3 => '3',
  );
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  $handler->display->display_options['path'] = 'export-can-tho-toc';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
  );
  $translatables['can_tho_toc'] = array(
    t('Master'),
    t('All Listing'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No Results found for your state'),
    t('Posting Title'),
    t('save'),
    t('[field_category]  :'),
    t('Biet Lam'),
    t('Can License'),
    t('Khu Vực'),
    t('Tien Lưong'),
    t('[province],[province_1]'),
    t('[field_image_1] images available'),
    t('Posted'),
    t('can tho toc'),
    t('Can Tho Toc Featured Listing'),
    t('Featured Listing'),
    t('export can tho toc'),
    t('title'),
    t('category'),
    t('can-tho'),
    t('tho lam'),
    t('kinh nghiem'),
    t('can license'),
    t('Tiền Lương'),
    t('contact name'),
    t('Contact Phone'),
    t('province'),
    t('Updated date'),
    t('body'),
    t('Featured Date'),
    t('Data export'),
    t('can tho'),
  );
  $export['can_tho_toc'] = $view;

  $view = new view();
  $view->name = 'common_field_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Common Field Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Common Field Listing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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

  /* Display: Common Field Listing */
  $handler = $view->new_display('block', 'Common Field Listing', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Contact Name */
  $handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['label'] = 'CALL';
  /* Field: Content: Contact Phone */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['label'] = '';
  $handler->display->display_options['fields']['field_contact_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Alternative Phone */
  $handler->display->display_options['fields']['field_alternative_phone']['id'] = 'field_alternative_phone';
  $handler->display->display_options['fields']['field_alternative_phone']['table'] = 'field_data_field_alternative_phone';
  $handler->display->display_options['fields']['field_alternative_phone']['field'] = 'field_alternative_phone';
  $handler->display->display_options['fields']['field_alternative_phone']['label'] = '';
  $handler->display->display_options['fields']['field_alternative_phone']['element_label_colon'] = FALSE;
  /* Field: Location: Address */
  $handler->display->display_options['fields']['address']['id'] = 'address';
  $handler->display->display_options['fields']['address']['table'] = 'location';
  $handler->display->display_options['fields']['address']['field'] = 'address';
  $handler->display->display_options['fields']['address']['label'] = '';
  $handler->display->display_options['fields']['address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['address']['hide'] = array(
    'additional' => 'additional',
    'country' => 'country',
    'locpick' => 'locpick',
    'coords' => 'coords',
    'name' => 0,
    'street' => 0,
    'city' => 0,
    'province' => 0,
    'postal_code' => 0,
    'province_name' => 0,
    'country_name' => 0,
    'map_link' => 0,
  );
  $handler->display->display_options['fields']['address']['exclude_cck'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Specific Items Listing */
  $handler = $view->new_display('block', 'Specific Items Listing', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Specific Items Listing';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Cần Thợ */
  $handler->display->display_options['fields']['field_can_tho']['id'] = 'field_can_tho';
  $handler->display->display_options['fields']['field_can_tho']['table'] = 'field_data_field_can_tho';
  $handler->display->display_options['fields']['field_can_tho']['field'] = 'field_can_tho';
  $handler->display->display_options['fields']['field_can_tho']['label'] = 'Can Tho';
  $handler->display->display_options['fields']['field_can_tho']['hide_empty'] = TRUE;
  /* Field: Content: Tiền Lương */
  $handler->display->display_options['fields']['field_tien_luong']['id'] = 'field_tien_luong';
  $handler->display->display_options['fields']['field_tien_luong']['table'] = 'field_data_field_tien_luong';
  $handler->display->display_options['fields']['field_tien_luong']['field'] = 'field_tien_luong';
  $handler->display->display_options['fields']['field_tien_luong']['label'] = 'Tien Luong';
  $handler->display->display_options['fields']['field_tien_luong']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tien_luong']['type'] = 'select_or_other_formatter';
  /* Field: Content: Kinh Nghiệm */
  $handler->display->display_options['fields']['field_kinh_nghiem']['id'] = 'field_kinh_nghiem';
  $handler->display->display_options['fields']['field_kinh_nghiem']['table'] = 'field_data_field_kinh_nghiem';
  $handler->display->display_options['fields']['field_kinh_nghiem']['field'] = 'field_kinh_nghiem';
  $handler->display->display_options['fields']['field_kinh_nghiem']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_kinh_nghiem']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_kinh_nghiem']['delta_offset'] = '0';
  /* Field: Content: Kinh Nghiệm */
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['id'] = 'field_kinh_nghiem_toc';
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['table'] = 'field_data_field_kinh_nghiem_toc';
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['field'] = 'field_kinh_nghiem_toc';
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_kinh_nghiem_toc']['delta_offset'] = '0';
  /* Field: Content: Thợ Làm */
  $handler->display->display_options['fields']['field_tho_lam']['id'] = 'field_tho_lam';
  $handler->display->display_options['fields']['field_tho_lam']['table'] = 'field_data_field_tho_lam';
  $handler->display->display_options['fields']['field_tho_lam']['field'] = 'field_tho_lam';
  $handler->display->display_options['fields']['field_tho_lam']['label'] = 'Tho Lam';
  $handler->display->display_options['fields']['field_tho_lam']['hide_empty'] = TRUE;
  /* Field: Content: Cần License */
  $handler->display->display_options['fields']['field_can_license']['id'] = 'field_can_license';
  $handler->display->display_options['fields']['field_can_license']['table'] = 'field_data_field_can_license';
  $handler->display->display_options['fields']['field_can_license']['field'] = 'field_can_license';
  $handler->display->display_options['fields']['field_can_license']['label'] = 'Can License';
  $handler->display->display_options['fields']['field_can_license']['hide_empty'] = TRUE;
  /* Field: Content: Khu Vực */
  $handler->display->display_options['fields']['field_khu_vuc']['id'] = 'field_khu_vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['table'] = 'field_data_field_khu_vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['field'] = 'field_khu_vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['label'] = 'Khu Vuc';
  $handler->display->display_options['fields']['field_khu_vuc']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_khu_vuc']['delta_offset'] = '0';
  /* Field: Content: # Ghế */
  $handler->display->display_options['fields']['field_ghe']['id'] = 'field_ghe';
  $handler->display->display_options['fields']['field_ghe']['table'] = 'field_data_field_ghe';
  $handler->display->display_options['fields']['field_ghe']['field'] = 'field_ghe';
  $handler->display->display_options['fields']['field_ghe']['label'] = '# Ghe';
  $handler->display->display_options['fields']['field_ghe']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ghe']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_ghe']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Khu Vực */
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['id'] = 'field_khu_vuc_sang_tiem_nails';
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['table'] = 'field_data_field_khu_vuc_sang_tiem_nails';
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['field'] = 'field_khu_vuc_sang_tiem_nails';
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['label'] = 'Khu Vuc';
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['delta_offset'] = '0';
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
  /* Field: Content: Tiem SQ/FT */
  $handler->display->display_options['fields']['field_tiem_sq_ft']['id'] = 'field_tiem_sq_ft';
  $handler->display->display_options['fields']['field_tiem_sq_ft']['table'] = 'field_data_field_tiem_sq_ft';
  $handler->display->display_options['fields']['field_tiem_sq_ft']['field'] = 'field_tiem_sq_ft';
  $handler->display->display_options['fields']['field_tiem_sq_ft']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tiem_sq_ft']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_tiem_sq_ft']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: # Bàn */
  $handler->display->display_options['fields']['field_ban']['id'] = 'field_ban';
  $handler->display->display_options['fields']['field_ban']['table'] = 'field_data_field_ban';
  $handler->display->display_options['fields']['field_ban']['field'] = 'field_ban';
  $handler->display->display_options['fields']['field_ban']['label'] = '# Ban';
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
  $handler->display->display_options['fields']['field_tho']['label'] = '# Tho';
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
  $handler->display->display_options['fields']['field_phong_wax']['label'] = 'Phong Wax? ';
  $handler->display->display_options['fields']['field_phong_wax']['hide_empty'] = TRUE;
  /* Field: Content: Phòng Massage? */
  $handler->display->display_options['fields']['field_phong_massage']['id'] = 'field_phong_massage';
  $handler->display->display_options['fields']['field_phong_massage']['table'] = 'field_data_field_phong_massage';
  $handler->display->display_options['fields']['field_phong_massage']['field'] = 'field_phong_massage';
  $handler->display->display_options['fields']['field_phong_massage']['label'] = 'Phong Massage?';
  $handler->display->display_options['fields']['field_phong_massage']['hide_empty'] = TRUE;
  /* Field: Content: Phòng Facial?  */
  $handler->display->display_options['fields']['field_phong_facial']['id'] = 'field_phong_facial';
  $handler->display->display_options['fields']['field_phong_facial']['table'] = 'field_data_field_phong_facial';
  $handler->display->display_options['fields']['field_phong_facial']['field'] = 'field_phong_facial';
  $handler->display->display_options['fields']['field_phong_facial']['label'] = 'Phong Facial? ';
  $handler->display->display_options['fields']['field_phong_facial']['hide_empty'] = TRUE;
  /* Field: Content: Phòng Tan? */
  $handler->display->display_options['fields']['field_phong_tan']['id'] = 'field_phong_tan';
  $handler->display->display_options['fields']['field_phong_tan']['table'] = 'field_data_field_phong_tan';
  $handler->display->display_options['fields']['field_phong_tan']['field'] = 'field_phong_tan';
  $handler->display->display_options['fields']['field_phong_tan']['label'] = 'Phong Tan?';
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
  $handler->display->display_options['fields']['field_price_gia_ban_']['label'] = 'Price $/Gia Ban?';
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
  /* Field: Content: Monthly Rent? */
  $handler->display->display_options['fields']['field_monthly_rent']['id'] = 'field_monthly_rent';
  $handler->display->display_options['fields']['field_monthly_rent']['table'] = 'field_data_field_monthly_rent';
  $handler->display->display_options['fields']['field_monthly_rent']['field'] = 'field_monthly_rent';
  $handler->display->display_options['fields']['field_monthly_rent']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_monthly_rent']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_monthly_rent']['settings'] = array(
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Title */
  $handler = $view->new_display('block', 'Title', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Title';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $translatables['common_field_listing'] = array(
    t('Master'),
    t('Common Field Listing'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('CALL'),
    t('All'),
    t('Specific Items Listing'),
    t('Can Tho'),
    t('Tien Luong'),
    t('Kinh Nghiệm'),
    t('Tho Lam'),
    t('Can License'),
    t('Khu Vuc'),
    t('# Ghe'),
    t('Monthly Rent'),
    t('Tiem SQ/FT'),
    t('# Ban'),
    t('# Tho'),
    t('Phong Wax? '),
    t('Phong Massage?'),
    t('Phong Facial? '),
    t('Phong Tan?'),
    t('Trong Khu Shopping Center'),
    t('Price $/Gia Ban?'),
    t('Type of Business'),
    t('Monthly Income?'),
    t('Monthly Rent?'),
    t('How Many SQ/FT?'),
    t('Sale Price?'),
    t('Title'),
    t('Post date'),
  );
  $export['common_field_listing'] = $view;

  $view = new view();
  $view->name = 'listing_slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Listing Slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Listing Slider';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'bxslider_ths';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'general' => array(
      'mode' => 'horizontal',
      'speed' => '500',
      'slideMargin' => '0',
      'startSlide' => '0',
      'randomStart' => 0,
      'infiniteLoop' => 0,
      'hideControlOnEnd' => 1,
      'easing' => '',
      'captions' => 0,
      'ticker' => 0,
      'tickerHover' => 0,
      'adaptiveHeight' => 0,
      'adaptiveHeightSpeed' => '500',
      'video' => 0,
      'responsive' => 1,
      'useCSS' => 1,
      'preloadImages' => 0,
      'swipeThreshold' => '50',
      'oneToOneTouch' => 1,
      'preventDefaultSwipeX' => 1,
      'preventDefaultSwipeY' => 0,
    ),
    'controls' => array(
      'controls' => 1,
      'nextText' => 'Next',
      'prevText' => 'Prev',
      'nextSelector' => '',
      'prevSelector' => '',
      'autoControls' => 0,
      'startText' => 'Start',
      'stopText' => 'Stop',
      'autoControlsCombine' => 0,
      'autoControlsSelector' => '',
    ),
    'auto' => array(
      'auto' => 0,
      'pause' => '4000',
      'autoStart' => 1,
      'autoDirection' => 'next',
      'autoHover' => 0,
      'autoDelay' => '0',
    ),
    'carousel' => array(
      'minSlides' => '1',
      'maxSlides' => '1',
      'moveSlides' => '0',
      'slideWidth' => '0',
    ),
    'thumbnail_slider' => array(
      'thumbnail_style' => 'thumbnail',
      'general' => array(
        'mode' => 'horizontal',
        'speed' => '500',
        'slideMargin' => '0',
        'startSlide' => '0',
        'randomStart' => 0,
        'infiniteLoop' => 1,
        'hideControlOnEnd' => 0,
        'easing' => '',
        'captions' => 0,
        'ticker' => 0,
        'tickerHover' => 0,
        'adaptiveHeight' => 0,
        'adaptiveHeightSpeed' => '500',
        'responsive' => 1,
        'useCSS' => 1,
        'preloadImages' => 0,
        'swipeThreshold' => '50',
        'oneToOneTouch' => 1,
        'preventDefaultSwipeX' => 1,
        'preventDefaultSwipeY' => 0,
      ),
      'pager' => array(
        'pager' => '',
      ),
      'controls' => array(
        'controls' => 1,
        'nextText' => 'Next',
        'prevText' => 'Prev',
        'autoControls' => 0,
        'startText' => 'Start',
        'stopText' => 'Stop',
        'autoControlsCombine' => 0,
      ),
      'auto' => array(
        'auto' => 0,
        'pause' => '4000',
        'autoStart' => 1,
        'autoDirection' => 'next',
        'autoHover' => 0,
        'autoDelay' => '0',
      ),
      'carousel' => array(
        'minSlides' => '4',
        'maxSlides' => '4',
        'moveSlides' => '1',
      ),
    ),
    'colorbox' => array(
      'enable' => FALSE,
      'image_style' => 'large',
      'slideshow' => FALSE,
      'slideshow_speed' => 2000,
      'transition' => 'elastic',
      'transition_speed' => 350,
    ),
  );
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['listing_slider'] = array(
    t('Master'),
    t('Listing Slider'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Image'),
    t('Block'),
  );
  $export['listing_slider'] = $view;

  $view = new view();
  $view->name = 'quang_cao_rao_vat';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Quang cao & rao vat';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Listing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
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
  $handler->display->display_options['fields']['title']['label'] = 'Posting Title';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
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
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  /* Field: Content: Contact Name */
  $handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['label'] = 'Contact Information';
  $handler->display->display_options['fields']['field_contact_name']['element_label_colon'] = FALSE;
  /* Field: Content: Contact Phone */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['label'] = '';
  $handler->display->display_options['fields']['field_contact_phone']['element_label_colon'] = FALSE;
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province_1']['id'] = 'province_1';
  $handler->display->display_options['fields']['province_1']['table'] = 'location';
  $handler->display->display_options['fields']['province_1']['field'] = 'province';
  $handler->display->display_options['fields']['province_1']['label'] = '';
  $handler->display->display_options['fields']['province_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['province_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['province_1']['style'] = 'code';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['label'] = '';
  $handler->display->display_options['fields']['province']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['province']['alter']['text'] = '[province],[province_1]';
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Image) */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_1']['alter']['text'] = ' [field_image_1] images available';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['separator'] = ', ';
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted';
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
    7 => '7',
  );
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  /* Filter criterion: Content: Featured Date (field_featured_date) */
  $handler->display->display_options['filters']['field_featured_date_value']['id'] = 'field_featured_date_value';
  $handler->display->display_options['filters']['field_featured_date_value']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['filters']['field_featured_date_value']['field'] = 'field_featured_date_value';
  $handler->display->display_options['filters']['field_featured_date_value']['operator'] = 'empty';
  /* Filter criterion: Location: Province */
  $handler->display->display_options['filters']['province']['id'] = 'province';
  $handler->display->display_options['filters']['province']['table'] = 'location';
  $handler->display->display_options['filters']['province']['field'] = 'province';
  $handler->display->display_options['filters']['province']['value'] = 'AL';
  $handler->display->display_options['filters']['province']['type'] = 'select';

  /* Display: quang cao & rao vat */
  $handler = $view->new_display('page', 'quang cao & rao vat', 'page');
  $handler->display->display_options['path'] = 'quang-cao-rao-vat';

  /* Display: Featured quang cao & rao vat */
  $handler = $view->new_display('block', 'Featured quang cao & rao vat', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Listing';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  /* Field: Content: Contact Name */
  $handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['label'] = '';
  $handler->display->display_options['fields']['field_contact_name']['element_label_colon'] = FALSE;
  /* Field: Content: Contact Phone */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['label'] = '';
  $handler->display->display_options['fields']['field_contact_phone']['element_label_colon'] = FALSE;
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province_1']['id'] = 'province_1';
  $handler->display->display_options['fields']['province_1']['table'] = 'location';
  $handler->display->display_options['fields']['province_1']['field'] = 'province';
  $handler->display->display_options['fields']['province_1']['label'] = '';
  $handler->display->display_options['fields']['province_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['province_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['province_1']['style'] = 'code';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['label'] = '';
  $handler->display->display_options['fields']['province']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['province']['alter']['text'] = '[province],[province_1]';
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Image) */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_1']['alter']['text'] = ' [field_image_1] images available';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['separator'] = ', ';
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
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
    7 => '7',
  );
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  /* Filter criterion: Content: Featured Date (field_featured_date) */
  $handler->display->display_options['filters']['field_featured_date_value']['id'] = 'field_featured_date_value';
  $handler->display->display_options['filters']['field_featured_date_value']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['filters']['field_featured_date_value']['field'] = 'field_featured_date_value';
  $handler->display->display_options['filters']['field_featured_date_value']['operator'] = 'not empty';
  /* Filter criterion: Location: Province */
  $handler->display->display_options['filters']['province']['id'] = 'province';
  $handler->display->display_options['filters']['province']['table'] = 'location';
  $handler->display->display_options['filters']['province']['field'] = 'province';
  $handler->display->display_options['filters']['province']['value'] = 'AL';
  $handler->display->display_options['filters']['province']['type'] = 'select';

  /* Display: export quang cao & rao vat */
  $handler = $view->new_display('page', 'export quang cao & rao vat', 'page_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_category' => 'field_category',
    'field_contact_name' => 'field_contact_name',
    'field_contact_phone' => 'field_contact_phone',
    'province_1' => 'province_1',
    'province' => 'province',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'province_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'province' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = 'category';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  /* Field: Content: Contact Name */
  $handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['label'] = 'contact name';
  $handler->display->display_options['fields']['field_contact_name']['element_label_colon'] = FALSE;
  /* Field: Content: Contact Phone */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['label'] = 'contact phone';
  $handler->display->display_options['fields']['field_contact_phone']['element_label_colon'] = FALSE;
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province_1']['id'] = 'province_1';
  $handler->display->display_options['fields']['province_1']['table'] = 'location';
  $handler->display->display_options['fields']['province_1']['field'] = 'province';
  $handler->display->display_options['fields']['province_1']['label'] = '';
  $handler->display->display_options['fields']['province_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['province_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['province_1']['style'] = 'code';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['label'] = 'province';
  $handler->display->display_options['fields']['province']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['province']['alter']['text'] = '[province],[province_1]';
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'update date';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Featured Date */
  $handler->display->display_options['fields']['field_featured_date']['id'] = 'field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['field'] = 'field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Featured Date (field_featured_date) */
  $handler->display->display_options['sorts']['field_featured_date_value']['id'] = 'field_featured_date_value';
  $handler->display->display_options['sorts']['field_featured_date_value']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['sorts']['field_featured_date_value']['field'] = 'field_featured_date_value';
  $handler->display->display_options['sorts']['field_featured_date_value']['order'] = 'DESC';
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
    7 => '7',
  );
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  $handler->display->display_options['path'] = 'export/quang-cao-rao-vat';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = 'category';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  /* Field: Content: Contact Name */
  $handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['label'] = 'contact name';
  $handler->display->display_options['fields']['field_contact_name']['element_label_colon'] = FALSE;
  /* Field: Content: Contact Phone */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['label'] = 'contact phone';
  $handler->display->display_options['fields']['field_contact_phone']['element_label_colon'] = FALSE;
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province_1']['id'] = 'province_1';
  $handler->display->display_options['fields']['province_1']['table'] = 'location';
  $handler->display->display_options['fields']['province_1']['field'] = 'province';
  $handler->display->display_options['fields']['province_1']['label'] = '';
  $handler->display->display_options['fields']['province_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['province_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['province_1']['style'] = 'code';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['label'] = 'province';
  $handler->display->display_options['fields']['province']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['province']['alter']['text'] = '[province],[province_1]';
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'update date';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Featured Date */
  $handler->display->display_options['fields']['field_featured_date']['id'] = 'field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['field'] = 'field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Featured Date (field_featured_date) */
  $handler->display->display_options['sorts']['field_featured_date_value']['id'] = 'field_featured_date_value';
  $handler->display->display_options['sorts']['field_featured_date_value']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['sorts']['field_featured_date_value']['field'] = 'field_featured_date_value';
  $handler->display->display_options['sorts']['field_featured_date_value']['order'] = 'DESC';
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
    7 => '7',
  );
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  $handler->display->display_options['path'] = 'export-quang-cao-rao-vat';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
  );
  $translatables['quang_cao_rao_vat'] = array(
    t('Master'),
    t('All Listing'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No Results found for your state'),
    t('Posting Title'),
    t('save'),
    t('Contact Information'),
    t('[province],[province_1]'),
    t(' [field_image_1] images available'),
    t('Posted'),
    t('quang cao & rao vat'),
    t('Featured quang cao & rao vat'),
    t('Featured Listing'),
    t('export quang cao & rao vat'),
    t('title'),
    t('category'),
    t('contact name'),
    t('contact phone'),
    t('province'),
    t('update date'),
    t('Featured Date'),
    t('Data export'),
  );
  $export['quang_cao_rao_vat'] = $view;

  $view = new view();
  $view->name = 'sang_tiem_nails';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sang Tiem Nails';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Listing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
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
  $handler->display->display_options['fields']['title']['label'] = 'Posting Title';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
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
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  /* Field: Content: Khu Vực */
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['id'] = 'field_khu_vuc_sang_tiem_nails';
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['table'] = 'field_data_field_khu_vuc_sang_tiem_nails';
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['field'] = 'field_khu_vuc_sang_tiem_nails';
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['label'] = 'Khu Vuc';
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['delta_offset'] = '0';
  /* Field: Content: # Ghế */
  $handler->display->display_options['fields']['field_ghe']['id'] = 'field_ghe';
  $handler->display->display_options['fields']['field_ghe']['table'] = 'field_data_field_ghe';
  $handler->display->display_options['fields']['field_ghe']['field'] = 'field_ghe';
  $handler->display->display_options['fields']['field_ghe']['label'] = '# Ghe';
  $handler->display->display_options['fields']['field_ghe']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ghe']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_ghe']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Monthly Rent */
  $handler->display->display_options['fields']['field_monthly_rent_sang_tiem']['id'] = 'field_monthly_rent_sang_tiem';
  $handler->display->display_options['fields']['field_monthly_rent_sang_tiem']['table'] = 'field_data_field_monthly_rent_sang_tiem';
  $handler->display->display_options['fields']['field_monthly_rent_sang_tiem']['field'] = 'field_monthly_rent_sang_tiem';
  $handler->display->display_options['fields']['field_monthly_rent_sang_tiem']['label'] = 'Monthly rent';
  $handler->display->display_options['fields']['field_monthly_rent_sang_tiem']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_monthly_rent_sang_tiem']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Tiem SQ/FT */
  $handler->display->display_options['fields']['field_tiem_sq_ft']['id'] = 'field_tiem_sq_ft';
  $handler->display->display_options['fields']['field_tiem_sq_ft']['table'] = 'field_data_field_tiem_sq_ft';
  $handler->display->display_options['fields']['field_tiem_sq_ft']['field'] = 'field_tiem_sq_ft';
  $handler->display->display_options['fields']['field_tiem_sq_ft']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tiem_sq_ft']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: # Bàn */
  $handler->display->display_options['fields']['field_ban']['id'] = 'field_ban';
  $handler->display->display_options['fields']['field_ban']['table'] = 'field_data_field_ban';
  $handler->display->display_options['fields']['field_ban']['field'] = 'field_ban';
  $handler->display->display_options['fields']['field_ban']['label'] = '# Ban';
  $handler->display->display_options['fields']['field_ban']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_ban']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: # Thợ */
  $handler->display->display_options['fields']['field_tho']['id'] = 'field_tho';
  $handler->display->display_options['fields']['field_tho']['table'] = 'field_data_field_tho';
  $handler->display->display_options['fields']['field_tho']['field'] = 'field_tho';
  $handler->display->display_options['fields']['field_tho']['label'] = '# Tho';
  $handler->display->display_options['fields']['field_tho']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_tho']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Phòng Wax?  */
  $handler->display->display_options['fields']['field_phong_wax']['id'] = 'field_phong_wax';
  $handler->display->display_options['fields']['field_phong_wax']['table'] = 'field_data_field_phong_wax';
  $handler->display->display_options['fields']['field_phong_wax']['field'] = 'field_phong_wax';
  $handler->display->display_options['fields']['field_phong_wax']['label'] = 'Phone Wax';
  /* Field: Content: Phòng Massage? */
  $handler->display->display_options['fields']['field_phong_massage']['id'] = 'field_phong_massage';
  $handler->display->display_options['fields']['field_phong_massage']['table'] = 'field_data_field_phong_massage';
  $handler->display->display_options['fields']['field_phong_massage']['field'] = 'field_phong_massage';
  $handler->display->display_options['fields']['field_phong_massage']['label'] = 'Phone Message';
  /* Field: Content: Phòng Facial?  */
  $handler->display->display_options['fields']['field_phong_facial']['id'] = 'field_phong_facial';
  $handler->display->display_options['fields']['field_phong_facial']['table'] = 'field_data_field_phong_facial';
  $handler->display->display_options['fields']['field_phong_facial']['field'] = 'field_phong_facial';
  $handler->display->display_options['fields']['field_phong_facial']['label'] = 'Phone Facial';
  /* Field: Content: Phòng Tan? */
  $handler->display->display_options['fields']['field_phong_tan']['id'] = 'field_phong_tan';
  $handler->display->display_options['fields']['field_phong_tan']['table'] = 'field_data_field_phong_tan';
  $handler->display->display_options['fields']['field_phong_tan']['field'] = 'field_phong_tan';
  $handler->display->display_options['fields']['field_phong_tan']['label'] = 'Phone Tan';
  /* Field: Content: Trong Khu Shopping Center */
  $handler->display->display_options['fields']['field_trong_khu_shopping_center']['id'] = 'field_trong_khu_shopping_center';
  $handler->display->display_options['fields']['field_trong_khu_shopping_center']['table'] = 'field_data_field_trong_khu_shopping_center';
  $handler->display->display_options['fields']['field_trong_khu_shopping_center']['field'] = 'field_trong_khu_shopping_center';
  $handler->display->display_options['fields']['field_trong_khu_shopping_center']['label'] = 'Shopping Center';
  $handler->display->display_options['fields']['field_trong_khu_shopping_center']['type'] = 'select_or_other_formatter';
  /* Field: Content: Price $/Giá Bán? */
  $handler->display->display_options['fields']['field_price_gia_ban_']['id'] = 'field_price_gia_ban_';
  $handler->display->display_options['fields']['field_price_gia_ban_']['table'] = 'field_data_field_price_gia_ban_';
  $handler->display->display_options['fields']['field_price_gia_ban_']['field'] = 'field_price_gia_ban_';
  $handler->display->display_options['fields']['field_price_gia_ban_']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Contact Name */
  $handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['label'] = 'Contact Information';
  /* Field: Content: Contact Phone */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['label'] = '';
  $handler->display->display_options['fields']['field_contact_phone']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['province_1']['label'] = '';
  $handler->display->display_options['fields']['province_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['province_1']['alter']['text'] = '[province_1],[province]';
  $handler->display->display_options['fields']['province_1']['element_label_colon'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Image) */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '[field_image] Images Available';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['separator'] = ', ';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_1']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_image_1']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted';
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  /* Filter criterion: Content: Featured Date (field_featured_date) */
  $handler->display->display_options['filters']['field_featured_date_value']['id'] = 'field_featured_date_value';
  $handler->display->display_options['filters']['field_featured_date_value']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['filters']['field_featured_date_value']['field'] = 'field_featured_date_value';
  $handler->display->display_options['filters']['field_featured_date_value']['operator'] = 'not empty';
  /* Filter criterion: Location: Province */
  $handler->display->display_options['filters']['province']['id'] = 'province';
  $handler->display->display_options['filters']['province']['table'] = 'location';
  $handler->display->display_options['filters']['province']['field'] = 'province';
  $handler->display->display_options['filters']['province']['value'] = 'AL';
  $handler->display->display_options['filters']['province']['type'] = 'select';

  /* Display: sang tiem nails */
  $handler = $view->new_display('page', 'sang tiem nails', 'page');
  $handler->display->display_options['path'] = 'sang-tiem-nails';

  /* Display: featured sang tiem nails  */
  $handler = $view->new_display('block', 'featured sang tiem nails ', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Listing';
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
    4 => '4',
  );
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  /* Filter criterion: Content: Featured Date (field_featured_date) */
  $handler->display->display_options['filters']['field_featured_date_value']['id'] = 'field_featured_date_value';
  $handler->display->display_options['filters']['field_featured_date_value']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['filters']['field_featured_date_value']['field'] = 'field_featured_date_value';
  $handler->display->display_options['filters']['field_featured_date_value']['operator'] = 'not empty';
  /* Filter criterion: Location: Province */
  $handler->display->display_options['filters']['province']['id'] = 'province';
  $handler->display->display_options['filters']['province']['table'] = 'location';
  $handler->display->display_options['filters']['province']['field'] = 'province';
  $handler->display->display_options['filters']['province']['value'] = 'AL';
  $handler->display->display_options['filters']['province']['type'] = 'select';

  /* Display: export sang tiem nails */
  $handler = $view->new_display('page', 'export sang tiem nails', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nothing' => 'nothing',
    'field_category' => 'field_category',
    'field_khu_vuc_sang_tiem_nails' => 'field_khu_vuc_sang_tiem_nails',
    'field_ghe' => 'field_ghe',
    'field_monthly_rent_sang_tiem' => 'field_monthly_rent_sang_tiem',
    'field_tiem_sq_ft' => 'field_tiem_sq_ft',
    'field_ban' => 'field_ban',
    'field_tho' => 'field_tho',
    'field_phong_wax' => 'field_phong_wax',
    'field_phong_massage' => 'field_phong_massage',
    'field_phong_facial' => 'field_phong_facial',
    'field_phong_tan' => 'field_phong_tan',
    'field_trong_khu_shopping_center' => 'field_trong_khu_shopping_center',
    'field_price_gia_ban_' => 'field_price_gia_ban_',
    'field_contact_name' => 'field_contact_name',
    'field_contact_phone' => 'field_contact_phone',
    'province' => 'province',
    'province_1' => 'province_1',
    'changed' => 'changed',
    'field_image' => 'field_image',
    'field_image_1' => 'field_image_1',
    'body' => 'body',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_khu_vuc_sang_tiem_nails' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ghe' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_monthly_rent_sang_tiem' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tiem_sq_ft' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ban' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tho' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phong_wax' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phong_massage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phong_facial' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phong_tan' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_trong_khu_shopping_center' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_price_gia_ban_' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'province' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'province_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = 'category';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  /* Field: Content: Khu Vực */
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['id'] = 'field_khu_vuc_sang_tiem_nails';
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['table'] = 'field_data_field_khu_vuc_sang_tiem_nails';
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['field'] = 'field_khu_vuc_sang_tiem_nails';
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['label'] = 'khu vuc';
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['delta_offset'] = '0';
  /* Field: Content: # Ghế */
  $handler->display->display_options['fields']['field_ghe']['id'] = 'field_ghe';
  $handler->display->display_options['fields']['field_ghe']['table'] = 'field_data_field_ghe';
  $handler->display->display_options['fields']['field_ghe']['field'] = 'field_ghe';
  $handler->display->display_options['fields']['field_ghe']['label'] = '# ghe';
  $handler->display->display_options['fields']['field_ghe']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ghe']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_ghe']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Monthly Rent */
  $handler->display->display_options['fields']['field_monthly_rent_sang_tiem']['id'] = 'field_monthly_rent_sang_tiem';
  $handler->display->display_options['fields']['field_monthly_rent_sang_tiem']['table'] = 'field_data_field_monthly_rent_sang_tiem';
  $handler->display->display_options['fields']['field_monthly_rent_sang_tiem']['field'] = 'field_monthly_rent_sang_tiem';
  $handler->display->display_options['fields']['field_monthly_rent_sang_tiem']['label'] = 'monthly rent';
  $handler->display->display_options['fields']['field_monthly_rent_sang_tiem']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_monthly_rent_sang_tiem']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Tiem SQ/FT */
  $handler->display->display_options['fields']['field_tiem_sq_ft']['id'] = 'field_tiem_sq_ft';
  $handler->display->display_options['fields']['field_tiem_sq_ft']['table'] = 'field_data_field_tiem_sq_ft';
  $handler->display->display_options['fields']['field_tiem_sq_ft']['field'] = 'field_tiem_sq_ft';
  $handler->display->display_options['fields']['field_tiem_sq_ft']['label'] = 'tiem sq/ft';
  $handler->display->display_options['fields']['field_tiem_sq_ft']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tiem_sq_ft']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: # Bàn */
  $handler->display->display_options['fields']['field_ban']['id'] = 'field_ban';
  $handler->display->display_options['fields']['field_ban']['table'] = 'field_data_field_ban';
  $handler->display->display_options['fields']['field_ban']['field'] = 'field_ban';
  $handler->display->display_options['fields']['field_ban']['label'] = '# ban';
  $handler->display->display_options['fields']['field_ban']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ban']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_ban']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: # Thợ */
  $handler->display->display_options['fields']['field_tho']['id'] = 'field_tho';
  $handler->display->display_options['fields']['field_tho']['table'] = 'field_data_field_tho';
  $handler->display->display_options['fields']['field_tho']['field'] = 'field_tho';
  $handler->display->display_options['fields']['field_tho']['label'] = '# tho';
  $handler->display->display_options['fields']['field_tho']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tho']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_tho']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Phòng Wax?  */
  $handler->display->display_options['fields']['field_phong_wax']['id'] = 'field_phong_wax';
  $handler->display->display_options['fields']['field_phong_wax']['table'] = 'field_data_field_phong_wax';
  $handler->display->display_options['fields']['field_phong_wax']['field'] = 'field_phong_wax';
  $handler->display->display_options['fields']['field_phong_wax']['label'] = 'phone wax';
  $handler->display->display_options['fields']['field_phong_wax']['element_label_colon'] = FALSE;
  /* Field: Content: Phòng Massage? */
  $handler->display->display_options['fields']['field_phong_massage']['id'] = 'field_phong_massage';
  $handler->display->display_options['fields']['field_phong_massage']['table'] = 'field_data_field_phong_massage';
  $handler->display->display_options['fields']['field_phong_massage']['field'] = 'field_phong_massage';
  $handler->display->display_options['fields']['field_phong_massage']['label'] = 'phone message';
  $handler->display->display_options['fields']['field_phong_massage']['element_label_colon'] = FALSE;
  /* Field: Content: Phòng Facial?  */
  $handler->display->display_options['fields']['field_phong_facial']['id'] = 'field_phong_facial';
  $handler->display->display_options['fields']['field_phong_facial']['table'] = 'field_data_field_phong_facial';
  $handler->display->display_options['fields']['field_phong_facial']['field'] = 'field_phong_facial';
  $handler->display->display_options['fields']['field_phong_facial']['label'] = 'phone facial';
  $handler->display->display_options['fields']['field_phong_facial']['element_label_colon'] = FALSE;
  /* Field: Content: Phòng Tan? */
  $handler->display->display_options['fields']['field_phong_tan']['id'] = 'field_phong_tan';
  $handler->display->display_options['fields']['field_phong_tan']['table'] = 'field_data_field_phong_tan';
  $handler->display->display_options['fields']['field_phong_tan']['field'] = 'field_phong_tan';
  $handler->display->display_options['fields']['field_phong_tan']['label'] = 'phone tan';
  $handler->display->display_options['fields']['field_phong_tan']['element_label_colon'] = FALSE;
  /* Field: Content: Trong Khu Shopping Center */
  $handler->display->display_options['fields']['field_trong_khu_shopping_center']['id'] = 'field_trong_khu_shopping_center';
  $handler->display->display_options['fields']['field_trong_khu_shopping_center']['table'] = 'field_data_field_trong_khu_shopping_center';
  $handler->display->display_options['fields']['field_trong_khu_shopping_center']['field'] = 'field_trong_khu_shopping_center';
  $handler->display->display_options['fields']['field_trong_khu_shopping_center']['label'] = '';
  $handler->display->display_options['fields']['field_trong_khu_shopping_center']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_trong_khu_shopping_center']['type'] = 'select_or_other_formatter';
  /* Field: Content: Price $/Giá Bán? */
  $handler->display->display_options['fields']['field_price_gia_ban_']['id'] = 'field_price_gia_ban_';
  $handler->display->display_options['fields']['field_price_gia_ban_']['table'] = 'field_data_field_price_gia_ban_';
  $handler->display->display_options['fields']['field_price_gia_ban_']['field'] = 'field_price_gia_ban_';
  $handler->display->display_options['fields']['field_price_gia_ban_']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Contact Name */
  $handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['label'] = 'contact name';
  $handler->display->display_options['fields']['field_contact_name']['element_label_colon'] = FALSE;
  /* Field: Content: Contact Phone */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['label'] = 'contact phone';
  $handler->display->display_options['fields']['field_contact_phone']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['province_1']['label'] = 'province';
  $handler->display->display_options['fields']['province_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['province_1']['alter']['text'] = '[province_1],[province]';
  $handler->display->display_options['fields']['province_1']['element_label_colon'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'update date';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Featured Date */
  $handler->display->display_options['fields']['field_featured_date']['id'] = 'field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['field'] = 'field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Featured Date (field_featured_date) */
  $handler->display->display_options['sorts']['field_featured_date_value']['id'] = 'field_featured_date_value';
  $handler->display->display_options['sorts']['field_featured_date_value']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['sorts']['field_featured_date_value']['field'] = 'field_featured_date_value';
  $handler->display->display_options['sorts']['field_featured_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    4 => '4',
  );
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  $handler->display->display_options['path'] = 'export/sang-tiem-nails';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = 'category';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  /* Field: Content: Khu Vực */
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['id'] = 'field_khu_vuc_sang_tiem_nails';
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['table'] = 'field_data_field_khu_vuc_sang_tiem_nails';
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['field'] = 'field_khu_vuc_sang_tiem_nails';
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['label'] = 'khu vuc';
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_khu_vuc_sang_tiem_nails']['delta_offset'] = '0';
  /* Field: Content: # Ghế */
  $handler->display->display_options['fields']['field_ghe']['id'] = 'field_ghe';
  $handler->display->display_options['fields']['field_ghe']['table'] = 'field_data_field_ghe';
  $handler->display->display_options['fields']['field_ghe']['field'] = 'field_ghe';
  $handler->display->display_options['fields']['field_ghe']['label'] = '# ghe';
  $handler->display->display_options['fields']['field_ghe']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ghe']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_ghe']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Monthly Rent */
  $handler->display->display_options['fields']['field_monthly_rent_sang_tiem']['id'] = 'field_monthly_rent_sang_tiem';
  $handler->display->display_options['fields']['field_monthly_rent_sang_tiem']['table'] = 'field_data_field_monthly_rent_sang_tiem';
  $handler->display->display_options['fields']['field_monthly_rent_sang_tiem']['field'] = 'field_monthly_rent_sang_tiem';
  $handler->display->display_options['fields']['field_monthly_rent_sang_tiem']['label'] = 'monthly rent';
  $handler->display->display_options['fields']['field_monthly_rent_sang_tiem']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_monthly_rent_sang_tiem']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Tiem SQ/FT */
  $handler->display->display_options['fields']['field_tiem_sq_ft']['id'] = 'field_tiem_sq_ft';
  $handler->display->display_options['fields']['field_tiem_sq_ft']['table'] = 'field_data_field_tiem_sq_ft';
  $handler->display->display_options['fields']['field_tiem_sq_ft']['field'] = 'field_tiem_sq_ft';
  $handler->display->display_options['fields']['field_tiem_sq_ft']['label'] = 'tiem sq/ft';
  $handler->display->display_options['fields']['field_tiem_sq_ft']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tiem_sq_ft']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: # Bàn */
  $handler->display->display_options['fields']['field_ban']['id'] = 'field_ban';
  $handler->display->display_options['fields']['field_ban']['table'] = 'field_data_field_ban';
  $handler->display->display_options['fields']['field_ban']['field'] = 'field_ban';
  $handler->display->display_options['fields']['field_ban']['label'] = '# ban';
  $handler->display->display_options['fields']['field_ban']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ban']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_ban']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: # Thợ */
  $handler->display->display_options['fields']['field_tho']['id'] = 'field_tho';
  $handler->display->display_options['fields']['field_tho']['table'] = 'field_data_field_tho';
  $handler->display->display_options['fields']['field_tho']['field'] = 'field_tho';
  $handler->display->display_options['fields']['field_tho']['label'] = '# tho';
  $handler->display->display_options['fields']['field_tho']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tho']['type'] = 'select_or_other_formatter';
  $handler->display->display_options['fields']['field_tho']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Phòng Wax?  */
  $handler->display->display_options['fields']['field_phong_wax']['id'] = 'field_phong_wax';
  $handler->display->display_options['fields']['field_phong_wax']['table'] = 'field_data_field_phong_wax';
  $handler->display->display_options['fields']['field_phong_wax']['field'] = 'field_phong_wax';
  $handler->display->display_options['fields']['field_phong_wax']['label'] = 'phone wax';
  $handler->display->display_options['fields']['field_phong_wax']['element_label_colon'] = FALSE;
  /* Field: Content: Phòng Massage? */
  $handler->display->display_options['fields']['field_phong_massage']['id'] = 'field_phong_massage';
  $handler->display->display_options['fields']['field_phong_massage']['table'] = 'field_data_field_phong_massage';
  $handler->display->display_options['fields']['field_phong_massage']['field'] = 'field_phong_massage';
  $handler->display->display_options['fields']['field_phong_massage']['label'] = 'phone message';
  $handler->display->display_options['fields']['field_phong_massage']['element_label_colon'] = FALSE;
  /* Field: Content: Phòng Facial?  */
  $handler->display->display_options['fields']['field_phong_facial']['id'] = 'field_phong_facial';
  $handler->display->display_options['fields']['field_phong_facial']['table'] = 'field_data_field_phong_facial';
  $handler->display->display_options['fields']['field_phong_facial']['field'] = 'field_phong_facial';
  $handler->display->display_options['fields']['field_phong_facial']['label'] = 'phone facial';
  $handler->display->display_options['fields']['field_phong_facial']['element_label_colon'] = FALSE;
  /* Field: Content: Phòng Tan? */
  $handler->display->display_options['fields']['field_phong_tan']['id'] = 'field_phong_tan';
  $handler->display->display_options['fields']['field_phong_tan']['table'] = 'field_data_field_phong_tan';
  $handler->display->display_options['fields']['field_phong_tan']['field'] = 'field_phong_tan';
  $handler->display->display_options['fields']['field_phong_tan']['label'] = 'phone tan';
  $handler->display->display_options['fields']['field_phong_tan']['element_label_colon'] = FALSE;
  /* Field: Content: Trong Khu Shopping Center */
  $handler->display->display_options['fields']['field_trong_khu_shopping_center']['id'] = 'field_trong_khu_shopping_center';
  $handler->display->display_options['fields']['field_trong_khu_shopping_center']['table'] = 'field_data_field_trong_khu_shopping_center';
  $handler->display->display_options['fields']['field_trong_khu_shopping_center']['field'] = 'field_trong_khu_shopping_center';
  $handler->display->display_options['fields']['field_trong_khu_shopping_center']['label'] = '';
  $handler->display->display_options['fields']['field_trong_khu_shopping_center']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_trong_khu_shopping_center']['type'] = 'select_or_other_formatter';
  /* Field: Content: Price $/Giá Bán? */
  $handler->display->display_options['fields']['field_price_gia_ban_']['id'] = 'field_price_gia_ban_';
  $handler->display->display_options['fields']['field_price_gia_ban_']['table'] = 'field_data_field_price_gia_ban_';
  $handler->display->display_options['fields']['field_price_gia_ban_']['field'] = 'field_price_gia_ban_';
  $handler->display->display_options['fields']['field_price_gia_ban_']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Contact Name */
  $handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['label'] = 'contact name';
  $handler->display->display_options['fields']['field_contact_name']['element_label_colon'] = FALSE;
  /* Field: Content: Contact Phone */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['label'] = 'contact phone';
  $handler->display->display_options['fields']['field_contact_phone']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['province_1']['label'] = 'province';
  $handler->display->display_options['fields']['province_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['province_1']['alter']['text'] = '[province_1],[province]';
  $handler->display->display_options['fields']['province_1']['element_label_colon'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'update date';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Featured Date */
  $handler->display->display_options['fields']['field_featured_date']['id'] = 'field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['field'] = 'field_featured_date';
  $handler->display->display_options['fields']['field_featured_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Featured Date (field_featured_date) */
  $handler->display->display_options['sorts']['field_featured_date_value']['id'] = 'field_featured_date_value';
  $handler->display->display_options['sorts']['field_featured_date_value']['table'] = 'field_data_field_featured_date';
  $handler->display->display_options['sorts']['field_featured_date_value']['field'] = 'field_featured_date_value';
  $handler->display->display_options['sorts']['field_featured_date_value']['order'] = 'DESC';
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
    4 => '4',
  );
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  $handler->display->display_options['path'] = 'export-sang-tiem-nails';
  $translatables['sang_tiem_nails'] = array(
    t('Master'),
    t('All Listing'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No Results found for your state'),
    t('Posting Title'),
    t('save'),
    t('Khu Vuc'),
    t('# Ghe'),
    t('Monthly rent'),
    t('Tiem SQ/FT'),
    t('# Ban'),
    t('# Tho'),
    t('Phone Wax'),
    t('Phone Message'),
    t('Phone Facial'),
    t('Phone Tan'),
    t('Shopping Center'),
    t('Price $/Giá Bán?'),
    t('Contact Information'),
    t('[province_1],[province]'),
    t('[field_image] Images Available'),
    t('Posted'),
    t('sang tiem nails'),
    t('featured sang tiem nails '),
    t('Featured Listing'),
    t('export sang tiem nails'),
    t('title'),
    t('category'),
    t('khu vuc'),
    t('# ghe'),
    t('monthly rent'),
    t('tiem sq/ft'),
    t('# ban'),
    t('# tho'),
    t('phone wax'),
    t('phone message'),
    t('phone facial'),
    t('phone tan'),
    t('contact name'),
    t('contact phone'),
    t('province'),
    t('update date'),
    t('body'),
    t('Featured Date'),
    t('Data export'),
  );
  $export['sang_tiem_nails'] = $view;

  return $export;
}
