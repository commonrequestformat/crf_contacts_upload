<?php
/**
 * @file
 * crf_contacts_upload.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function crf_contacts_upload_default_rules_configuration() {
  $items = array();
  $items['rules_email_manager_on_contacts_upload'] = entity_import('rules_config', '{ "rules_email_manager_on_contacts_upload" : {
      "LABEL" : "Email manager on contacts upload",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert", "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "contacts_upload" : "contacts_upload" } }
          }
        },
        { "NOT data_is_empty" : { "data" : [ "node:field-contacts-upload-file:file:fid" ] } }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4" } },
            "subject" : "New contacts file upload",
            "message" : "A new contacts file has been uploaded.\\r\\n\\r\\n[node:field_contacts_upload_file]"
          }
        }
      ]
    }
  }');
  return $items;
}
