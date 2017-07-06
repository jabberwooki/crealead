/**
 * Created by ubuntu on 05/07/17.
 */

(function ($) {
  Drupal.behaviors.newsflashes = {
    attach: function (context, settings) {
      $('#edit-submit').attr('disabled','disabled');

      $('#edit-newsflashes-list .form-checkbox').click(function () {
        var checkedBoxes = $('#edit-newsflashes-list input[type=checkbox]:checked');
        if (checkedBoxes.length == 0) {
          $('#edit-submit').attr('disabled','disabled');
        }
        else {
          $('#edit-submit').removeAttr('disabled');
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