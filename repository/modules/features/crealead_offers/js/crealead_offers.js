/**
 * Created by ubuntu on 17/11/17.
 */

(function ($) {
  Drupal.behaviors.offers = {
    attach: function (context, settings) {
      // -------------- OFFER SOURCES HANDLING -------------------------------------------------------------------------
      /* Packaged offer sources terms are :
       * Activité co-entrepreneur        uuid = a4df642a-58e8-450b-9098-4503ed11313a
       * Crealead Structure              uuid = 8f7a4d71-a3a5-4619-ad14-aa4fe2cee28d
       * Offre externe                   uuid = d608a566-a38c-4906-a43f-b94964fddc15
       * Crealeadien à titre personnel   uuid = 35943eb4-72e5-43f9-91ad-e3509da52f7f
       */
      var source_uuids = settings.crealead_offer_sources;

      var initialCrealeadName = $('#edit-field-crealead-name-und-0-value').val();
      var initialContactName = $('#edit-field-need-contact-name-und-0-value').val();
      var initialContactDetails = $('#edit-field-need-contact-details-und-0-value').val();

      var initialSourceValue = $('#edit-field-offer-origin-und').val();
      var userBrand = settings.crealead_offers_user_brand;

      if (initialSourceValue == '_none') {
        $('#edit-field-crealead-name').hide();
        $('.group-offer-contact-infos').hide();
      }
      else {
        if (source_uuids[initialSourceValue] == 'a4df642a-58e8-450b-9098-4503ed11313a') { // Activité coE
          $('#field-crealead-name-add-more-wrapper label').text('Marque concernée');
        }
        else if (source_uuids[initialSourceValue] == 'd608a566-a38c-4906-a43f-b94964fddc15') { // Offre externe.
          $('#field-crealead-name-add-more-wrapper label').text('Personne ou Organisme concerné');
        }
        else if (source_uuids[initialSourceValue] == '8f7a4d71-a3a5-4619-ad14-aa4fe2cee28d') { // Crealead Structure
          $('#edit-field-crealead-name').hide();
        }
      }

      // Client field change handling.
      $('#edit-field-offer-origin-und').change(function() {
        var selectedSourceValue = $('#edit-field-offer-origin-und option:selected').val();

        // 1 - Fields content handling
        if (selectedSourceValue == '_none') {
          // _none value is available only on Creation mode, so we can empty all client fields values.
          $('#edit-field-crealead-name-und-0-value').val('');
          $('#edit-field-need-contact-name-und-0-value').val('');
          $('#edit-field-need-contact-details-und-0-value').val('');
        }
        else {
          var selectedSourceUuid = source_uuids[selectedSourceValue];
          var connectedUser = settings.crealead_offers_connected_user;

          if (selectedSourceValue == initialSourceValue) {
            $('#edit-field-crealead-name-und-0-value').val(initialCrealeadName);
            $('#edit-field-need-contact-name-und-0-value').val(initialContactName);
            $('#edit-field-need-contact-details-und-0-value').val(initialContactDetails);
          }
          else {
            $('#field-crealead-name-add-more-wrapper label').text('Personne concernée');
            $('#edit-field-crealead-name-und-0-value').val(connectedUser.name);
            $('#edit-field-need-contact-name-und-0-value').val(connectedUser.name);
            $('#edit-field-need-contact-details-und-0-value').val(connectedUser.mail);

            if (selectedSourceUuid == 'a4df642a-58e8-450b-9098-4503ed11313a') { // Activité co-entrepreneur
              $('#field-crealead-name-add-more-wrapper label').text('Marque concernée');
              if (userBrand) {
                $('#edit-field-crealead-name-und-0-value').val(userBrand);
              }
              else {
                $('#edit-field-crealead-name-und-0-value').val('');
              }
            }
            else if (selectedSourceUuid == '8f7a4d71-a3a5-4619-ad14-aa4fe2cee28d') { // Crealead Structure
              $('#edit-field-need-contact-name-und-0-value').val('');
              $('#edit-field-need-contact-details-und-0-value').val('');
            }
            else if (selectedSourceUuid == 'd608a566-a38c-4906-a43f-b94964fddc15') { // Offre externe
              $('#field-crealead-name-add-more-wrapper label').text('Personne ou Organisme concerné');
              $('#edit-field-crealead-name-und-0-value').val('');
              $('#edit-field-need-contact-name-und-0-value').val('');
              $('#edit-field-need-contact-details-und-0-value').val('');
            }
          }
        }

        // 2 - Fields visibility handling
        if (selectedSourceValue == '_none') {
          $('#edit-field-crealead-name').hide(500);
          $('.group-offer-contact-infos').hide(500);
        }
        else if (selectedSourceUuid == 'd608a566-a38c-4906-a43f-b94964fddc15') { // Offre externe
          $('#edit-field-crealead-name').show(250);
          $('.group-offer-contact-infos').show(500);
        }
        else if (selectedSourceUuid == '8f7a4d71-a3a5-4619-ad14-aa4fe2cee28d') { // Crealead Structure
          $('#edit-field-crealead-name').hide(500);
          $('.group-offer-contact-infos').show(250);
        }
        else  {
          $('#edit-field-crealead-name').show(500);
          $('.group-offer-contact-infos').show(500);
        }
      });
    }
  };
}(jQuery));