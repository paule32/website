<?php
	$flag  = false;
	if (isset($_GET['topic'])) { $topic = $_GET['topic']; $flag = true; }
        if (isset($_GET['prev'] )) { $prev  = $_GET['prev' ]; $flag = true; }
	
	if ($flag == false) {
		if (!isset($_GET['topic'])) {
			$path = __DIR__ . '/navbar.php';
			include $path;
		}
	}	else {
                header('Location: ./docheader.php?topic=' . $_GET['topic']);
                die();
	}
?>
