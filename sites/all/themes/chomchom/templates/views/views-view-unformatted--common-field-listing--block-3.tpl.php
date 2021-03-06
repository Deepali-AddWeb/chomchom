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

 <div class='main'>
  <div class='top'>
    <div class="body-text"><?php print $row['body'];?></div>
  </div>
  <div class='bottom'>
    <div class='contact-name'>
      <label for='contact-name'>call</label>
      <div class='name'><?php print $row['field_contact_name'];?></div>
    </div>
    <div class="phone">
     <div class="phone-first">
       <?php print $output = $row['field_contact_phone'];?>
     </div>
     <?php if(isset($row['field_alternative_phone']) && !empty($row['field_alternative_phone']))
         print $outputche ='<span class="or">or</span><div class="phone-second">'.$row['field_alternative_phone'];'</div>'
         ?>
   </div>
    <div class='full-address'>
      <div class='address'><?php print $row['address'];?></div>
      <a >Map and Direction</a>
    </div>
  </div>
</div>


  </div>
<?php endforeach; ?>
