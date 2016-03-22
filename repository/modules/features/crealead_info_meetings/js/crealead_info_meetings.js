/**
 * Created by ubuntu on 21/03/16.
 */

(function ($) {
  Drupal.behaviors.advanced_pages = {
    attach: function (context, settings) {
      // First we hide non used dependent info fields.
      var checkedValue = $('input[name="field_registrant_status[und]"]:checked').parent().text().charAt(4);
      console.log('value = ' + checkedValue);
      if (checkedValue != 'R') {
        $("div[id^=edit-field-beneficiary-number]").hide();
      }
      if (checkedValue != 'P') {
        $("div[id^=edit-field-unemployment-date]").hide();
      }
      if (checkedValue != 'A') {
        $("div[id^=edit-field-other-specify]").hide();
      }

      $('input[name="field_registrant_status[und]"]:radio').click(function () {
        var firstLetter = $('input[name="field_registrant_status[und]"]:radio:checked').parent().text().charAt(4);
        var duration = 500;
        if (firstLetter == 'R') {
          $("input[id^=edit-field-unemployment-date]").val('');
          $("div[id^=edit-field-unemployment-date]").hide(duration);
          $("input[id^=edit-field-other-specify]").val('');
          $("div[id^=edit-field-other-specify]").hide(duration);

          $("div[id^=edit-field-beneficiary-number]").show(duration);
        }
        else if (firstLetter == 'P') {
          $("input[id^=edit-field-beneficiary-number]").val('');
          $("div[id^=edit-field-beneficiary-number]").hide(duration);
          $("input[id^=edit-field-other-specify]").val('');
          $("div[id^=edit-field-other-specify]").hide(duration);

          $("div[id^=edit-field-unemployment-date]").show(duration);
        }
        else if (firstLetter == 'A') {
          $("input[id^=edit-field-beneficiary-number]").val('');
          $("div[id^=edit-field-beneficiary-number]").hide(duration);
          $("input[id^=edit-field-unemployment-date]").val('');
          $("div[id^=edit-field-unemployment-date]").hide(duration);

          $("div[id^=edit-field-other-specify]").show(duration);
        }
        else {
          $("input[id^=edit-field-beneficiary-number]").val('');
          $("div[id^=edit-field-beneficiary-number]").hide(duration);
          $("input[id^=edit-field-unemployment-date]").val('');
          $("div[id^=edit-field-unemployment-date]").hide(duration);
          $("input[id^=edit-field-other-specify]").val('');
          $("div[id^=edit-field-other-specify]").hide(duration);
        }
      });
    }
  };
}(jQuery));