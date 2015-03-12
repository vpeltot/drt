function quizz_view(wrapper, basepath, nid) {
    $.post(basepath + 'ajax/quizz/' + nid, function(data) {
        $(wrapper).html(data);
        adaptHeightQuizzArticle(wrapper);
        applyClickOnQuizzImage(wrapper);
        quizz_vote(wrapper,basepath,nid);
        
    });
}
function quizz_vote(wrapper, basepath, nid) {
    $(wrapper + ' .btn-vote').on('click', function() {
        var btn_vote = $(this);
        var quizz_wrapper = $(btn_vote.parents('.quizz-wrapper').get(0));
        var input_radio_checked = $(quizz_wrapper).find('input[type=radio]:checked');
        var value_response = input_radio_checked.val();
        if (value_response === undefined) {
            $(this).parents('.btn-message-wrapper').find('.message').html('N’oubliez pas de sélectionner une réponse avant de la valider.');
        } else {
            var name_question = input_radio_checked.attr('name');
            var matches = name_question.match(/reponse_(\d+)/);
            $.post(basepath + 'ajax/quizz/' + nid, {val: value_response,bid: matches[1]}, function(data) {
                quizz_wrapper.html(data);
                adaptHeightQuizzArticle(quizz_wrapper);
                applyClickOnQuizzImage(quizz_wrapper);
                quizz_vote(wrapper, basepath, nid);
            });
        }
    });
}
function applyClickOnQuizzImage(wrapper){
    $(wrapper).find('.answer-wrapper .image').on('click', function() {
        $(this).parents('.reponse-div').find('input').attr('checked',true);
    });
}
function adaptHeightQuizzArticle(wrapper) {
    $(wrapper).each(function() {
        var height = $(this).find('.question-wrapper').height();
        $(this).find('.nbquestion-wrapper').css('padding-top', (height - $(this).find('.nbquestion-wrapper').height()) / 2);
    });
}