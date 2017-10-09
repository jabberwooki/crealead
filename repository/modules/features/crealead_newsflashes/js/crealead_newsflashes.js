/**
 * Created by ubuntu on 05/07/17.
 */

(function ($) {
  Drupal.behaviors.newsflashes = {
    attach: function (context, settings) {
      $('#edit-include-full-body').hide();
      $('#edit-submit').attr('disabled','disabled');

      $('#crealead-newsflashes-manual-sending-form .form-checkbox').click(function () {
        var checkedBoxes = $('#crealead-newsflashes-manual-sending-form input[type=checkbox]:checked');
        if (checkedBoxes.length == 0) {
          $('#edit-submit').attr('disabled','disabled');
        }
        else {
          $('#edit-submit').removeAttr('disabled');

          if (checkedBoxes.length == 1) {
            $('#edit-include-full-body').show();
          }
          else {
            $('#edit-include-full-body').hide();
            $('#edit-full-body-yes-no-0').prop('checked', true);
            $('#edit-full-body-yes-no-1').prop('checked', false);
          }
        }
      });

      // var attr = $('#edit-submit').attr('disabled');
      // console.log(typeof  attr);
      // // console.log(attr.length);
      // if(typeof attr !== undefined && attr !== false) {
      //   console.log('enabled');
      // }
      // else {
      //   console.log('disabled');
      // }

    }
  };
}(jQuery));