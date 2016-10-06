/**
 * Created by ubuntu on 29/09/16.
 */

(function ($) {

  Drupal.behaviors.brands = {
    attach: function (context, settings) {
      // Espace co-entrepreneur menu turned as bootstrap tabs.
      $('#block-menu-menu-coe-area ul').addClass('nav-tabs');
    }
  };
}(jQuery))
