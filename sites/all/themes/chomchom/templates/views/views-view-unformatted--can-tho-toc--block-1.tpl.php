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
					<div class='main-sub-right-top-title'>
						<?php print $row['title'];?>
					</div>
					<div class='main-sub-right-top-save'>
						<?php print $row['nothing'];?>
					</div>
				</div>
				<div class='main-sub-right-bottom'>
					<div class='main-sub-right-bottom-left'>
						<div class='category'>
							<?php print $row['field_category'];?>
						</div>
						<div class='can-tho'>
							<?php print $row['field_can_tho'];?>
						</div>
						<div class='tho-lam'>
							<?php print $row['field_tho_lam'];?>
						</div>
						<div class='Kinh-Nghiem-toc'>
							<?php print $row['field_kinh_nghiem_toc'];?>
						</div>
						<div class='Can-License'>
							<?php print $row['field_can_license'];?>
						</div>
						<div class='Khu-Vuc'>
							<?php print $row['field_khu_vuc'];?>
						</div>
						<div class='Tien-Luong'>
							<?php print $row['field_tien_luong'];?>
						</div>
					</div>
					<div class='main-sub-right-bottom-right'>
						<div class='main-sub-right-bottom-right-contact-name'>
							<?php print $row['field_contact_name'];?>
						</div>
						<div class='main-sub-right-bottom-right-contact-phone'>
							<?php print $row['field_contact_phone'];?>
						</div>
						<div class='main-sub-right-bottom-right-province'>
							<?php print $row['province'];?>
						</div>
						<div class='main-sub-right-bottom-right-update-date'>
							<?php print $row['changed'];?>
						</div>
						<div class='main-sub-right-bottom-right-count-image'>
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
