<!DOCTYPE html>
<html lang="ru">
	<head>
		<title>Сеть кофеен "Fabae coffeae" | Наш кофе дает вам надежду пережить этот день</title> 
		<link rel="stylesheet" type="text/css" href="../../../Users/Катя/Desktop/Вузовские штуки/2 курс/КвИиППС/лр 4/css/stylemy.css"> 
		<meta charset="utf-8">
		<meta name="viewport" content="width=device-width, initialscale=1.0">
		<link rel="stylesheet" href="../../../Users/Катя/Desktop/Вузовские штуки/2 курс/КвИиППС/лр 4/css/bootstrap.min.css">
	</head>
	<body>	
		<div class="container">
			<div class="row">
				<div class="col-lg-12" >
			<!--элементы шапки сайта-->
				<h2>Сеть кофеен "Fabae coffeae"</h2>
				</div>
				<div class="col-lg-12">
			<!--меню сайта-->
			<div id="mainmenu"> 	
				<ul> <!-- Описание ссылок в меню и сами ссылки. -->
					<li>
						<a href="about.inc">О нас</a></li>
					<li>
						<a href="menu.inc">Наше меню</a></li>
					<li>
						<a href="contact.inc">Контакты</a></li>
					<li>
						<a href="gbook.inc">Гостевая книга</a></li>
				</ul> 
			</div>
			<!--Конец меню сайта-->
				</div>
				<div class="col-lg-12" >
			<!-- Область Контента -->
			<?php
include 'inc/routing.inc';
 ?>
			<div id="content">
				<h3>Fabae coffeae — <i>уникальная сеть</i> мини-кофеен</h3>
				<p>Fabae coffeaе – это уникальная сеть мини-кофеен формата coffee-to-go, сочетающая в себе великолепное качество кофе и невероятно низкую цену.</p>
				<p>Мы сплоченная команда профессионалов, которая с 2015 года успешно занимается отбором, закупкой и обжаркой лучших кофейных зерен.</p>
			<p>Являясь единственным участником длинного и трудоемкого процесса по производству кофе, мы можем гарантировать качество на всех этапах и предложить честный продукт своим покупателям, полностью оправдывая название бренда.</p>
			</div>
				</div>
			<!--конец области контента-->
			<div id="clear">
			</div>
				<div class="col-lg-12">
			<!--Подвал сайта-->
			<div id="footer">
				<footer>
					<p align="left"><small>"Fabae coffeae". All Rights Reserved. ©</small></p>
					<p align="left"><small>2015-2020</small></p>
					<p align="center"><small>О компании<a href="о нас.html"></a></small></p>
					<p align="center"><small>Наше меню<a href="наше меню.html"></a></small></p>
					<p align="center"><small>Контакты<a href="контакты.html"></a></small></p>
				</footer>
			</div>
				</div>
			</div> 
		</div>
	</body>
</html>