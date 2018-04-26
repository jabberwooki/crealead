/**
 * Created by ubuntu on 06/11/16.
 */

(function ($) {
  Drupal.behaviors.crealeadSimilarClients = {
    /////////////////////////////////// INITIAL HTML CODE PROCESSING ///////////////////////////////////////////////////
    attach: function (context, settings) {
      // Creates the HTML zone dedicated to Client similarity processing.
      $("#edit-title").parent().append(
          '<div id="similarity-wrapper">' +
            '<div id="similar-clients-check-link"><a>Vérifier si ce client n\'existe pas déjà</a></div>' +
            '<div id="similar-clients-list" class="clearfix"></div>' +
            '<div id="similar-clients-list-error-msg"></div>' +
            '<div id="similarity-yes-no">' +
            '<a class="yes">OUI</a> <a class="no">NON</a>' +
            '</div>' +
            '<div id="similarity-instructions">' +
            '<p>Cliquez sur le nom du client voulu dans la liste ci-dessus et il sera automatiquement rattaché aux marques sélectionnées.</p>' +
            '</div>' +
            '<div id="similarity-continue">' +
            '<a class="continue">CONTINUER</a>' +
            '</div>' +
          '</div>'
        );

      // Handles display/hiding of HTML elements on first arrival.
      $('#similarity-yes-no').hide();
      $('#similarity-continue').hide();
      $('#similarity-instructions').hide();
      $('.form-item-title label').css('color', '#ccc');
      $('.form-item-title input').prop('disabled', true);
      hideClientFullForm();

      ///////////////////////////////// USER ACTIONS PROCESSING ////////////////////////////////////////////////////////

      // Handles the unicity of Brand names checkbox field.
      $('#edit-related-brands input[type="checkbox"]').on('change', function() {
        $('#edit-related-brands input[type="checkbox"]').not(this).prop('checked', false);
        $('#similar-clients-list-error-msg').html('');
      });

      // Handles Similarity info area.
      $("#edit-title").focus(function() {
        $('#similarity-wrapper').show();
        $("#similar-clients-check-link a").show();
        $('#similar-clients-list').html('');
        $('#similarity-yes-no').hide();
        $('#similarity-continue').hide();
        $('#similarity-instructions').hide();
        hideClientFullForm();
      });

      // Enables title field when brand name is clicked.
      $('#edit-related-brands input').click(function () {
        $('.form-item-title label').css('color', 'inherit');
        $('.form-item-title input').prop('disabled', false);
      })

      // Launches the Client name similarity checking
      $("#similar-clients-check-link a").click(function () {
        var newClientName = $("#edit-title").val();
        if (newClientName == '') {
          $('#similar-clients-list').html('<p class="alert-msg">Vous devez d\'abord saisir un nom de client ci-dessus.</p>');
        }
        else {
          $.ajax({
            url: Drupal.settings.crealead_similar_clients.ajaxUrl, // This is the AjAX URL set by the custom Module
            method: "GET",
            data: { clientName : newClientName },
            dataType: "html",
            success: function(data) {
              $('#similar-clients-list').html(data);
              $("#similar-clients-check-link a").hide();

              // We show instructions only if ajax request return clients names.
              if (data.indexOf('no-result') === -1) {
                $('#similarity-yes-no').show();

                // Handles click on a Client name from the similar clients list.
                $('#similar-clients-list a').click(function () {
                  if ($('#edit-related-brands input[type="checkbox"]:checked').length) {
                    var clientId = $(this).attr('name');
                    $('#edit-related-brands input[type="checkbox"]').each(function () {
                      if ($(this).prop('checked')) {
                        window.location.href = '/crealead_brands_link_registered_client/' + $(this).val() + '/' + clientId;
                      }
                    });
                  }
                  else {
                    $('#similar-clients-list-error-msg').html('<p class="alert-msg">Vous devez d\'abord sélectionner une marque.</p>');
                  }
                });
              }
              else {
                $('#similarity-continue').show();

                $('#similarity-continue').click(function () {
                  $(this).hide();
                  showClientFullForm();
                });
              }
            }
          });
        }
      });

      // Handles click on NO button.
      $('#similarity-yes-no a.no').click(function () {
        $(this).hide();
        $('#similarity-yes-no a.yes').hide();
        showClientFullForm();
      });

      // Handles click on YES button.
      $('#similarity-yes-no a.yes').click(function () {
        $(this).hide();
        $('#similarity-yes-no a.no').hide();
        $('#similarity-instructions').show();
      });

      function showClientFullForm() {
        $('#similar-clients-list').html('');
        $('form.node-client-form input, select').each(function () {
          var elementId = $(this).attr('id');
          if (elementId && elementId != 'edit-title' && elementId.indexOf('edit-related-brands-') === -1) {
            $(this).parents('.form-wrapper').show();
          }
        });
        $('#edit-body').show();
        $('.vertical-tabs').show();
      }

      function hideClientFullForm() {
        $('form.node-client-form input, select').each(function () {
          var elementId = $(this).attr('id');
          if (elementId && elementId != 'edit-title' && elementId.indexOf('edit-related-brands-') === -1) {
            $(this).parents('.form-wrapper').hide();
          }
        });
        $('#edit-body').hide();
        $('.vertical-tabs').hide();
      }
    }
  };
}(jQuery));
