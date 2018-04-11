/**
 * Created by ubuntu on 10/04/18.
 */

(function ($) {

  Drupal.behaviors.trainingFull = {
    attach: function (context, settings) {
      // Add node wrapper for ajax refresh purposes
      $('.node-training').wrap('<div id="node-training-full-wrapper"></div>');
    }
  };
}(jQuery));
