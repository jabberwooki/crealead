<?php
/**
 * @file
 * crealead_brands.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function crealead_brands_default_rules_configuration() {
  $items = array();
  $items['rules_contact_email_to_brand'] = entity_import('rules_config', '{ "rules_contact_email_to_brand" : {
      "LABEL" : "Email de contact vers une marque",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_contact_type" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[entityform:field-contact-brand-email]",
            "subject" : "[entityform:field-contact-subject]",
            "message" : "[entityform:field-contact-name]\\r\\n[entityform:field-contact-email]\\r\\n[entityform:field-contact-phone]\\r\\n\\r\\n[entityform:field-contact-body]\\r\\n",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
