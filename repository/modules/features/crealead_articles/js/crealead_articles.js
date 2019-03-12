/**
 * Created by ubuntu on 27/02/19.
 */

(function ($) {

  Drupal.behaviors.articles = {
    attach: function (context, settings) {
      $('#article-node-form .text-summary').keyup(function() {
        var len = this.value.length;
        if (len >= 300) {
          this.value = this.value.substring(0, 300);
        }
        $('#article-node-form .remaining-chars').text(300 - len);
      });
    }
  };
}(jQuery))
