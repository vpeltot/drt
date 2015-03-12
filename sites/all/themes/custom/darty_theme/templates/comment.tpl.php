<div class="item-comment <?php print $classes; ?> <?php print $comment->class_editor;?>">
    <div class="header">
        <div class="pseudo"><?php print $pseudo;?></div>
        <div class="date"><?php print format_date($comment_created,'darty_full');?></div>
    </div>
    <div class="content">
        <?php print $comment_texte;?>
    </div>

    <?php print render($content['links']) ?>
</div>
