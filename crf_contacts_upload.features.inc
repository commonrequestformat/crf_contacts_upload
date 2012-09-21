<?php
/**
 * @file
 * crf_contacts_upload.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crf_contacts_upload_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function crf_contacts_upload_node_info() {
  $items = array(
    'contacts_upload' => array(
      'name' => t('Contacts Upload'),
      'base' => 'node_content',
      'description' => t('A free-form contacts file upload to be submitted to OCHA.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
