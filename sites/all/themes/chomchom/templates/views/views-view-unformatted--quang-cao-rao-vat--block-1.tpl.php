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
    
    <div class='main'>
		<div class='main-sub-top'>
			<div class='main-sub-left'>
				<?php print $row['field_image'];?>
			</div>
			<div class='main-sub-right'>
				<div class='main-sub-right-top'>
					<?php if(isset($row['title']) && !empty($row['title'])) { ?>
						<div class='main-sub-right-top-title'>
							<label for="title">Posting Title :</label>
							<?php print $row['title'];?>
						</div>
					<?php } ?>
					<div class='main-sub-right-top-save'>
						<?php print $row['nothing'];?>
					</div>
				</div>
				<div class='main-sub-right-bottom'>
					<div class='main-sub-right-bottom-left'>
						<label for="contact_name">Contact Information:</label>
						<div class='contact-name'>
							<?php print $row['field_contact_name'];?>
						</div>
						<div class='contact-phone'>
							<?php print $row['field_contact_phone'];?>
						</div>
						<div class='province'>
							<?php print $row['province'];?>
						</div>
						<div class='created'>
							<?php print $row['created'];?>
						</div>
						<div class='count-image'>
							<?php print $row['field_image_1'];?>
						</div>
					</div>

				</div>
			</div>
		</div>
		<div class='main-sub-bottom'>
		<?php print $row['body'];?>
		</div>
	</div>

  </div>
<?php endforeach; ?>
