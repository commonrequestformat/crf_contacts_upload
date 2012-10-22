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
  $items['rules_email_ocha_focal_point_on_contacts_upload'] = entity_import('rules_config', '{ "rules_email_ocha_focal_point_on_contacts_upload" : {
      "LABEL" : "Email OCHA focal point on contacts upload",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert", "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "contacts_upload" : "contacts_upload" } }
          }
        },
        { "NOT data_is_empty" : { "data" : [ "node:field-contacts-upload-file:file:fid" ] } },
        { "entity_has_field" : {
            "entity" : [ "node:field-crf-request" ],
            "field" : "field_crf_req_contact"
          }
        }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "node:field-crf-request:field-crf-req-contact" ] },
            "ITEM" : { "current_contact" : "Current contact" },
            "DO" : [
              { "mail" : {
                  "to" : [ "current-contact:mail" ],
                  "subject" : "Contact sheet provided by [node:author:name] for [node:field-cluster:name-field] in [node:field-crf-request:title]",
                  "message" : "Dear X  [where X is the manager],\\r\\n\\r\\nKindly note that [node:author:name] has uploaded a contact list for [node:field-cluster:name-field] in the Information [node:field-crf-request:title] to the CRF website.\\r\\n\\r\\nThe file can be retrieved at: [node:field-contacts-upload-file:file:url]\\r\\n\\r\\nAt this point, we encourage you do download the file and update your contact management system.\\r\\n\\r\\nKind regards.",
                  "from" : [ "node:field-crf-request:author:mail" ],
                  "language" : [ "" ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
