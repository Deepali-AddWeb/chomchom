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
      if(pathArray[2] == 'sang-tiem-search'){
        jQuery("#quicktabs-search ul.quicktabs-tabs li").removeClass("active");
        jQuery("#quicktabs-search ul.quicktabs-tabs li:nth-child(2)").addClass("active");
      }
    }
  };
}(jQuery));