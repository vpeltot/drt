jQuery(document).ready(function($) {
    intialise_btn();
    $('.diaporama-wrapper .photos-wrapper .arrow_right').on('click', function() {
        item_diapo_to_show('right');
    });
    $('.diaporama-wrapper .photos-wrapper .arrow_left').on('click', function() {
        item_diapo_to_show('left');
    });
    $('.diaporama-wrapper .liste-vignette-wrapper .arrow_right').on('click',function(){

        item_active_group = $('.diaporama-wrapper .liste-vignette-wrapper .group.active');
        $('.diaporama-wrapper .liste-vignette-wrapper .group').removeClass('active');
        $(item_active_group).next().addClass('active');
        index_group = $('.diaporama-wrapper .liste-vignette-wrapper .group').index($('.diaporama-wrapper .liste-vignette-wrapper .group.active'));
        
         $('.diaporama-wrapper .photos .photo').removeClass('active');
        $($('.diaporama-wrapper .photos .photo').get(index_group*5)).addClass('active');
        
        intialise_btn();
    });
    $('.diaporama-wrapper .liste-vignette-wrapper .arrow_left').on('click',function(){

        item_active_group = $('.diaporama-wrapper .liste-vignette-wrapper .group.active');
        $('.diaporama-wrapper .liste-vignette-wrapper .group').removeClass('active');
        $(item_active_group).prev().addClass('active');
        index_group = $('.diaporama-wrapper .liste-vignette-wrapper .group').index($('.diaporama-wrapper .liste-vignette-wrapper .group.active'));
        
         $('.diaporama-wrapper .photos .photo').removeClass('active');
        $($('.diaporama-wrapper .photos .photo').get(index_group*5+4)).addClass('active');
        
        intialise_btn();
    });
    $('.diaporama-wrapper .liste-vignette-wrapper .vignette').on('click', function() {
        index = $('.diaporama-wrapper .liste-vignette-wrapper .vignette').index($(this));
        $('.diaporama-wrapper .photos .photo').removeClass('active');
        $('.diaporama-wrapper .contenus .contenu').removeClass('active');
        
        $($('.diaporama-wrapper .photos .photo').get(index)).addClass('active');
        $($('.diaporama-wrapper .contenus .contenu').get(index)).addClass('active');
        
        intialise_btn();
    });
    
    function item_diapo_to_show(sens){
        
        item_active_photo = $('.diaporama-wrapper .photos .photo.active');
        item_active_texte = $('.diaporama-wrapper .contenus .contenu.active');
        
        $('.diaporama-wrapper .photos .photo').removeClass('active');
        $('.diaporama-wrapper .contenus .contenu').removeClass('active');
        if (sens === 'right'){
            $(item_active_photo).next().addClass('active');
            $(item_active_texte).next().addClass('active');
        }
        else{
            $(item_active_photo).prev().addClass('active');
            $(item_active_texte).prev().addClass('active');
        }
        position_vignette();
        intialise_btn();
    }
    function position_vignette(){
        item_active = $('.diaporama-wrapper .photos .photo.active');
        index = $('.diaporama-wrapper .photos .photo').index(item_active);
        
        $('.diaporama-wrapper .liste-vignette-wrapper .group').removeClass('active');
        $($('.diaporama-wrapper .liste-vignette-wrapper .group').get(Math.floor(index/5))).addClass('active');
    }
    function intialise_btn(){
        item_active = $('.diaporama-wrapper .photos .photo.active');
        index = $('.diaporama-wrapper .photos .photo').index(item_active);
        
        $('.diaporama-wrapper .liste-vignette-wrapper .vignette').removeClass('active');
        $($('.diaporama-wrapper .liste-vignette-wrapper .vignette').get(index)).addClass('active');
        
        if (index === 0)
            $('.diaporama-wrapper .photos-wrapper .arrow_left').hide();
        else
            $('.diaporama-wrapper .photos-wrapper .arrow_left').show();
        if (index === $('.diaporama-wrapper .photos .photo').length -1)
            $('.diaporama-wrapper .photos-wrapper .arrow_right').hide();
        else
            $('.diaporama-wrapper .photos-wrapper .arrow_right').show();
        $('.current').html(index+1);
        
        item_active_group = $('.diaporama-wrapper .liste-vignette-wrapper .group.active');
        index_group = $('.diaporama-wrapper .liste-vignette-wrapper .group').index(item_active_group);
        if (index_group === 0)
            $('.diaporama-wrapper .liste-vignette-wrapper .arrow_left').hide();
        else
            $('.diaporama-wrapper .liste-vignette-wrapper .arrow_left').show();

        if (index_group === $('.diaporama-wrapper .liste-vignette-wrapper .group').length -1)
            $('.diaporama-wrapper .liste-vignette-wrapper .arrow_right').hide();
        else
            $('.diaporama-wrapper .liste-vignette-wrapper .arrow_right').show();
    }
});