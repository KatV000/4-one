<?php
$id = null;
// Получение id страницы с помощью метода GET и фильтрация данных
$id = strtolower(strip_tags(trim($_GET['id'])));
//Проверка на содержимое переменной $id
switch($id){
case 'contact': include 'inc/contact.inc'; break;
case 'about': include 'inc/about.inc.php'; break;
case 'gbook': include 'inc/gbook.inc.php'; break;
case 'menu': include 'inc/menu.inc.php'; break;
default: include 'inc/index.inc.php';
}
?>