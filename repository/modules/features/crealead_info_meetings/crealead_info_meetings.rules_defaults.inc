<?php
/**
 * @file
 * crealead_info_meetings.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function crealead_info_meetings_default_rules_configuration() {
  $items = array();
  $items['rules_info_meeting_registration_email'] = entity_import('rules_config', '{ "rules_info_meeting_registration_email" : {
      "LABEL" : "Email apr\\u00e8s inscription \\u00e0 une r\\u00e9union d\\u0027info",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "mimemail", "registration" ],
      "ON" : { "registration_insert" : [] },
      "DO" : [
        { "mimemail" : {
            "USING" : {
              "key" : "info_meeting_user_registration",
              "to" : "[registration:mail]",
              "from_name" : "Crealead",
              "subject" : "[registration:entity:title]",
              "body" : "\\u003Cp\\u003EVotre inscription a bien \\u00e9t\\u00e9 prise en compte et les informations suivantes ont \\u00e9t\\u00e9 enregistr\\u00e9es.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cb\\u003EPr\\u00e9nom\\u003C\\/b\\u003E : [registration:field-registrant-firstname]\\r\\n\\u003Cb\\u003ENom\\u003C\\/b\\u003E : [registration:field-registrant-firstname]\\r\\n\\u003Cb\\u003ET\\u00e9l\\u003C\\/b\\u003E : [registration:field_registrant_phone]\\r\\n\\r\\n\\u003Cb\\u003EDomaine d\\u0027activit\\u00e9\\u003C\\/b\\u003E : [registration:field-registrant-dom-activite]\\r\\n\\u003Cb\\u003EProjet\\u003C\\/b\\u003E : [registration:field-registrant-project-domain]\\r\\n\\u003Cb\\u003EStatut\\u003C\\/b\\u003E : [registration:field-registrant-status]\\r\\n(Si RSA, n\\u00b0 allocataire : [registration:field-beneficiary-number])\\r\\n(Si P\\u00f4le emploi, depuis le [registration:field-unemployment-date])\\r\\n(Si autre statut : [registration:field-other-specify])\\r\\n\\r\\n\\u003Cb\\u003ECode postal\\u003C\\/b\\u003E : [registration:field-registrant-postal-code]\\r\\n\\u003Cb\\u003EVille\\u003C\\/b\\u003E : [registration:field-registrant-city]\\r\\n\\u003Cb\\u003EDate de naissance\\u003C\\/b\\u003E : [registration:field-registrant-birthday]\\r\\n\\u003Cb\\u003ESexe\\u003C\\/b\\u003E : [registration:field-registrant-gender]\\r\\n\\u003Cb\\u003EComment avez-vous connu Crealead\\u003C\\/b\\u003E : [registration:field-registrant-how]",
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
