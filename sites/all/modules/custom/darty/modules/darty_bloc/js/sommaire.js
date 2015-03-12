$(document).ready(function() {
    $('.bean-chapitre-article').hide().first().show();
    $('.bean-chapitre-article .barre_sommaire.second').show();

    var pagevues = [1];
    var pourcent = (100 / ($('#sommaire-wrapper .head ul li').length)) * pagevues.length;
    var pageplusprofonde = valeur_max(pagevues);
    var toutafficher = 0;
    setCookie('dvar', $('#sommaire-wrapper .head ul li').length + '|' + Math.ceil(pourcent) + '|' + pageplusprofonde + '|0');

    $('.sommaire_btn_deploy').click(function() {

        if ($(this).hasClass('elem-open')) {
            $('#sommaire-wrapper').removeClass('open').addClass('close');
            $('.bean-chapitre-article').hide().first().show();
            $('.bean-chapitre-article .barre_sommaire.second').show();
            $('#sommaire-wrapper.close .head ul li a').removeClass('active').first().addClass('active');
        }
        else {
            toutafficher = 1;
            setCookie('dvar', $('#sommaire-wrapper .head ul li').length + '|100|' + $('#sommaire-wrapper .head ul li').length + '|' + toutafficher);

            $('#sommaire-wrapper').removeClass('close').addClass('open');
            $('.bean-chapitre-article').show();
            $('.bean-chapitre-article .barre_sommaire.second').hide();

        }
    });
    $('#sommaire-wrapper.close .head ul li a').live('click', function() {
        if (toutafficher === 0) {
            if ($.inArray($(this).parent().index() + 1, pagevues) < 0) {
                //add to array
                pagevues.push($(this).parent().index() + 1);
            }
            pourcent = (100 / ($('#sommaire-wrapper .head ul li').length)) * pagevues.length;
            pageplusprofonde = valeur_max(pagevues);
            setCookie('dvar', $('#sommaire-wrapper .head ul li').length + '|' + Math.ceil(pourcent) + '|' + pageplusprofonde + '|0');
        }
        $('#sommaire-wrapper.close .head ul li a').removeClass('active');
        $(this).addClass('active');
        var id = $(this).attr('href');
        id = id.substring(1, id.length);
        $('.bean-chapitre-article').hide();
        $('.bean-chapitre-article #' + id).parents('.bean-chapitre-article').show();
        return false;
    });

    $('#sommaire-wrapper.close .barre_sommaire .arrow.visible').each(function() {
        var increment = 1;
        if ($(this).hasClass('left_arrow'))
            increment = -1;

        $(this).live('click', function() {
            var tag_a_id = $(this).parents('.barre_sommaire').parent().find('a').first().attr('id');
            var myregexp = /sommaire_([0-9]*)_([0-9]*)/;
            var match = myregexp.exec(tag_a_id);
            var id = 'sommaire_' + parseInt(parseInt(match[1]) + increment) + '_' + match[2];
            $('.bean-chapitre-article').hide();
            $('.bean-chapitre-article #' + id).parents('.bean-chapitre-article').show();

            $('#sommaire-wrapper.close .head ul li a').removeClass('active');
            $('#sommaire-wrapper.close .head ul li a').each(function() {
                if ($(this).attr('href') === '#' + id)
                    $(this).addClass('active');
            });

            if (toutafficher === 0) {
                if ($.inArray(parseInt(parseInt(match[1]) + increment), pagevues) < 0) {
                    //add to array
                    pagevues.push(parseInt(parseInt(match[1]) + increment));
                }
                pourcent = (100 / ($('#sommaire-wrapper .head ul li').length)) * pagevues.length;
                pageplusprofonde = valeur_max(pagevues);
                setCookie('dvar', $('#sommaire-wrapper .head ul li').length + '|' + Math.ceil(pourcent) + '|' + pageplusprofonde + '|0');
            }
        });
    });
    function setCookie(c_name, value, exdays)
    {
        var exdate = new Date();
        exdate.setDate(exdate.getDate() + exdays);
        var c_value = escape(value) +
                ((exdays == null) ? "" : ("; expires=" + exdate.toUTCString()));
        c_value = c_value + "; path=/";
        document.cookie = c_name + "=" + c_value;
    }
    function valeur_max(tableau) {
        var max = 0;
        for (var i = 0, b = tableau.length; i < b; i++)
            if (tableau[i] > max)
                max = tableau[i];
        return max;
    }
});