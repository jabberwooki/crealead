/**
 * Created by ubuntu on 10/10/17.
 */


(function ($) {
  Drupal.behaviors.ads = {
    attach: function (context, settings) {
      // -------------- AD SOURCE HANDLING -------------------------------------------------------------------------
      /* Packaged ad sources terms are :
       * Activité co-entrepreneur   uuid = 61eeb89e-9d86-4f60-aca8-ffde34e7ff14
       * Perso                      uuid = 88e99ddc-b047-47b9-b882-0ebe830b79c9
       * Crealead Structure         uuid = 81bffdc8-426e-4ac0-935a-a821a405b085
       * Offre externe              uuid = f3416d0e-6a45-44da-8ebf-3670e5e3a941
       */
      var source_uuids = settings.crealead_ad_sources;

      var initialCrealeadName = $('#edit-field-crealead-name-und-0-value').val();
      var initialContactName = $('#edit-field-need-contact-name-und-0-value').val();
      var initialContactDetails = $('#edit-field-need-contact-details-und-0-value').val();

      var initialSourceValue = $('#edit-field-ad-source-und').val();
      console.log(initialSourceValue);
      if (initialSourceValue == '_none') {console.log('dans if');
        $('#edit-field-crealead-name').hide();
        $('.group-ad-contact-infos').hide();
      }
      else {console.log('dans else');
        if (source_uuids[initialSourceValue] == 'f3416d0e-6a45-44da-8ebf-3670e5e3a941') { // Offre externe.
          $('#edit-field-crealead-name').hide();
        }
        else if (source_uuids[initialSourceValue] == '81bffdc8-426e-4ac0-935a-a821a405b085') { // Crealead Structure
          $('.group-ad-contact-infos').hide();
        }
      }

      // Client field change handling.
      $('#edit-field-ad-source-und').change(function() {
        var selectedSourceValue = $('#edit-field-ad-source-und option:selected').val();

        // 1 - Fields content handling
        if (selectedSourceValue == '_none') {
          // _none value is available only on Creation mode, so we can empty all client fields values.
          $('#edit-field-crealead-name-und-0-value').val('');
          $('#edit-field-need-contact-name-und-0-value').val('');
          $('#edit-field-need-contact-details-und-0-value').val('');
        }
        else {
          var selectedSourceUuid = source_uuids[selectedSourceValue];
          var connectedUser = settings.crealead_needs_connected_user;

          if (selectedSourceValue == initialSourceValue) {
            $('#edit-field-crealead-name-und-0-value').val(initialCrealeadName);
            $('#edit-field-need-contact-name-und-0-value').val(initialContactName);
            $('#edit-field-need-contact-details-und-0-value').val(initialContactDetails);
          }
          else {
            $('#edit-field-crealead-name-und-0-value').val(connectedUser.name);
            $('#edit-field-need-contact-name-und-0-value').val(connectedUser.name);
            $('#edit-field-need-contact-details-und-0-value').val(connectedUser.mail);

            if (selectedSourceUuid == '81bffdc8-426e-4ac0-935a-a821a405b085') { // Crealead Structure
              $('#edit-field-need-contact-name-und-0-value').val('');
              $('#edit-field-need-contact-details-und-0-value').val('');
            }
            else if (selectedSourceUuid == 'f3416d0e-6a45-44da-8ebf-3670e5e3a941') { // Offre externe
              $('#edit-field-crealead-name-und-0-value').val('');
              $('#edit-field-need-contact-name-und-0-value').val('');
              $('#edit-field-need-contact-details-und-0-value').val('');
            }
          }
        }

        // 2 - Fields visibility handling
        if (selectedSourceValue == '_none') {
          $('#edit-field-crealead-name').hide(500);
          $('.group-ad-contact-infos').hide(500);
        }
        else if (selectedSourceUuid == 'f3416d0e-6a45-44da-8ebf-3670e5e3a941') { // Offre externe
          $('#edit-field-crealead-name').hide(250);
          $('.group-ad-contact-infos').show(500);
        }
        else if (selectedSourceUuid == '81bffdc8-426e-4ac0-935a-a821a405b085') { // Crealead Structure
          $('#edit-field-crealead-name').show(500);
          $('.group-ad-contact-infos').hide(250);
        }
        else  {
          $('#edit-field-crealead-name').show(500);
          $('.group-ad-contact-infos').show(500);
        }
      });
    }
  };
}(jQuery));