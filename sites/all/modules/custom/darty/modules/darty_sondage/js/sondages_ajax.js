function sondage_ajax_vote() {
    $('.sondage-wrapper .btn-vote').on('click', function() {
        alert($(this).parent().find('input[type=radio]:checked').val());
    });
}
function sondage_view(wrapper, basepath, nid, view_mode) {
    $.post(basepath + 'ajax/sondage/'+view_mode+'/' + nid + '/', function(data) {
        $(wrapper).html(data);
        sondage_vote(wrapper,basepath,nid,view_mode);
        adaptHeightSondageArticle($(wrapper));
    });
}
function sondage_vote(wrapper,basepath,nid,view_mode) {
    $(wrapper + ' .btn-vote').on('click', function() {
        var btn_vote = $(this);
        var sondage_wrapper = $(btn_vote.parents('.sondage-wrapper').get(0));
        var input_radio_checked = $(this).parents('.reponses').find('input[type=radio]:checked');
        var value_response = input_radio_checked.val();
        if (value_response === undefined) {
            $(this).parents('.reponses').find('.message').html('Vous devez sélectionner une réponse avant de valider votre choix');
            adaptHeightSondageArticle(sondage_wrapper);
        } else {
            var name_question = input_radio_checked.attr('name');
            var matches = name_question.match(/reponse_(\d+)/);
            $.post(basepath + 'ajax/sondage/'+view_mode+'/' + nid+'/', {val: value_response}, function(data) {
                sondage_wrapper.html(data);
                adaptHeightSondageArticle(sondage_wrapper);
                sondage_vote(wrapper,basepath,nid,view_mode);
            });
        }
    });
}
function adaptHeightSondageArticle(wrapper){
    var height_right = wrapper.find('.right-col').height();
    wrapper.find('.left-col').height(height_right);
    var height_text = wrapper.find('.titre').height();
    wrapper.find('.titre').css('padding-top',(height_right-height_text)/2);
}