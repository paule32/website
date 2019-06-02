<?php
header('Location: ' . './header.php?topic=' . $_GET['t'] . '&prev=' . $_SERVER['HTTP_REFERER']);
die;
?>