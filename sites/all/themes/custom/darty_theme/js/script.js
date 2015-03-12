jQuery(document).ready(function($) {
    $('.print-icon').on('click', function() {
        window.print();
    });

    $('#link-sitemap-wrapper').html($('#link-sitemap-wrapper-header').html());
    $('#link-sitemap-wrapper-header').html('');

    //mettre en place menu ul li
    var menu = $.parseJSON(menuJson);

    $.each(menu, function(key, val) {
        if (key <= 4) {
            var spanlitag = $("<span></span>").text(val.title);
            var alitag = $("<a></a>").attr('href', val.url).append(spanlitag);
            var litag = $("<li class='" + val.class + "'></li>").append(alitag);
            if (val.children.length > 0) {
                var sub_ultag = $('<ul></ul>');
                litag.append(sub_ultag);
                $.each(val.children, function(key1, val1) {
                    var sub_alitag = $("<a></a>").attr('href', val1.url).text(val1.title);
                    var sub_litag = $("<li></li>").append(sub_alitag);
                    sub_ultag.append(sub_litag);
                });

            }

            $('#megamenu_header').append(litag);
        }
    });

    $('#megamenu_header').dcMegaMenu({
        rowItems: '3',
        speed: 'fast',
        effect: 'fade',
    });
    $('#footer_sitemap .arrow_footer').on('click', function() {
        $('#footer_sitemap').toggleClass('close');
    });


    $('.col_left .contenu img[alt]').one('load', function() {
        if (!$(this).hasClass('nolegende') && $(this).attr('alt') !== '') {
            var width = $(this).width();
            var height = $(this).height();
            var float = $(this).css('float');
            var marginLeft = $(this).get(0).style.marginLeft;
            var marginRight = $(this).get(0).style.marginRight;
            var marginTop = $(this).get(0).style.marginTop;
            var marginBottom = $(this).get(0).style.marginBottom;
            $(this).css('margin', 0);

            $(this).css('margin', 0);
            $(this).wrap('<div class="image-avec-legende" style="width:' + width + 'px;height:' + height + 'px;"></div>');
            $(this).parent().append('<div class="legende-label"><div>' + $(this).attr('alt') + '<div></div>');
            $(this).parent('.image-avec-legende').css('float', float);

            if (marginLeft !== '' && marginLeft !== 0 && marginLeft !== '0px')
                $(this).parent('.image-avec-legende').css('margin-left', marginLeft);
            else
                $(this).parent('.image-avec-legende').css('margin-left', '5px');
            if (marginRight !== '' && marginRight !== 0 && marginRight !== '0px')
                $(this).parent('.image-avec-legende').css('margin-right', marginRight);
            else
                $(this).parent('.image-avec-legende').css('margin-right', '5px');

            if (marginTop !== '' && marginTop !== 0 && marginTop !== '0px')
                $(this).parent('.image-avec-legende').css('margin-top', marginTop);
            else
                $(this).parent('.image-avec-legende').css('margin-top', '5px');

            if (marginBottom !== '' && marginBottom !== 0 && marginBottom !== '0px')
                $(this).parent('.image-avec-legende').css('margin-bottom', marginBottom);
            else
                $(this).parent('.image-avec-legende').css('margin-bottom', '5px');

            var height_legende = $(this).parent().find('.legende-label').height();
            $(this).parent().find('.legende-label').animate({'height': '0'}, 'fast')
            $(this).parent().mouseenter(function() {
                $(this).find('.legende-label').filter(':not(:animated)').animate({'height': height_legende + 'px'}, 'fast')
            });
            $(this).parent().mouseleave(function() {
                $(this).find('.legende-label').animate({'height': '0'}, 'fast')
            });
        }
    }).each(function() {
        if (this.complete)
            $(this).load();
    });

});
function createCookie(name, value, days) {
    var expires;
    if (days) {
        var date = new Date();
        date.setTime(date.getTime() + (days * 24 * 60 * 60 * 1000));
        expires = "; expires=" + date.toGMTString();
    }
    else {
        expires = "";
    }
    document.cookie = name + "=" + value + expires + "; path=/";
}

function readCookie(name) {
    var nameEQ = name + "=";
    var ca = document.cookie.split(';');
    for (var i = 0; i < ca.length; i++) {
        var c = ca[i];
        while (c.charAt(0) == ' ')
            c = c.substring(1, c.length);
        if (c.indexOf(nameEQ) == 0)
            return c.substring(nameEQ.length, c.length);
    }
    return null;
}