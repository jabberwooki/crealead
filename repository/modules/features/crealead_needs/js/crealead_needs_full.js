/**
 * Created by ubuntu on 10/07/17.
 */

(function ($) {

  Drupal.behaviors.needsFull = {
    attach: function (context, settings) {
      $('.node-need').wrap('<div id="node-need-full-wrapper"></div>');
    }
  };
}(jQuery))