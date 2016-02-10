<?php
/**
 * @file
 * chomchom_listing.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function chomchom_listing_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'post an ad';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'post_an_ad';
  $fe_block_boxes->body = '<p><a href="/chomchom/node/add/listing"><strong>POST AN AD</strong>DANG QUANG CAO </a></p>
';

  $export['post_an_ad'] = $fe_block_boxes;

  return $export;
}
