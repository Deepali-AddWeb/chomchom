<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>
<?php 
$category_id = $row->field_field_category[0]['raw']['tid'];
global $base_url;
switch ($category_id) {
  case '1':
  case '2':
  case '3':
    print '<a href="'.$base_url.'/node/13?nid='.$row->nid.'">Renew</a>';
    break;
  case '4':
  case '5':
  case '6':
    print '<a href="'.$base_url.'/node/14?nid='.$row->nid.'">Renew</a>';
    break;
  case '7':
    print '<a href="'.$base_url.'/node/15?nid='.$row->nid.'">Renew</a>';
    break;
  case '8':
    print '<a href="'.$base_url.'/node/16?nid='.$row->nid.'">Renew</a>';
    break;
  default:
  break;
}
//print $output; ?>