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
						<?php if(isset($row['title']) && !empty($row['title'])) { ?>
							<div class='main-sub-right-top-title'>
								<label for="title">Posting Title :</label>
								<?php print $row['title'];?>
							</div>
						<?php } ?>
					</div>
					<div class='main-sub-right-top-save'>
						<?php print $row['ops'];?>
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
						<?php if(isset($row['field_kinh_nghiem']) && !empty($row['field_kinh_nghiem'])) { ?>
							<div class='Kinh-Nghiem'>
							<label for="Kinh-Nghiem">Kinh-Nghiem:</label>
							<?php print $row['field_kinh_nghiem'];?>
							</div>
						<?php } ?>
						<?php if(isset($row['field_kinh_nghiem_toc']) && !empty($row['field_kinh_nghiem_toc'])) { ?>
							<div class='kinh-nghiem-toc'>
							<label for="Kinh-Nghiem">Kinh-Nghiem:</label>
							<?php print $row['field_kinh_nghiem_toc'];?>
							</div>
						<?php } ?>
						<?php if(isset($row['field_can_license']) && !empty($row['field_can_license'])) { ?>
							<div class='Can-License'>
								<label for="Can-License">Can License:</label>
								<?php print $row['field_can_license'];?>
							</div>
						<?php } ?>
						<?php if(isset($row['field_khu_vuc']) && !empty($row['field_khu_vuc'])) { ?>
							<div class='Khu-Vuc'>
								<label for="Khu-Vuc">Khu Vuc:</label>
								<?php print $row['field_khu_vuc'];?>
							</div>
						<?php } ?>
						<?php if(isset($row['field_tien_luong']) && !empty($row['field_tien_luong'])) { ?>
							<div class='Tien-Luong'>
								<label for="Tien-Luong">Tien-Luong:</label>
								<?php print $row['field_tien_luong'];?>
							</div>
						<?php } ?>
					</div>
					<div class='main-sub-right-bottom-right'>
						<label for="contact_name">Contact Information:</label>
						<div class='main-sub-right-bottom-right-contact-name'>
							<?php print $row['field_contact_name'];?>
						</div>
						<div class='main-sub-right-bottom-right-contact-phone'>
							<?php print $row['field_contact_phone'];?>
						</div>
						<div class='main-sub-right-bottom-right-province'>
							<?php print $row['province_1'];?>
						</div>
						<?php if(isset($row['created']) && !empty($row['created'])) { ?>
							<div class='main-sub-right-bottom-right-created'>
								<label for="created">Posted:</label>
								<?php print $row['created'];?>
							</div>
						<?php } ?>
						<div class='main-sub-right-bottom-right-count-image'>
							<?php print $row['field_image_1'];?>
						</div>
					</div>
				</div>
			</div>
		</div>
		<?php if(isset($row['body']) && !empty($row['body'])) { ?>
			<div class='main-sub-bottom'>
			<?php print $row['body'];?>
			</div>
		<?php } ?>
	</div>

  </div>
<?php endforeach; ?>
