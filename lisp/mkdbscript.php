<?php
session_start();
if (error_get_last()


// check for hijack ...
if ($_GET['sid'] != session_id())   { echo "session error:3."; die(); }

echo "SID: " . session_id() . "<p>";

date_default_timezone_set("Europe/Berlin");
echo '<h2>Server Timezone : ' . date_default_timezone_get() . '</h2>';

$current_date = date('Y-m-d == H:i:s');
print "<h2>Server Time : " . $current_date . "</h2>";


// max exec time of 10 seconds ...
$maxExecTime = time() + 10;
$isUnique = false;
$uniqueFileName = "";
//$tmpdir = sys_get_temp_dir() . "/dbase/";
$tmpdir = "/tmp/dbase/";

echo "<pre>";
while (time() != $maxExecTime) {
    $uniqueFileName = uniqid(mt_rand(), true);
    echo $tmpdir . $uniqueFileName . ".prg" . "\n";
    if (!file_exists($tmpdir . $uniqueFileName . ".prg")) {
        echo "is unique\n";
        $isUnique = true;
        break;
    }
}
echo "</pre>";

if ($isUnique)
{
    $str = $tmpdir . $uniqueFileName . ".prg";
    $fp = fopen($str,"w") or
    die(print_r(error_get_last(),true));

    fprintf($fp,$_GET['data']);
    fflush ($fp);
    fclose ($fp);

    $output = shell_exec(escapeshellcmd(
        $tmpdir . "/dbase2js " .
        $tmpdir . $uniqueFileName));
    echo "<pre>" . $output . "</pre>";

    $fr = file_get_contents($tmpdir . $uniqueFileName . ".pro", "r");
    $n  = str_replace("\n"," \\\n" ,$fr);
    $n  = str_replace("\t"," " ,$n );
    $n  = str_replace("\'","\"",$n );

    echo "<pre>" . $n . "</pre>";
    echo "\n<script>" .
    //
    "\nalert('start');\n" .
    "\ntry {\n" .
    "var new_code = '" . $n . "alert(1234);';\n" .
    "\nalert('runner');\n"  .
    "\neval(new_code); \n"  .
    "\n} catch (err) { \n"  .
    "\nvar errstr =    \n"  .
    "'Error-Message: ' + err.message + \n" .
    "'Error-Name: '    + err.name;\n"        .
    "alert(errStr);\n" .
    "\n}\n" .
    //
    "\nalert('end');\n" .
    "\n</script>\n";

    // no need anymore
    unlink($tmpdir . $uniqueFileName . ".prg");
    unlink($tmpdir . $uniqueFileName . ".pro");

    session_destroy();
}
else {
    echo "FAILED - Exec Time Limit: out of bounds !!!";
    die();
}

?>
