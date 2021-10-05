/**
 * Created by ubuntu on 29/04/16.
 */

(function ($) {

  Drupal.behaviors.brand_search = {
    attach: function (context, settings) {
      // Move "Tarif" field description from below text input to right after field label.
      var desc = $("#edit-field-training-price .description").wrap('<p>').parent().html();
      $("#edit-field-training-price .description").remove();
      $("#edit-field-training-price label").after(desc);

      // Move "Public visé" field description from below text input to right after field label.
      var desc = $("#edit-field-training-public .description").wrap('<p>').parent().html();
      $("#edit-field-training-public .description").remove();
      $("#edit-field-training-public label").after(desc);


      /////////////////////////////////////// Champs CPF ///////////////////////////////////////////////////////////////
      // 1 - Au premier affichage, les 3 sous-champs de la case à cocher "Éligibilité au CPF"
      // doivent etre cachés si celle-ci n'est pas cochée.
      if (!$('#edit-field-cpf-eligible-und').is(':checked')) {
        $('.field-name-field-rncp-code').hide();
        $('.field-name-field-official-title').hide();
        $('.field-name-field-cpf-public-record').hide();
      }
      // 2 - Gestion du clic de la case à cocher .
      // Si le coE coche la case, les 3 sous-champs doivent apparaitre.
      // S'il la décoche, les 3 sous-champs doivent disparaitre et leur contenu vidé.
      $('#edit-field-cpf-eligible-und').click(function () {
        var duration = 400;
        if ($(this).is(':checked')) {
          $('.form-item-field-rncp-code-und-0-value label').append('<span class="form-required" title="Ce champ est requis.">*</span>');
          $('.field-name-field-rncp-code').show(duration);

          $('.form-item-field-official-title-und-0-value label').append('<span class="form-required" title="Ce champ est requis.">*</span>');
          $('.field-name-field-official-title').show(duration);

          $('.field-name-field-cpf-public-record').show(duration);
        }
        else {
          $('#edit-field-rncp-code-und-0-value').val('');
          $('.field-name-field-rncp-code').hide(duration);

          $('#edit-field-official-title-und-0-value').val('');
          $('.field-name-field-official-title').hide(duration);

          $('#edit-field-cpf-public-record-und-0-url').val('');
          $('.field-name-field-cpf-public-record').hide(duration);
        }
      });
      /////////////////////////////////////// Fin Champs CPF ///////////////////////////////////////////////////////////
    }
  };
}(jQuery));
