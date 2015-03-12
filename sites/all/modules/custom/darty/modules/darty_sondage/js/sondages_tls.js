function loadAjaxSondagesTls(basepath) {
    $.get(basepath + 'ajax/sondages_encours', function(data) {
        $('#sondages_tls_encours').html(data);
        sondage_tls_vote(basepath);
        heightSondageEnCoursWrapperHarmonize();
    });
    sondages_tls_ajax_termines(basepath, 1);
}
function sondages_tls_ajax_termines(basepath, num) {
    $.get(basepath + 'ajax/sondages_termines/' + num, function(data) {
        $('#sondages_tls_termines').html(data);
        heightSondageTerminesWrapperHarmonize();
    });
}
function sondage_tls_paginate(basepath) {
    $('#sondages_tls_termines span').on('click', function() {
        sondages_tls_ajax_termines(basepath, $(this).attr('data'));
    });
}
function sondage_tls_vote(basepath) {
    $('.sondage-wrapper .btn-vote').on('click', function() {
        var btn_vote = $(this);
        var input_radio_checked = $(this).parents('.reponses').find('input[type=radio]:checked');
        var value_response = input_radio_checked.val();
        if (value_response === undefined) {
            $(this).parents('.reponses').find('.message').html('Merci de sélectionner une réponse avant de valider');
        } else {
            var name_question = input_radio_checked.attr('name');
            var matches = name_question.match(/reponse_(\d+)/);
            $.post(basepath + 'ajax/sondage/tls/' + matches[1], {val: value_response}, function(data) {
                $(btn_vote.parents('.sondage-wrapper').get(0)).html(data);
                sondage_tls_vote(basepath);
                heightSondageEnCoursWrapperHarmonize();
                heightSondageTerminesWrapperHarmonize();
            });
        }
    });
}
function heightSondageEnCoursWrapperHarmonize() {
    var height = 0;
    var cur_height = 0;
    var nbtotal = $('#sondages_tls_encours .sondage-wrapper').length;
    var bc = Math.ceil(nbtotal / 3);
    for (var i = 0; i < bc; i++) {
        height = 0;
        for (var j = 0; j < 3; j++) {
            cur_height = $($('#sondages_tls_encours .sondage-wrapper').get(i * 3 + j)).height();
            if (height < cur_height)
                height = cur_height;
        }
        for (var j = 0; j < 3; j++) {
            if ($($('#sondages_tls_encours .sondage-wrapper').get(i * 3 + j)).height() < height) {
                $($('#sondages_tls_encours .sondage-wrapper').get(i * 3 + j)).css({'margin-bottom': (height - $($('#sondages_tls_encours .sondage-wrapper').get(i * 3 + j)).height() + 20) + 'px'});
            } else {
                $($('#sondages_tls_encours .sondage-wrapper').get(i * 3 + j)).css({'margin-bottom': '20px'});
            }
        }
    }
}
function heightSondageTerminesWrapperHarmonize() {
    var height = 0;
    var cur_height = 0;
    var nbtotal = $('#sondages_tls_termines .sondage-wrapper').length;
    var bc = Math.ceil(nbtotal / 3);
    for (var i = 0; i < bc; i++) {
        height = 0;
        for (var j = 0; j < 3; j++) {
            cur_height = $($('#sondages_tls_termines .sondage-wrapper').get(i * 3 + j)).height();
            if (height < cur_height)
                height = cur_height;
        }
        for (var j = 0; j < 3; j++) {
            if ($($('#sondages_tls_termines .sondage-wrapper').get(i * 3 + j)).height() < height) {
                $($('#sondages_tls_termines .sondage-wrapper').get(i * 3 + j)).css({'margin-bottom': (height - $($('#sondages_tls_termines .sondage-wrapper').get(i * 3 + j)).height() + 20) + 'px'});
            } else {
                $($('#sondages_tls_termines .sondage-wrapper').get(i * 3 + j)).css({'margin-bottom': '20px'});
            }
        }
    }
}