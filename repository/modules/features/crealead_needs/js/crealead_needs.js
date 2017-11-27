/**
 * Created by ubuntu on 14/06/17.
 */

(function ($) {

  Drupal.behaviors.needs = {
    attach: function (context, settings) {
      // ----------- TECHNICAL FIELDS HANDLING -------------------------------------------------------------------------
      // We hide field Action
      $('#edit-field-need-action').hide();

      // ----------- SOLUTION FIELDS HANDLIGN --------------------------------------------------------------------------
      // First, we get the value of radio button field_solution_found (no = 0, yes = 1).
      var initialSolutionFoundValue = $('#edit-field-solution-found input[type=radio]:checked').val();
      // If 'no', we must hide field_solution_details.
      if (initialSolutionFoundValue == 0) {
        $('#edit-field-solution-details').hide();
      }
      // Then, we handle radio button change.
      $('#edit-field-solution-found input[type=radio]').change(function () {
        if ($('#edit-field-solution-found input[type=radio]:checked').val() == 1) {
          $('#edit-field-solution-details').show(1000);
        }
        else {
          $('#edit-field-solution-details').hide(1000);
        }
      });

      // -------------- CLIENT FIELDS HANDLING -------------------------------------------------------------------------
      /* Packaged need clients are :
       * Activité co-entrepreneur   uuid = b4346853-567b-448c-910d-0e79d75d4e99
       * Perso                      uuid = edcd12a6-b46d-416d-919b-c52d0acfa1df
       * Crealead Structure         uuid = 7a01c453-5ac3-42a6-a374-ee9d26137a2f
       * Client externe             uuid = 7b581fb4-6fcb-4be4-8f14-53f14dc4f3d4
       */
      var client_uuids = settings.crealead_needs_clients;

      var initialCrealeadName = $('#edit-field-crealead-name-und-0-value').val();
      var initialContactName = $('#edit-field-need-contact-name-und-0-value').val();
      var initialContactDetails = $('#edit-field-need-contact-details-und-0-value').val();

      var initialClientValue = $('#edit-field-need-client-und').val();

      var userBrand = settings.crealead_needs_user_brand;

      if (initialClientValue == '_none') {
        $('#edit-field-crealead-name').hide();
        $('.group-need-contact-infos').hide();
      }
      else {
        if (client_uuids[initialClientValue] == 'b4346853-567b-448c-910d-0e79d75d4e99') { // Activité co-entrepreneur.
          $('#field-crealead-name-add-more-wrapper label').text('Marque concernée');

        }
        else if (client_uuids[initialClientValue] == '7b581fb4-6fcb-4be4-8f14-53f14dc4f3d4') { // Client externe.
          $('#field-crealead-name-add-more-wrapper label').text('Organisme');
          //$('#edit-field-crealead-name').hide();
        }
        else if (client_uuids[initialClientValue] == '7a01c453-5ac3-42a6-a374-ee9d26137a2f') { // Crealead Structure
          $('#edit-field-crealead-name').hide();
          $('.group-need-contact-infos').show();
        }
      }

      // Client field change handling.
      $('#edit-field-need-client-und').change(function() {
        var selectedClientValue = $('#edit-field-need-client-und option:selected').val();

        // 1 - Fields content handling
        if (selectedClientValue == '_none') {
          // _none value is available only on Creation mode, so we can empty all client fields values.
          $('#edit-field-crealead-name-und-0-value').val('');
          $('#edit-field-need-contact-name-und-0-value').val('');
          $('#edit-field-need-contact-details-und-0-value').val('');
        }
        else {
          var selectedClientUuid = client_uuids[selectedClientValue];
          var connectedUser = settings.crealead_needs_connected_user;

          if (selectedClientValue == initialClientValue) {
            $('#edit-field-crealead-name-und-0-value').val(initialCrealeadName);
            $('#edit-field-need-contact-name-und-0-value').val(initialContactName);
            $('#edit-field-need-contact-details-und-0-value').val(initialContactDetails);
          }
          else {
            $('#field-crealead-name-add-more-wrapper label').text('Personne concernée');
            $('#edit-field-crealead-name-und-0-value').val(connectedUser.name);
            $('#edit-field-need-contact-name-und-0-value').val(connectedUser.name);
            $('#edit-field-need-contact-details-und-0-value').val(connectedUser.mail);

            if (selectedClientUuid == 'b4346853-567b-448c-910d-0e79d75d4e99') { // Activité co-entrepreneur
              $('#field-crealead-name-add-more-wrapper label').text('Marque concernée');
              if (userBrand) {
                $('#edit-field-crealead-name-und-0-value').val(userBrand);
              }
              else {
                $('#edit-field-crealead-name-und-0-value').val('');
              }
            }
            else if (selectedClientUuid == '7a01c453-5ac3-42a6-a374-ee9d26137a2f') { // Crealead Structure
              $('#edit-field-need-contact-name-und-0-value').val('');
              $('#edit-field-need-contact-details-und-0-value').val('');
            }
            else if (selectedClientUuid == '7b581fb4-6fcb-4be4-8f14-53f14dc4f3d4') { // Client externe
              $('#field-crealead-name-add-more-wrapper label').text('Organisme');
              $('#edit-field-crealead-name-und-0-value').val('');
              $('#edit-field-need-contact-name-und-0-value').val('');
              $('#edit-field-need-contact-details-und-0-value').val('');
            }
          }
        }

        // 2 - Fields visibility handling
        if (selectedClientValue == '_none') {
          $('#edit-field-crealead-name').hide(500);
          $('.group-need-contact-infos').hide(500);
        }
        else if (selectedClientUuid == '7b581fb4-6fcb-4be4-8f14-53f14dc4f3d4') { // Client externe
          $('#edit-field-crealead-name').show(250);
          $('.group-need-contact-infos').show(500);
        }
        else if (selectedClientUuid == '7a01c453-5ac3-42a6-a374-ee9d26137a2f') { // Crealead Structure
          $('#edit-field-crealead-name').hide(500);
          $('.group-need-contact-infos').show(250);
        }
        else  {
          $('#edit-field-crealead-name').show(500);
          $('.group-need-contact-infos').show(500);
        }
      });

      // CODE CONSERVÉ EN CAS DE BESOIN
      // // First, we add a red star on the label of these 2 fields.
      // var redStarCode = '<span class="form-required" title="Ce champ est requis.">*</span>';
      // $('#edit-field-enquirer label').append(redStarCode);
      // $('#edit-field-external-enquirer label').append(redStarCode);
    }
  };
}(jQuery))
