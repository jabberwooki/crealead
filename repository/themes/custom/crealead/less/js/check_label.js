/**
 * Created by yvan on 23/11/15.
 */
jQuery(function($) {
  // au chargement, différencie le label dont l'input est checké
  $('input[checked]').siblings().addClass('input-checked');

  // au click, différencie le label
  $('.form-type-radio label').each(function(index){
    $(this).click(function( event ){
      $('.form-type-radio label').each(function(){
        $(this).removeClass('input-checked');
      });
      $(event.target).addClass('input-checked');
    });
  });
});