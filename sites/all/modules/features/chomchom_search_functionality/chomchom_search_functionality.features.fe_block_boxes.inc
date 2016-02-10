<?php
/**
 * @file
 * chomchom_search_functionality.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function chomchom_search_functionality_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Filter block';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'filter_block';
  $fe_block_boxes->body = '<div class=\'filter\'>Filter</div>
<div class=\'user-region\'>
<?php echo $_SESSION[\'smart_ip\'][\'location\'][\'region\'];?>
</div>';

  $export['filter_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'search';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'search';
  $fe_block_boxes->body = '<p><a href="/chomchom/can-tho-search">search</a></p>
';

  $export['search'] = $fe_block_boxes;

  return $export;
}
