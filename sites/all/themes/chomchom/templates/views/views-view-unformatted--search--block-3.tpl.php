<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php $rows = $view->style_plugin->rendered_fields; ?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php //print $row; ?>
   
    

  <div class='main-quang'>
    <div class='quang-top'>
      <div class='quang-top-left'>
        <div class='left-image'><div class='flag-image'><?php print $row['ops'];?></div><?php print $row['field_image'];?></div>
      </div>
      <div class='quang-top-right'>
        <div class='top-right-top-title'>
          <?php if(isset($row['title']) && !empty($row['title'])) { ?>
            <div class='right-title'>
              <?php print $row['title'];?>
            </div>
          <?php } ?>
          <?php if(isset($row['field_quang_address']) && !empty($row['field_quang_address'])) { ?>
            <div class='right-address'>
              <?php print $row['field_quang_address'];?>
            </div>
          <?php } ?>

        </div>
        <div class='top-right-bottom-field'>
          
            <?php if(isset($row['body']) && !empty($row['body'])) { ?>
            <div class='quans-body'>
              <?php print $row['body'];?>
            </div>
            <?php } ?>
            
        
        </div>
      </div>
    </div>
    <div class='quang-bottom'>
      <div class='quang-bottom-first'> 
      </div>
      <div class='quang-bottom-second'>
        <label for="contact_name">Contact Information:</label>
        <div class='second-name'><?php print $row['field_contact_name'];?></div>
        <div class='second-phone'><?php print $row['field_contact_phone'];?></div>
        <div class='second-address'><?php print $row['address'];?></div>
      </div>
      <div class='quang-bottom-thrid'>
        <div class='thrid-info'><?php print $row['nid'];?></div>
      </div>
    </div>
  </div>



  </div>
<?php endforeach; ?>
