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
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_contact_brand_name" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[entityform:field-contact-brand-email]",
            "subject" : "[entityform:field-contact-subject]",
            "message" : "Une personne a rempli votre formulaire de contact sur le site Crealead.\\r\\nElle souhaite vous poser une question\\/prendre contact avec vous. \\r\\n\\r\\n\\r\\nSes coordonn\\u00e9es :\\r\\n\\r\\n[entityform:field-contact-name]\\r\\n[entityform:field-contact-email]\\r\\n[entityform:field-contact-phone]\\r\\n\\r\\nSon message :\\r\\n\\r\\n[entityform:field-contact-body]\\r\\n",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_rules_email_to_pole_coes'] = entity_import('rules_config', '{ "rules_rules_email_to_pole_coes" : {
      "LABEL" : "Email aux coE d\\u0027un p\\u00f4le",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "mimemail", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : { "pole_coes_contact" : "pole_coes_contact" } }
          }
        }
      ],
      "DO" : [
        { "mimemail" : {
            "USING" : {
              "key" : "pole_coes_email",
              "to" : [ "entityform:field-pole-coes-from" ],
              "bcc" : [ "entityform:field-all-emails" ],
              "from_name" : [ "entityform:field-pole-coes-sender" ],
              "from_mail" : [ "entityform:field-pole-coes-from" ],
              "subject" : [ "entityform:field-pole-coes-subject" ],
              "body" : [ "entityform:field-pole-coes-message:value" ],
              "language" : [ "" ]
            },
            "PROVIDE" : { "send_status" : { "send_status" : "Send status" } }
          }
        }
      ]
    }
  }');
  return $items;
}
