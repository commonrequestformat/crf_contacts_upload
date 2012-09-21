<?php
/**
 * @file
 * crf_contacts_upload.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function crf_contacts_upload_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_contacts_upload';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_contacts_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_contacts_upload';
  $strongarm->value = 0;
  $export['comment_anonymous_contacts_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_contacts_upload';
  $strongarm->value = '1';
  $export['comment_contacts_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_contacts_upload';
  $strongarm->value = 1;
  $export['comment_default_mode_contacts_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_contacts_upload';
  $strongarm->value = '50';
  $export['comment_default_per_page_contacts_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_contacts_upload';
  $strongarm->value = 1;
  $export['comment_form_location_contacts_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_contacts_upload';
  $strongarm->value = '1';
  $export['comment_preview_contacts_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_contacts_upload';
  $strongarm->value = 1;
  $export['comment_subject_field_contacts_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__contacts_upload';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'workflow' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__contacts_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_contacts_upload';
  $strongarm->value = '0';
  $export['language_content_type_contacts_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_contacts_upload';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_contacts_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_contacts_upload';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_contacts_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_contacts_upload';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_contacts_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_contacts_upload';
  $strongarm->value = '0';
  $export['node_preview_contacts_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_contacts_upload';
  $strongarm->value = 0;
  $export['node_submitted_contacts_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_comment_contacts_upload';
  $strongarm->value = 0;
  $export['print_display_comment_contacts_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_contacts_upload';
  $strongarm->value = 0;
  $export['print_display_contacts_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_urllist_contacts_upload';
  $strongarm->value = 0;
  $export['print_display_urllist_contacts_upload'] = $strongarm;

  return $export;
}
