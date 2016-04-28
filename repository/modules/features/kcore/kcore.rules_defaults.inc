<?php
/**
 * @file
 * kcore.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function kcore_default_rules_configuration() {
  $items = array();
  $items['rules_rules_site_contact_email'] = entity_import('rules_config', '{ "rules_rules_site_contact_email" : {
      "LABEL" : "Email de contact du site",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : { "site_contact" : "site_contact" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "contact@crealead.com",
            "subject" : "CONTACT SITE WEB CREALEAD -  [entityform:field-contact-subject]",
            "message" : "Une demande vient d\\u0027\\u00eatre post\\u00e9e via le formulaire de contact du site web.\\r\\n\\r\\nNom : [entityform:field-contact-name]\\r\\nAdresse email : [entityform:field-contact-email]\\r\\nT\\u00e9l\\u00e9phone : [entityform:field-contact-phone]\\r\\n\\r\\nMessage :\\r\\n[entityform:field-contact-body]\\r\\n\\r\\nVoir la demande sur le site web : [entityform:url]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
