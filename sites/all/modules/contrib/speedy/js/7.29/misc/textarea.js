(function(e){Drupal.behaviors.textarea={attach:function(t,n){e(".form-textarea-wrapper.resizable",t).once("textarea",function(){function i(r){return t=n.height()-r.pageY,n.css("opacity",.25),e(document).mousemove(s).mouseup(o),!1}function s(e){return n.height(Math.max(32,t+e.pageY)+"px"),!1}function o(t){e(document).unbind("mousemove",s).unbind("mouseup",o),n.css("opacity",1)}var t=null,n=e(this).addClass("resizable-textarea").find("textarea"),r=e('<div class="grippie"></div>').mousedown(i);r.insertAfter(n)})}}})(jQuery);