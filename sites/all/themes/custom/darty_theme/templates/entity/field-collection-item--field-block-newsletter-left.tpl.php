<tr>
  <td bgcolor="<?php print $color; ?>">
    <table width="370" cellspacing="0" cellpadding="0" border="0">
      <tbody>
        <tr>
          <td width="44" height="30" align="center" style="vertical-align:middle;">
            <?php print $picto; ?>
          </td>
          <td width="326" height="30" align="left" style="color:#ffffff;font-size:13px;font-family:'Trebuchet MS', Arial, Helvetica, sans-serif;vertical-align:middle"><strong><?php print $block_title; ?></strong></td>
        </tr>
      </tbody>
    </table>
  </td>
</tr>
<tr>
  <td width="370" height="9">
    <img width="370" height="9" border="0" style="display:block" alt="" src="/<?php print $path_theme; ?>/images/newsletter/images/spacer-370x9.gif">
  </td>
</tr>
<?php if($block_title_content): ?>
<tr>
  <td width="370" align="left" style="color:#000001;font-size:18px;font-family:'Trebuchet MS', Arial, Helvetica, sans-serif;vertical-align:middle;"><strong><?php print $block_title_content; ?></strong></td>
</tr>
<tr>
  <td width="370" height="9">
    <img width="370" height="9" border="0" style="display:block" alt="" src="/<?php print $path_theme; ?>/images/newsletter/images/spacer-370x9.gif">
  </td>
</tr>
<?php endif; ?>
<?php if($block_image): ?>
<tr>
  <td width="370" align="center">
    <?php print $block_image; ?>
  </td>
</tr>
<?php endif; ?>
<?php if($block_body): ?>
<tr>
  <td width="370" valign="top" align="left" style="color:#000001;font-size:13px;font-family:'Trebuchet MS', Arial, Helvetica, sans-serif;"><?php print $block_body; ?></td>
</tr>
<?php endif; ?>
<tr>
  <td valign="top" height="10" align="left"></td>
</tr>
<?php if($block_link_button): ?>
<tr>
  <td align="left">
    <table width="<?php print $block_width_button + 10; ?>" cellspacing="0" cellpadding="0" border="0" bgcolor="#ffffff">
      <tbody>
        <tr bgcolor="#3c3c3c">
          <td width="5" height="21" background="/<?php print $path_theme; ?>/images/newsletter/images/btn-left.gif"></td>
            <td width="<?php print $block_width_button; ?>" height="21" background="/<?php print $path_theme; ?>/images/newsletter/images/btn-bg.gif" align="center" style="color:#ffffff;font-size:10px;font-family:'Trebuchet MS', Arial, Helvetica, sans-serif;vertical-align:middle">
              <?php print $block_link_button; ?>
            </td>
          <td width="5" height="21" background="/<?php print $path_theme; ?>/images/newsletter/images/btn-right.gif"></td>
        </tr>
      </tbody>
    </table>
  </td>
</tr>
<?php endif; ?>
<?php if($block_link_button && $block_link_button2): ?>
<tr>
  <td width="370" height="10"></td>
</tr>
<?php endif; ?>
<?php if($block_link_button2): ?>
<tr>
  <td align="left">
    <table width="<?php print $block_width_button2 + 10; ?>" cellspacing="0" cellpadding="0" border="0" bgcolor="#ffffff">
      <tbody>
        <tr bgcolor="#3c3c3c">
          <td width="5" height="21" background="/<?php print $path_theme; ?>/images/newsletter/images/btn-left.gif"></td>
            <td width="<?php print $block_width_button2; ?>" height="21" background="/<?php print $path_theme; ?>/images/newsletter/images/btn-bg.gif" align="center" style="color:#ffffff;font-size:10px;font-family:'Trebuchet MS', Arial, Helvetica, sans-serif;vertical-align:middle">
              <?php print $block_link_button2; ?>
            </td>
          <td width="5" height="21" background="/<?php print $path_theme; ?>/images/newsletter/images/btn-right.gif"></td>
        </tr>
      </tbody>
    </table>
  </td>
</tr>
<?php endif; ?>
<tr>
  <td width="370" height="20">&nbsp;</td>
</tr>