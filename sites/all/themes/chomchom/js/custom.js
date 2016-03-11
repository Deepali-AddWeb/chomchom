(function ($) {
  Drupal.behaviors.chomchom = {
    attach: function (context, settings) {
      //checkbox design
      jQuery('input[type="checkbox"]').wrap('<div class="input-rc"></div>');
      jQuery('.input-rc').append('<span class="input-rc-span"></span>');
      
      //radio button design
      jQuery('input[type="radio"]').wrap('<div class="radio-rc"></div>');
      jQuery('.radio-rc').append('<span class="radio-rc-span"></span>');

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

      //Business directory page append div after city field in filter  
      jQuery( "<div class='for-border'></div>" ).insertAfter( "#edit-field-categories-tid-wrapper" );

    }
  };
}(jQuery));