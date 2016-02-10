<?php
/**
 * @file
 * general_setting.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function general_setting_image_default_styles() {
  $styles = array();

  // Exported image style: small_style.
  $styles['small_style'] = array(
    'label' => 'small style',
    'effects' => array(),
  );

  return $styles;
}
