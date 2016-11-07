/**
 * Created by ubuntu on 06/11/16.
 */

(function ($) {
  Drupal.behaviors.crealeadSimilarClients = {
    attach: function (context, settings) {
      // Creates the HTML zone dedicated to Client similarity processing.
      $("#edit-title").parent().append(
          '<div id="similarity-wrapper">' +
            '<div id="similar-clients-check-link"><a>Vérifier si ce client n\'existe pas déjà</a></div>' +
            '<div id="similar-clients-list" class="clearfix"></div>' +
            '<div id="similar-clients-list-error-msg"></div>' +
            '<div id="similarity-instructions">' +
              '<p>' +
                'Vous pouvez :' +
              '</p>' +
              '<ol>' +
                '<li>Rattacher un des clients existants à l\'une de vos marques en :</li>' +
                  '- cochant cette marque ci-dessous,<br />' +
                  '- puis en cliquant sur le nom du client dans la liste.' +
                '</li>' +
                '<li><a href="#" class="new-client-link">Continuer à créer ce nouveau client</a></li>' +
                '<li><a href="/">Revenir à la page d\'accueil</a></li>' +
              '</ol>' +
            '</div>' +
          '</div>'
        );

      // Handles display/hiding of HTML elements on first arrival.
      $('#similarity-instructions').hide();
      $('form.node-client-form label:gt(0)').css('color','#ccc');
      $('form.node-client-form input:gt(0)').prop('disabled', true);
      $('#edit-field-client-type select').prop('disabled', true);
      // $('#edit-body textarea').prop('disabled', true);

      $("#edit-title").focus(function() {
        $('#similarity-wrapper').show();
        $("#similar-clients-check-link a").show();
        $('#similar-clients-list').html('');
        $('#similarity-instructions').hide();
      });

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
                $('#similarity-instructions').show();

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
              $('#edit-related-brands').parent().find('label').css('color','inherit');
              $('#edit-related-brands').find('input[type="checkbox"]').prop('disabled', false);
            }
          });
        }
      });

      // Handles click on 'Continuer à créer ...' link.
      $('.new-client-link').click(function() {
        $('form.node-client-form label:gt(0)').css('color','inherit');
        $('form.node-client-form input:gt(0)').prop('disabled', false);
        $('#edit-field-client-type select').prop('disabled', false);
        $('#edit-body textarea').prop('disabled', false);
        $('#similarity-wrapper').hide();
      });

      // Handles the unicity of Brand names checkbox field.
      $('#edit-related-brands input[type="checkbox"]').on('change', function() {
        $('#edit-related-brands input[type="checkbox"]').not(this).prop('checked', false);
        $('#similar-clients-list-error-msg').html('');
      });
    }
  };
}(jQuery));