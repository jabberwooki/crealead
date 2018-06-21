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
    }
  };
}(jQuery));
