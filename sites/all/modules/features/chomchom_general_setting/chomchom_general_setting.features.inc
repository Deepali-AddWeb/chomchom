<?php
/**
 * @file
 * chomchom_general_setting.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function chomchom_general_setting_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function chomchom_general_setting_image_default_styles() {
  $styles = array();

  // Exported image style: small_style.
  $styles['small_style'] = array(
    'label' => 'small style',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 141,
          'height' => 114,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
