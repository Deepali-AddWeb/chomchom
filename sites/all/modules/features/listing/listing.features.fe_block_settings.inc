<?php
/**
 * @file
 * listing.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function listing_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-business_for_sale-block_1'] = array(
    'cache' => -1,
    'css_class' => 'featured-listing',
    'custom' => 0,
    'delta' => 'business_for_sale-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'business-for-sale',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'chomchom' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'chomchom',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-can_tho-block_1'] = array(
    'cache' => -1,
    'css_class' => 'featured-listing',
    'custom' => 0,
    'delta' => 'can_tho-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'can-tho-nails',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'chomchom' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'chomchom',
        'weight' => -11,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-can_tho_toc-block_1'] = array(
    'cache' => -1,
    'css_class' => 'featured-listing',
    'custom' => 0,
    'delta' => 'can_tho_toc-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'can-tho-toc',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'chomchom' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'chomchom',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-common_field_listing-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'common_field_listing-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'listing/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'chomchom' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'chomchom',
        'weight' => -17,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-common_field_listing-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'common_field_listing-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'listing/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'chomchom' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'chomchom',
        'weight' => -16,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-common_field_listing-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'common_field_listing-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'listing/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'chomchom' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'chomchom',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-quang_cao_rao_vat-block_1'] = array(
    'cache' => -1,
    'css_class' => 'featured-listing',
    'custom' => 0,
    'delta' => 'quang_cao_rao_vat-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'quang-cao-rao-vat',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'chomchom' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'chomchom',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-sang_tiem_nails-block_1'] = array(
    'cache' => -1,
    'css_class' => 'featured-listing',
    'custom' => 0,
    'delta' => 'sang_tiem_nails-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'sang-tiem-nails',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'chomchom' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'chomchom',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
