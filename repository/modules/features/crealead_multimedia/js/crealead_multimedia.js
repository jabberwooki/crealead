/**
 * Created by ubuntu on 21/06/16.
 */

(function ($) {
  Drupal.behaviors.crealed_multimedia = {
    attach: function (context, settings) {
      $("#edit-next").hide();
      
      $("#edit-source").change(function() {
        if ($(this).val() == 'scald_flickr') {
          $("#edit-next").hide();
          $("#edit-flickr-next").show();
        }
        else {
          $("#edit-next").show();
          $("#edit-flickr-next").hide();
          
        }
      });
    }
  };
}(jQuery));
