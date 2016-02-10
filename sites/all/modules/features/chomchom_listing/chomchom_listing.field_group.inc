<?php
/**
 * @file
 * chomchom_listing.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function chomchom_listing_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_business_for_sale|node|listing|form';
  $field_group->group_name = 'group_business_for_sale';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Business for Sale',
    'weight' => '11',
    'children' => array(
      0 => 'field_type_of_business',
      1 => 'field_monthly_income_',
      2 => 'field_monthly_rent',
      3 => 'field_how_many_sq_ft',
      4 => 'field_sale_price',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-business-for-sale field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_business_for_sale|node|listing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_can_tho|node|listing|form';
  $field_group->group_name = 'group_can_tho';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Cần Thợ',
    'weight' => '10',
    'children' => array(
      0 => 'field_can_tho',
      1 => 'field_tien_luong',
      2 => 'field_kinh_nghiem',
      3 => 'field_tho_lam',
      4 => 'field_can_license',
      5 => 'field_khu_vuc',
      6 => 'field_kinh_nghiem_toc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-can-tho field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_can_tho|node|listing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sang_tiem_nails|node|listing|form';
  $field_group->group_name = 'group_sang_tiem_nails';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sang Tiệm Nails',
    'weight' => '12',
    'children' => array(
      0 => 'field_khu_vuc_sang_tiem_nails',
      1 => 'field_ghe',
      2 => 'field_monthly_rent_sang_tiem',
      3 => 'field_tiem_sq_ft',
      4 => 'field_ban',
      5 => 'field_tho',
      6 => 'field_phong_wax',
      7 => 'field_phong_massage',
      8 => 'field_phong_facial',
      9 => 'field_phong_tan',
      10 => 'field_trong_khu_shopping_center',
      11 => 'field_price_gia_ban_',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-sang-tiem-nails field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sang_tiem_nails|node|listing|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Business for Sale');
  t('Cần Thợ');
  t('Sang Tiệm Nails');

  return $field_groups;
}
