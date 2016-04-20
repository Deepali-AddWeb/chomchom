(function ($) {
  Drupal.behaviors.chomchom = {
    attach: function (context, settings) {



      //checkbox design
      jQuery('input[type="checkbox"]').wrap('<div class="input-rc"></div>');
      jQuery('.input-rc').append('<span class="input-rc-span"></span>');
      
      //radio button design
      jQuery('input[type="radio"]').wrap('<div class="radio-rc"></div>');
      jQuery('.radio-rc').append('<span class="radio-rc-span"></span>');

      /* Wrap class for feildset */
      jQuery('#edit-field-image fieldset').wrap('<div class="custom_fieldset_wrap"></div>');
     /* End */

      var height = jQuery(window).height();
      var headerHeight = jQuery('header').outerHeight();
      var footerHeight = jQuery('.footer').outerHeight();
      var finalHeight = height - headerHeight - footerHeight - 55;
      jQuery('.main-container.container').css('min-height', finalHeight);
      jQuery(window).resize(function(){
        var height = jQuery(window).height();
      var headerHeight = jQuery('header').outerHeight();
      var footerHeight = jQuery('.footer').outerHeight();
      var finalHeight = height - headerHeight - footerHeight - 55;
      jQuery('.main-container.container').css('min-height', finalHeight);
    });

      //when second quicktab search then load second load 
      var pathArray = window.location.pathname.split( '/' );
      console.log(pathArray[1]);
      if(pathArray[1] == 'sang-tiem-search'){
        jQuery("#quicktabs-search ul.quicktabs-tabs li").removeClass("active");
        jQuery("#quicktabs-search ul.quicktabs-tabs li:nth-child(2)").addClass("active");
        jQuery("#quicktabs-tabpage-search-1").removeClass("quicktabs-hide");
        jQuery("#quicktabs-tabpage-search-0").addClass("quicktabs-hide");
      }else if (pathArray[1] == 'sang-tiem') {
        jQuery("#quicktabs-search ul.quicktabs-tabs li").removeClass("active");
        jQuery("#quicktabs-search ul.quicktabs-tabs li:nth-child(2)").addClass("active");
        jQuery("#quicktabs-tabpage-search-1").removeClass("quicktabs-hide");
        jQuery("#quicktabs-tabpage-search-0").addClass("quicktabs-hide");
      }
      //disable category field in edit form 
      if (jQuery(".node-type-listing").hasClass("page-node-edit")) {
        jQuery("#edit-field-category select").attr("disabled", true);   
      }

      //Append div after city field in filter
        jQuery( "<div class='for-border'></div>" ).insertAfter( "#edit-city-wrapper" );
        jQuery( "<div class='for-border'></div>" ).insertAfter( "#edit-city-sang-tiem-wrapper" );

      //Business directory page append div after city field in filter 
        jQuery( "<div class='for-border'></div>" ).insertAfter( ".page-business-directory #edit-province-wrapper" );

      //quang page append div after city field in filter 
        jQuery( "<div class='for-border'></div>" ).insertAfter( ".page-quang-cao-rao-vat #edit-province-wrapper" );

      if(jQuery(".views-field-field-hours .field-content div").hasClass('oh-current-closed')){
        jQuery(".views-field-field-hours .field-content .oh-display").hide();
        jQuery(".views-field-field-hours .field-content .oh-current-closed").css("padding-top", "10px"); 
      }
      
      jQuery(".view-search .view-content .views-row .main-sub-right-top-save .flag-add-to-favorites a").click(function(event){
          event.stopPropagation(); 
      });

      jQuery(".view-search .view-content .views-row").click(function () {
        window.location.href = jQuery(this).find( ".main-sub-right-top-title a" ).attr('href');
      });

    }
  };

}(jQuery));

jQuery( window ).load(function() {

  /*jQuery( "#edit-submit-search" ).click(function() {
        statename = jQuery(this).parent().parent().find( "#edit-province option[selected='selected']" ).text();
        alert(jQuery( ".user-region" ).text());
        alert(statename+'dfs');
        jQuery( ".user-region" ).text(statename);
      });*/

  // For state name change.	
  statename = jQuery('#edit-submit-search').parent().parent().find( "#edit-province option[selected='selected']" ).text();
  if (statename != '') {
    jQuery( ".user-region" ).text(statename);
  }

  jQuery("#block-views-9202d1da1b4ebb88a4dc9b242ac93292").css("display", "none"); 
   jQuery(".full-address   a").click(function () {
    //jQuery("#block-views-9202d1da1b4ebb88a4dc9b242ac93292").css({"display": "block"});
    jQuery("#block-views-9202d1da1b4ebb88a4dc9b242ac93292").css({"display": "block", "background": "rgba(0,0,0,0.7)", "position": "fixed","top": "0","left":"0","width":"100%","height":"100%"});
    jQuery("#block-views-9202d1da1b4ebb88a4dc9b242ac93292 #gmap-auto1map-gmap0").css({"margin": "0 0 0 -250px","position": "absolute","left":"50%","top":"30%" });
    jQuery( "#block-views-9202d1da1b4ebb88a4dc9b242ac93292" ).append( "<div class='close-button'>X</div>" );
    jQuery(".close-button").css({ "position": "absolute","background-color": "red","top":"28%","left":"68.6%","z-index":"1000","padding":"5px" ,"color":"#fff","border-radius":"50%","border":"1px solid #000"});

  });
  jQuery("#block-views-9202d1da1b4ebb88a4dc9b242ac93292").on("click",".close-button",function () {
    jQuery("#block-views-9202d1da1b4ebb88a4dc9b242ac93292").css({"display": "none"});
  });

  jQuery(".page-business-directory .field-coupon .coupons-detail ").css("display", "none");

  jQuery(".field-coupon a").click(function () {
    jQuery( ".close-button-second" ).remove();
    //jQuery(".field-coupon").css({ "background": "rgba(0,0,0,0.7)", "position": "fixed","top": "0","left":"0","width":"100%","height":"100%"});
   // jQuery(".coupons-detail").css({"display":"block","background": "rgba(0,0,0,0.1)","position": "fixed","left":"0","top":"0","width":"100%","height":"100%","z-index":"2"});
    jQuery(this).next(".coupons-detail").css({"display":"block","color":"#fff","background":"red"})
    ;
    jQuery(this).next( ".coupons-detail" ).children( ".all-field-collection" ).append( "<div class='close-button-second'>X</div>" );
  });


  jQuery(".all-field-collection").on("click",".close-button-second",function () {
   jQuery(".coupons-detail").css({"display": "none"});
  });

   
});
 

