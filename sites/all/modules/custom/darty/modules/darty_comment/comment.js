var push_more_comment = 1;
function loadAjaxComment(base_path, url) {
    $.get(base_path + url + '?rand=' + Math.floor((Math.random() * 1000000) + 1), function(data) {
        $('#comment-wrapper').html(data);
        $('#more_comment_btn').on('click',function(){
           push_more_comment++;
           displayProgressivComment();
        });
        displayProgressivComment();
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
function displayProgressivComment(){
    var count = 0;
    var btn_display = 0;
    $('#comments .list-comment').children().each(function(){
       if ($(this).get(0).tagName === 'A'){
           count++;
       }
       if (count >(push_more_comment*10) && $(this).attr('id') !== 'more_comment_btn'){
           $(this).hide();
           btn_display = 1;
       }
       else
           $(this).show();
       if (btn_display === 0)
            $('#more_comment_btn').hide();
        
    });
}