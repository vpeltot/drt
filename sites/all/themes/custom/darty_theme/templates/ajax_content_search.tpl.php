
<div class="filtre-wrapper">
    <input type="hidden" name="currentTid" id="hidden-currentTid" value="<?php print $currentTid; ?>"/>
    <input type="hidden" name="format" id="hidden-format" value="<?php print $format; ?>"/>
    <input type="hidden" name="uid" id="hidden-uid" value="<?php print $uid; ?>"/>
    <div class='label'>Filtrer les contenus par</div>
    <div class='zone-select'>

        <select id="level1-taxo" class="<?php print (empty($childrenTaxo)) ? 'hidden' : ''; ?>">
            <option value="null"> - Thèmes - </option>
            <?php if (!empty($childrenTaxo)) { ?>   
                <?php foreach ($childrenTaxo as $taxo) { ?>
                    <option value="<?php print $taxo->tid; ?>" <?php print ($level1 == $taxo->tid) ? 'selected' : ''; ?>><?php print $taxo->name; ?></option>
                    <?php
                }
            }
            ?>
        </select>

        <?php if (!empty($children2Taxo)) { ?>

            <select id="level2-taxo" class="<?php print (empty($childrenTaxo)) ? 'hidden' : ''; ?> <?php print (empty($children2Taxo)) ? 'disabled' : ''; ?>" <?php print (empty($children2Taxo)) ? 'disabled' : ''; ?>>
                <option value="null"> - Sous-Thèmes - </option>
                <?php if (!empty($children2Taxo)) { ?>
                    <?php foreach ($children2Taxo as $taxo) { ?>
                        <option value="<?php print $taxo->tid; ?>" <?php print ($level2 == $taxo->tid) ? 'selected' : ''; ?>><?php print $taxo->name; ?></option>
                        <?php
                    }
                }
                ?>
            </select>
        <?php } else {
            ?>
            <span id="level2-taxo" class="empty"></span>
        <?php } ?>
        <?php if ($type != 'format') { ?>
            <select id="format-taxo" class="<?php print (empty($formatArticle) || count($formatArticle) == 1) ? 'disabled' : ''; ?>" <?php print (empty($formatArticle) || count($formatArticle) == 1) ? 'disabled' : ''; ?>>
                <option value="null"> - Type d'article - </option>
                <?php if (!empty($formatArticle)) { ?>
                    <?php foreach ($formatArticle as $key => $taxo) { ?>
                        <option value="<?php print $key; ?>" <?php print ($format == $key || count($formatArticle) == 1) ? 'selected' : ''; ?>><?php print $taxo; ?></option>
                        <?php
                    }
                }
                ?>
            </select>
        <?php } ?>
    </div>
    <div class='clear'></div>
</div>
<?php if ($total > 0) { ?>
    <div class="contenu-sommaire">
        <?php
        $cpt = 1;
        foreach ($nodesAll as $node) {
            $node->analytics['localisation'] = "liste";
            $node->analytics['type'] = "LDV";
            $node->analytics['position'] = "p".$page."-vign".$cpt++;
            $node_view = node_view($node, 'sommaire_article');
            print drupal_render($node_view);
        }
        ?>
        <div class="clear"></div>
    </div>
    <?php if (ceil($total / 12) > 1) { ?>
        <div class="pagination-wrapper">
            <div class="pagination">
                <?php if ($page > 1) { ?>
                    <a href="#" data-url="<?php print 'ajax/search/' . $currentTid . '/' . $level1 . '/' . $level2 . '/' . $format . '/1/' . $uid . '/html'; ?>" class="pagination_sommaire arrow arrow2 active left"><<</a>
                    <a href="#" data-url="<?php print 'ajax/search/' . $currentTid . '/' . $level1 . '/' . $level2 . '/' . $format . '/' . ($page - 1) . '/' . $uid . '/html'; ?>" class="pagination_sommaire arrow active arrow1 left"><</a>
                <?php } ?>
                <?php
                $cpt_display = 0;
                for ($i = 1; $i <= ceil($total / 12); $i++) {
                    if ($page > 3) {
                        if (($page <= ceil($total / 12) - 2) || $i < ceil($total / 12) - 4) {
                            if ($i < $page - 2)
                                continue;
                        }
                    }
                    if ($cpt_display >= 5)
                        continue;
                    $cpt_display++;
                    if ($i == $page) {
                        print '<span class="pagination_sommaire active">' . $i . '</span>';
                    } else {
                        ?>
                        <a href="#" data-url="<?php print 'ajax/search/' . $currentTid . '/' . $level1 . '/' . $level2 . '/' . $format . '/' . $i . '/' . $uid . '/html'; ?>" class="pagination_sommaire"><?php print $i; ?></a>
                        <?php
                    }
                }
                ?>
                <?php if ($page < ceil($total / 12)) { ?>
                    <a href="#" data-url="<?php print 'ajax/search/' . $currentTid . '/' . $level1 . '/' . $level2 . '/' . $format . '/' . ($page + 1) . '/' . $uid . '/html'; ?>" class="pagination_sommaire arrow active arrow1 right">></a>
                    <a href="#" data-url="<?php print 'ajax/search/' . $currentTid . '/' . $level1 . '/' . $level2 . '/' . $format . '/' . (ceil($total / 12)) . '/' . $uid . '/html'; ?>" class="pagination_sommaire arrow active arrow2 right">>></a>
                <?php } ?>
                <div class="clear"></div>
            </div>
        </div>
        <?php
    }
}