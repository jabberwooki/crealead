/**
 * Created by ubuntu on 10/04/18.
 */

(function ($) {
  Drupal.behaviors.trainingList = {
    attach: function (context, settings) {
      // Add node wrapper for ajax refresh purposes
      $('.node-training .field-name-training-nid .field-item.even').each(function () {
        var trainingNid = $(this).text();
        $(this).parents().eq(5).wrap('<div id="node-training-item-wrapper-' + trainingNid + '" class="training-item-wrapper"></div>');
      });

      // CUSTOM FILTERS HANDLING.
      var customFiltersExist = false;
      var filtersHtml = '';

      // Crealead price
      if ($('#edit-field-custom-crealead-price-value').length) {
        customFiltersExist = true;
        var crealeadPriceHtml = $('div.views-submit-button .form-item-field-custom-crealead-price-value').html();
        filtersHtml += '<div class="views-widget">' + crealeadPriceHtml + '</div>';
        $('div.views-submit-button .form-item-field-custom-crealead-price-value').remove();
      }

      // Coopins
      if ($('#edit-field-custom-coopins-value').length) {
        customFiltersExist = true;
        var coopinsHtml = $('div.views-submit-button .form-item-field-custom-coopins-value').html();
        filtersHtml += '<div class="views-widget">' + coopinsHtml + '</div>';
        $('div.views-submit-button .form-item-field-custom-coopins-value').remove();
      }

      // Crealead funded
      if ($('#edit-field-custom-crealead-funded-value').length) {
        customFiltersExist = true;
        var crealeadFundecHtml = $('div.views-submit-button .form-item-field-custom-crealead-funded-value').html();
        filtersHtml += '<div class="views-widget">' + crealeadFundecHtml + '</div>';
        $('div.views-submit-button .form-item-field-custom-crealead-funded-value').remove();
      }

      // Moving filters to the right place in form.
      if (customFiltersExist) {
        $('div.views-submit-button').before(
          '<div id="edit-custom-coopins-value-wrapper" class="views-exposed-widget">'
          + '<div>&nbsp;</div>'
          + '<div class="views-widget">'
          + filtersHtml
          + '</div></div>'
        );
      }
    }
  };
}(jQuery));
