<?php
/**
 * @file
 * chomchom_general_setting.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function chomchom_general_setting_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'copyright';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'copyright';
  $fe_block_boxes->body = '<p>copyright 2015 ChomChom</p>
';

  $export['copyright'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Follow Us';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'follow_us';
  $fe_block_boxes->body = '<p><a class="twitter" href="#">twitter</a> <a class="google" href="#">Google</a> <a class="facebook" href="#">Facebook</a></p>
';

  $export['follow_us'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer Logo';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'footer_logo';
  $fe_block_boxes->body = '<p><img alt="" height="24" src="/chomchom/sites/default/files/footer_logo.png" width="173" /></p>
';

  $export['footer_logo'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Headquarters';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'headquarters';
  $fe_block_boxes->body = '<p>5430 Jimmy Carter Blvd.<br />
Suite 215<br />
Norcross, GA30039</p>
';

  $export['headquarters'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Telephone';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'telephone';
  $fe_block_boxes->body = '<p>Telephone: 404 884 1888 | Email: raovat@chomchom.net</p>
';

  $export['telephone'] = $fe_block_boxes;

  return $export;
}
