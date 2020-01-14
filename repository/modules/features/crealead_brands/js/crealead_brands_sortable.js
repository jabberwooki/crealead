/**
 * Created by ubuntu on 15/11/19.
 */

(function ($) {
  Drupal.behaviors.sector_brands = {
    attach: function (context, settings) {
      // Makes sortable brands visible at bottom of coe profile edit page.
      // Saving notice must be hidden first.
      $('#brands-order-saving-notice').hide();
      $('#sortable-brands').sortable({
        opacity: 0.5,
        stop: function(evt, ui) {
          var brandsList = [];
          $('#sortable-brands li').each(function () {
            brandsList.push($(this).attr('id'));
          });
          $('#edit-profile-coe-page-field-brands-order-und-0-value').val(brandsList.join('|'));
          $('#brands-order-saving-notice').show();

        }
      });
      $('#sortable-brands').disableSelection();
    }
  };
}(jQuery));
