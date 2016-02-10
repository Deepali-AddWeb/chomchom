<?php
/**
 * @file
 * chomchom_faq.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function chomchom_faq_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_faq'.
  $field_bases['field_faq'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_faq',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'faqfield',
    'settings' => array(
      'advanced' => array(
        'answer_rows' => 3,
        'answer_title' => 'Answer',
        'question_length' => 255,
        'question_rows' => 1,
        'question_title' => 'Question',
      ),
      'answer_widget' => 'textarea',
      'format' => 'filtered_html',
    ),
    'translatable' => 0,
    'type' => 'faqfield',
  );

  return $field_bases;
}
