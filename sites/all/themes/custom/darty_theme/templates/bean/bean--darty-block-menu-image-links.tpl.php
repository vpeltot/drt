<div class="block_menu_image_links <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
  <?php print $link1; ?>
  <?php print $link2; ?>
  <?php print $link3; ?>
  <?php print $link4; ?>
  </div>
</div>

<script type="text/javascript">
jQuery(document).ready(function() {
  jQuery('.block_menu_image_links a').hover(
		  function() {
			  jQuery(this).find('div').toggleClass('hide');
		  }
  );
});
</script>