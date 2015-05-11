function loadAjaxSommaire(base_path, url, scroll,type) {
  $.get(base_path + url, function(data) {
    $('#ajax-sommaire-zone').html(data);
    reaffectHandler(base_path,type);
    if (scroll === 'yes') {
      $(document.body).animate({
        'scrollTop': $('#ajax-sommaire-zone').offset().top - 50
      }, 0);
    }
  });
}

function reaffectHandler(base_path,type) {
  var currentTid = $('#hidden-currentTid').val();
  var format = $('#hidden-format').val();
  var uid = $('#hidden-uid').val();
  var format_tmp = 'null';
  if (type === 'format')
    format_tmp = format;
  
  var level2 = $('#level2-taxo').val();
  if (level2 === '')
    level2 = 'null';

  $('#level1-taxo').on('change', function() {
    loadAjaxSommaire(base_path, 'ajax/search/' + currentTid + '/' + $('#level1-taxo').val() + '/null/' + format_tmp + '/1/' + uid + '/html', 'yes',type);
  });
  $('#level2-taxo').on('change', function() {
    loadAjaxSommaire(base_path, 'ajax/search/' + currentTid + '/' + $('#level1-taxo').val() + '/' + $('#level2-taxo').val() + '/' + format_tmp + '/1/' + uid + '/html', 'yes',type);
  });
  $('#format-taxo').on('change', function() {
    loadAjaxSommaire(base_path, 'ajax/search/' + currentTid + '/' + $('#level1-taxo').val() + '/' + level2 + '/' + $('#format-taxo').val() + '/1/' + uid + '/html', 'yes',type);
  });
  $('.pagination_sommaire').on('click', function() {
    loadAjaxSommaire(base_path, $(this).attr('data-url'),'yes',type);
    return false;
  });
}