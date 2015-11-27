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
      slide_width,
      control_zone_width,
      margin_left_controlers_1,
      margin_left_controlers_2,
      first_mvt_width,
      mvt_width,
      selected_slide,
      first_slide,
      second_slide,
      last_slide;

  slide_show_height = 531; // pour l'instant, le diapo ne s'adapte pas en hauteur
  slide_width = 858; // pour l'instant, le diapo ne s'adapte pas en largeur
  control_zone_width = 286;
  selected_slide = 0;

  window_width = $(window).width();
  nb_slide = $('.row-diapo').length;
  wrapper_slide_show_width = nb_slide * slide_width;


  slide_show_central_zone = (window_width > 1230) ? 1100 : 992;
  margin_left_controlers_1 = ((window_width - slide_show_central_zone) / 2);
  margin_left_controlers_2 = margin_left_controlers_1 + slide_show_central_zone - control_zone_width;

  first_mvt_width = - slide_width + (window_width -slide_width) / 2 ;

  // Placement des controlleurs
  $('.view-display-id-controlers_1').css('left', margin_left_controlers_1 + 'px');
  $('.view-display-id-controlers_2').css('left', margin_left_controlers_2 + 'px');

  // Ajout de la derniere diapo au début
  first_slide = $(".row-diapo:first");
  last_slide  = $(".row-diapo:last");
  $(".wrapper-diapo").prepend(last_slide);

  // positionnement initial du slideshow
  $(".wrapper-diapo").animate({marginLeft:first_mvt_width},800);

  // Gestion des click sur les contrôleurs
  $('.controler').each(function(index){
    $(this).click(function(event){
      moove(index);
      return false;
    });
  });

  // Fonction d'animation
  function moove(num_controler){
    if(num_controler != selected_slide && num_controler == (nb_slide-1)){
      last_slide = $(".row-diapo:last");
      if(!last_slide.hasClass( "views-row-first" )){
        console.log("Je rentre dans le cas où il faut envoyer les deux premiers slide en fin...");
        first_slide = $(".row-diapo:first");
        $(".wrapper-diapo").append(first_slide);
        first_slide = $(".row-diapo:first");
        $(".wrapper-diapo").append(first_slide);
        mvt_width = ((num_controler-2) - selected_slide) * slide_width;
      }else {
      mvt_width = slide_width * (num_controler - selected_slide);
      console.log("largeur du déplacement : " + mvt_width);
      }
    }else if(num_controler != selected_slide && num_controler == 0){
      first_slide = $(".row-diapo:first");
      if(!first_slide.hasClass( "views-row-last" )){
        console.log("Je rentre dans le cas où il faut envoyer les deux derniers slide au début...");
        last_slide = $(".row-diapo:last");
        $(".wrapper-diapo").prepend(last_slide);
        last_slide = $(".row-diapo:last");
        $(".wrapper-diapo").prepend(last_slide);
        mvt_width = ((num_controler+2) - selected_slide) * slide_width;
      }else {
        mvt_width = slide_width * (num_controler - selected_slide);
        console.log("largeur du déplacement : " + mvt_width);
      }
    }else{
      mvt_width = slide_width * (num_controler - selected_slide);
      console.log("largeur du déplacement : " + mvt_width);
    }
    $(".wrapper-diapo").stop().animate({marginLeft:"-="+mvt_width},800);
    console.log("diff : " + (num_controler - selected_slide));

    console.log('num_controler : ' + num_controler);
    console.log('old selected_slide : ' + selected_slide);

    selected_slide = num_controler;
    console.log('new selected_slide : ' + selected_slide);
  }

  /*console.log("largeur du wrapper : " + wrapper_slide_show_width);
  console.log("Premier mouvement : " + first_mvt_width);
*/

  /*$(".slideshow ul").animate({marginLeft:-350},800,function(){
    $(this).css({marginLeft:0}).find("li:last").after($(this).find("li:first"));
  })
*/


});
