<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php $rows = $view->style_plugin->rendered_fields; 
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php //print $row; ?>
  <?php
   
  ?>  
 <div class="business-main">
  <div class="business-top">
    <div class="business-top-left">
      <?php print $row['field_image'];?>
   </div>
   <div class="business-top-right">
    <div class="business-top-right-first">
  		<?php print $row['title'];?>
    </div>
    <div class="business-top-right-second">
      <?php print $row['address'];?>
    </div>
    <div class="business-top-right-thrid">
      <div class="business-top-right-thrid-first">
        <?php print $row['field_contact_phone'];?>
      </div>
      <div class="business-top-right-thrid-second">
        <?php print $row['field_hours'];?>
      </div>
    </div>
   </div>
  </div>
  <div class="business-bottom">
    <div class="business-bottom-top">
      <div class="field-website">
        <a href="<?php print $row['field_website'];?>">Website</a>
      </div>
      <div class="field-coupon">
        <a>Coupons</a>
        <div class='coupons-detail'>
        <?php print $row['field_coupons']; ?>
        <!--<div class='close-button-second123'>X</div>-->
        </div>
      </div>
      <div class="field-direction">
        <?php print $row['nothing'];?>
      </div>
      <div class="field-more-info">
        <a href="node/<?php print $row['nid'];?>">More Info.</a> 
      </div>
    </div>
    <?php if(isset($row['field_general_info']) && !empty($row['field_general_info'])) { ?>
      <div class="business-bottom-bottom">
      <?php print $row['field_general_info'];?>
    </div>
    <?php } ?>
  </div>
</div>
	
  </div>
<?php endforeach; ?>
