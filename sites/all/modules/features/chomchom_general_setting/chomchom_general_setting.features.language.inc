<?php
/**
 * @file
 * chomchom_general_setting.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function chomchom_general_setting_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => '',
    'weight' => 0,
  );
  // Exported language: vi.
  $languages['vi'] = array(
    'language' => 'vi',
    'name' => 'Vietnamese',
    'native' => 'Tiếng Việt',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'vi',
    'weight' => 0,
  );
  return $languages;
}
