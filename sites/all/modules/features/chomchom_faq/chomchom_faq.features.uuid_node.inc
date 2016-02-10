<?php
/**
 * @file
 * chomchom_faq.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function chomchom_faq_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'FAQ',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'aa76d7f2-dd6a-4b72-8c2c-4e30baf31b36',
  'type' => 'faq',
  'language' => 'en',
  'created' => 1454409216,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9db45847-c6e3-45eb-aa73-272215f4006c',
  'revision_uid' => 1,
  'body' => array(),
  'field_faq' => array(
    'und' => array(
      0 => array(
        'question' => 'what is chomchom?',
        'answer' => 'post an ads',
        'answer_format' => NULL,
      ),
      1 => array(
        'question' => 'dfg',
        'answer' => 'dfg',
        'answer_format' => NULL,
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'locations' => array(),
  'location' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:6:{s:14:"geoip_location";a:11:{s:7:"country";s:13:"United States";s:12:"country_code";s:2:"US";s:6:"region";s:6:"Oregon";s:11:"region_code";s:0:"";s:4:"city";s:8:"Portland";s:3:"zip";s:5:"97086";s:8:"latitude";s:7:"45.5234";s:9:"longitude";s:8:"-122.676";s:9:"time_zone";s:6:"-08:00";s:10:"ip_address";s:13:"54.148.98.137";s:9:"timestamp";i:1455101637;}s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-02-02 10:33:36 +0000',
);
  return $nodes;
}
