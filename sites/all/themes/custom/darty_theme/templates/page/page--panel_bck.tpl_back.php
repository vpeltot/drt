<div id="page-wrapper">
  <div id="page">

    <div id="header">
      <?php print render($page['header']); ?>
    </div>

    <?php print $messages; ?>

    <div id="main-wrapper" class="darty_content_drupal">
      <div id="main">
        <div id="content">
          <div class="section">
            <a id="main-content"></a>
            <?php print render($title_prefix); ?>
            <?php if ($title): ?><h1 class="title hide" id="page-title"><?php print $title; ?></h1><?php endif; ?>
            <?php print render($title_suffix); ?>
            <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
            <?php print render($page['help']); ?>
            <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
            <?php print render($page['content']); ?>
            <?php print $feed_icons; ?>
          </div>
    	 </div>
      </div>
    </div>
  </div>
</div>
<div id="footer">
  <?php print render($page['footer']); ?>
</div>