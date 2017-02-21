/**
 * Created by ubuntu on 21/02/17.
 */

(function ($) {

  Drupal.behaviors.training_sessions = {
    attach: function (context, settings) {
      $('.view-display-id-all_sessions .view-grouping-header a').wrap('<h2></h2>');
    }
  };
}(jQuery));