<?php
/**
 * @file
 * The primary PHP file for this theme.
 */
function chomchom_preprocess_page(&$variables) {
// Add information about the number of sidebars.
 if (!empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second']) || !empty($variables['page']['primary_first']) && !empty($variables['page']['sidebar_second'])) {
  $variables['content_column_class'] = ' class="col-lg-6 col-md-6 col-sm-8 col-xs-12"';
 }
 elseif (!empty($variables['page']['primary_first']) || !empty($variables['page']['sidebar_first']) || !empty($variables['page']['sidebar_second'])) {
  $variables['content_column_class'] = ' class="col-lg-9 col-md-9 col-sm-8 col-xs-12"';
 }
 else {
  $variables['content_column_class'] = ' class="col-lg-12 col-md-12 col-sm-12 col-xs-12"';
 }
}
