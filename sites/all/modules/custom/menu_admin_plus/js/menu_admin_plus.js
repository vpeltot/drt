jQuery(document).ready(function(){ 
  jQuery("#menu_admin_plus ul").css('display','block');
  jQuery("#menu_admin_plus ul li ul").css('display','none'); 
  jQuery("#menu_admin_plus ul").first().addClass('topnav');
  jQuery("#menu_admin_plus ul.topnav ul").addClass('subnav');
  jQuery("#menu_admin_plus ul.subnav").parent().append("<span></span>"); //Only shows drop down trigger when js is enabled (Adds empty span tag after ul.subnav*)  
  jQuery("#menu_admin_plus ul.topnav li.firstlevel").children('a').click(function(e){
	var tabSub = jQuery(this).parent().children('ul.subnav');
	if (tabSub.length > 0){
	    jQuery(this).parent().children('span').click();
	    return false;
	}
  });  
  jQuery("#menu_admin_plus ul.topnav li span").click(function(e) { //When trigger is clicked...  
    e.stopPropagation();
    //Following events are applied to the subnav itself (moving subnav up and down)  
    jQuery(this).parent().find("ul.subnav").slideDown('fast').show(); //Drop down the subnav on click  
    
    jQuery(this).parent().hover(function() {  
      }, function(){  
        jQuery(this).parent().find("ul.subnav").slideUp('slow'); //When the mouse hovers out of the subnav, move it back up  
      });  
    
  //Following events are applied to the trigger (Hover events for the trigger)  
  }).hover(function() {  
    jQuery(this).addClass("subhover"); //On hover over, add class "subhover"  
  }, function(){  //On Hover Out  
    jQuery(this).removeClass("subhover"); //On hover out, remove class "subhover"  
  });  
    
});  
