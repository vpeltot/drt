<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <div class="chapitre-wrapper">
        <a id="<?php print $id;?>"></a>
        <div class="barre_sommaire first"><div class="left_arrow arrow <?php print ($pos == 1)?'novisible':'visible';?>"></div><h2 class="title"><?php print $titre;?></h2><div class="right_arrow arrow <?php print ($pos%$total == 0)?'novisible':'visible';?>"></div><div class="clear"></div></div>
        <div class="contenu wysiwyg"><?php print $texte;?></div>
        <div class="barre_sommaire second"><div class="left_arrow arrow <?php print ($pos == 1)?'novisible':'visible';?>"></div><div  class="title"></div><div class="right_arrow arrow <?php print ($pos%$total == 0)?'novisible':'visible';?>"><span>Suite</span></div><div class="clear"></div></div>
        
    </div>
</div>