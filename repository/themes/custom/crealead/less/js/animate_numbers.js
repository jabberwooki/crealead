/**
 * Created by yvan on 20/11/15.
 */
jQuery(function($) {
  var coes_number = $('#coes-number').text();
  var refs_number = $('#refs-number').text();
  var speakers_number = $('#speakers-number').text();
  var meetings_number = $('#meetings-number').text();

  $('#coes-number').animateNumber({ number: coes_number },2000);
  $('#refs-number').animateNumber({ number: refs_number },2000);
  $('#speakers-number').animateNumber({ number: speakers_number },2000);
  $('#meetings-number').animateNumber({ number: meetings_number },2000);
});
