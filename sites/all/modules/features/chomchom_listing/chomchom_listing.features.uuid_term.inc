<?php
/**
 * @file
 * chomchom_listing.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function chomchom_listing_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Quảng Cáo & Rao Vặt',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '4236b203-d55f-46dd-9eee-473ff2557b59',
    'vocabulary_machine_name' => 'category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Business Directory',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '44807b18-08e7-4687-a288-4a1a0643a373',
    'vocabulary_machine_name' => 'category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Cần Thợ Tóc',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '4e2d571c-0b53-4d94-bd29-db780b15c95f',
    'vocabulary_machine_name' => 'category',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '957f0e89-3e82-4528-9fb3-c338104d04d4',
    ),
  );
  $terms[] = array(
    'name' => 'Cần Thợ',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '957f0e89-3e82-4528-9fb3-c338104d04d4',
    'vocabulary_machine_name' => 'category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Sang Tiệm Nails',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b0426e51-7cb3-42c7-a679-e89db5352e28',
    'vocabulary_machine_name' => 'category',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'fa436173-9c00-4d5c-984c-33adac96d2b0',
    ),
  );
  $terms[] = array(
    'name' => 'Cần Thợ Nails',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ce83bd90-aa6d-421b-a5b5-57b174bd91b3',
    'vocabulary_machine_name' => 'category',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '957f0e89-3e82-4528-9fb3-c338104d04d4',
    ),
  );
  $terms[] = array(
    'name' => 'Business for Sale',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'd74a617b-fadd-44f1-ae41-f0a12c8f34cb',
    'vocabulary_machine_name' => 'category',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'fa436173-9c00-4d5c-984c-33adac96d2b0',
    ),
  );
  $terms[] = array(
    'name' => 'Sang Tiệm',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'fa436173-9c00-4d5c-984c-33adac96d2b0',
    'vocabulary_machine_name' => 'category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
