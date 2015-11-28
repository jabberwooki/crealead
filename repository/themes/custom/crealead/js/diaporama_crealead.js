/**
 * Created by yvan on 27/11/15.
 */
jQuery(function($) {
  //paramètres de base
  var slide_show_height,
      slide_show_central_zone,
      window_width,
      wrapper_slide_show_width,
      nb_slide,
      nb_mvt,
      timer,
      slide_width,
      control_zone_width,
      margin_left_controlers_1,
      margin_left_controlers_2,
      first_mvt_width,
      mvt_width,
      selected_slide,
      first_slide,
      last_slide,
      animate;

  window_width = $( window ).width();
  animate = (window_width >= 992);

  $( window ).resize(function() {
    initiate_slide_show();
  });

  /* Opérations nécessaires uniquement au premier chargement ******************/
  if (animate) {
    slide_show_height = 531; // pour l'instant, le diapo ne s'adapte pas en hauteur
    slide_width = 858; // pour l'instant, le diapo ne s'adapte pas en largeur
    control_zone_width = 286;
    selected_slide = 0;

    // Mise en place de la class controler-selected sur le premier controler
    $(".controler:first").addClass("controler-selected");

    // Ajout de la derniere diapo au début
    first_slide = $(".row-diapo:first");
    last_slide  = $(".row-diapo:last");
    $(".wrapper-diapo").prepend(last_slide);

    initiate_slide_show();

    // positionnement initial du slideshow
    $(".wrapper-diapo").animate({marginLeft:first_mvt_width},0);

    // Gestion des click sur les contrôleurs
    $('.controler').each(function(index){
      $(this).click(function(event){
        if(animate){
          moove(index);
          return false;
        }
      });
    });

  }

  /* Fonction d'animation *****************************************************/
  function moove(num_controler){
    mvt_width = slide_width * (num_controler - selected_slide);
    nb_mvt = (num_controler - selected_slide);
    timer = 800 / nb_mvt;
    if ((num_controler - selected_slide) > 0) {

        $(".wrapper-diapo").animate({marginLeft:"-=" + mvt_width},timer,function() {
          for(var i = 0;i< Math.abs(nb_mvt);i++){
            $(this).css({marginLeft:first_mvt_width}).find(".row-diapo:last").after($(this).find(".row-diapo:first"));
          }
        })

    }else if((num_controler - selected_slide) < 0) {
      for (var i = 0; i < Math.abs(nb_mvt); i++) {
        $(".wrapper-diapo").animate({marginLeft: "+=" + slide_width}, timer, function () {
          $(this).css({marginLeft: first_mvt_width}).find(".row-diapo:first").before($(this).find(".row-diapo:last"));
        })
      }
    }

    selected_slide = num_controler;
    //Gestion des controlers
    $(".controler").removeClass("controler-selected");
    $(".controler:eq( "+num_controler+" )").addClass("controler-selected");

  }


  /* Fonction d'initialisation du slideshow ***********************************/
  function initiate_slide_show(){
    animate = (window_width >= 992);
    if(animate){
      nb_slide = $('.row-diapo').length;
      wrapper_slide_show_width = nb_slide * slide_width;
      $('.wrapper-diapo').width(wrapper_slide_show_width);

      slide_show_central_zone = (window_width > 1230) ? 1100 : 992;
      margin_left_controlers_1 = ((window_width - slide_show_central_zone) / 2);
      margin_left_controlers_2 = margin_left_controlers_1 + slide_show_central_zone - control_zone_width;

      first_mvt_width = - slide_width + (window_width -slide_width) / 2 ;

      // Placement des controleurs
      $('.view-display-id-controlers_1').css('left', margin_left_controlers_1 + 'px');
      $('.view-display-id-controlers_2').css('left', margin_left_controlers_2 + 'px');

      // Re-positionnement du slideshow
      $(".wrapper-diapo").animate({marginLeft:first_mvt_width},0);
    }else{
      $(".wrapper-diapo").animate({marginLeft:30},0);
    }


  }

});
