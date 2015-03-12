<div id="node-<?php print $node->nid; ?>" class="teaser teaser-une-home <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <div class="zone-header">
        <div class="texte">
            <?php print render($title_suffix); ?>
            <div class="format"><?php print $format_article; ?></div>
            <h2 class="titre"><a href="<?php print url('node/'.$node->nid);?><?php print $analyticsLinks;?>" title="<?php print $titre;?>"><?php print $titre; ?></a></h2>
            <div class="more-wrapper">
                <a href="<?php print url('node/'.$node->nid);?><?php print $analyticsLinks;?>">Lire l'article</a>
            </div>
        </div>
        <div class="visuel">
            <a href="<?php print url('node/'.$node->nid);?><?php print $analyticsLinks;?>" title="<?php print $titre;?>"><?php print $image_teaser; ?></a>
        </div>

        <div class="clear"></div> 
    </div>
</div>