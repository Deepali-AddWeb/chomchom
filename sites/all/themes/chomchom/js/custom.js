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
        jQuery( "<div class='for-border'></div>" ).insertAfter( "#edit-field-categories-tid-wrapper" );

      if(jQuery(".views-field-field-hours .field-content div").hasClass('oh-current-closed')){
        jQuery(".views-field-field-hours .field-content .oh-display").hide();
        jQuery(".views-field-field-hours .field-content .oh-current-closed").css("padding-top", "10px"); 
      }
      
    }
  };

}(jQuery));
 

