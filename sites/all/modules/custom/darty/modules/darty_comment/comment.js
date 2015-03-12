function loadAjaxComment(base_path, url) {
    $.get(base_path + url + '?rand='+Math.floor((Math.random() * 1000000) + 1), function(data) {
        $('#comment-wrapper').html(data);
            $('.zone-partage .page_comment .number').html($('#comments .list-comment .bulle').html());
            $('.zone-partage .page_comment .label').html($('#comments .list-comment .title').html());
            $('.zone-partage .separateur_comment').show();
        
        $('#comment-form .charte a').fancybox({

            autoDimensions: false,
            width: '600',
            centerOnScroll: true
        });
        $('#comments .links .comment-signal a').fancybox({

            autoDimensions: false,
            width: '600',
            centerOnScroll: true
        });
        $('.darty_content_drupal .node .zone-contenu .comment-wrapper .indented').prev().addClass('hasAnswer');
        var anchorName = document.location.hash.substring(1);
        if ($("#" + anchorName).get(0) !== undefined)
            $('html,body').animate({scrollTop: $("#" + anchorName).offset().top}, 'slow');
    });
}