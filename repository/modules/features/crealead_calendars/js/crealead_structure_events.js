/**
 * Created by ubuntu on 17/11/19.
 */

(function ($) {
  Drupal.behaviors.structureEvents = {
    attach: function (context, settings) {
      // Gestion de l'affichage du formulaire d'envoi manuel des événements Structure //////////////////////////////////
      // 1 - On récupére les trois champs de type case à cocher (1 semaine, 2 semaines, 1 mois)
      var period0 = $('.form-item-crealead-structure-events-0');
      var period1 = $('.form-item-crealead-structure-events-1');
      var period2 = $('.form-item-crealead-structure-events-2');

      // 2 - On stocke les sélecteurs dans le tableau periods
      var periods = [period0, period1, period2];
      // et le contenu HTML de chaque champ dans le tableau periodMarkups
      var periodMarkups = [period0.html(), period1.html(), period2.html()];

      // 3 - Au premier affichage du formulaire, on récupère la période cochée
      var checkedPeriod = $('#edit-structure-events-manual-sending-period input:checked').val();
      // et on affiche cette péridoe
      showSelectedPeriod(periods, periodMarkups, checkedPeriod);

      // 4 - A la sélection d'une période (boutons radio)...
      $('#edit-structure-events-manual-sending-period .form-type-radio').click(function () {
        // on récupère la période cochée
        checkedPeriod = $('#edit-structure-events-manual-sending-period .form-type-radio input:checked').val();
        // et on affiche cette période.
        showSelectedPeriod(periods, periodMarkups, checkedPeriod);
      });

      // Fonction d'affichage de la période sélectionnée.
      function showSelectedPeriod(periods, periodMarkups, checkedPeriod) {
        periods.forEach(function(period) {
          period.html('');
        });
        periods[checkedPeriod].html(periodMarkups[checkedPeriod]);
        periods[checkedPeriod].find('.form-checkboxes input.checkbox').css('border', '1px solid red');
        periods[checkedPeriod].find('.form-checkboxes input.checkbox').prop('checked', true);

      }
      // Fin de Gestion de l'affichage du formulaire d'envoi manuel des événements Structure ///////////////////////////

    }
  };
}(jQuery));