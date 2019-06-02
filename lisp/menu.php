<style type="text/css">
.button_home {
background-color:white;
background-image:url("home.png");
background-repeat:no-repeat;
background-position:18px 0px;
vertical-align:text-bottom;
border:0px solid cyan;
float:left;
font-size:12pt;
font-weight:bold;
height:64px;
width:85px;
}
.button_back {
background-image:url("arrowleft.png");
background-repeat:no-repeat;
background-size:cover;
font-weight:bold;
float:left;
color:black;
height:34px;
width:44px;
}
.button_home_text {
position:relative;
vertical-align:bottom;
text-align:center;
}
.search_box {
background-image:url("search.png");
background-repeat:no-repeat;
background-size:contain;
width:500px;
height:60px;
}
.search_input {
position:relative;
background-color:white;
font-size:14pt;
float:left;
top:7px;
left:8px;
width:282px;
height:36px;
border:0px;
}
.search_run {
position:relative;
background-color:rgba(0,0,0,0);
top:4px;
float:left;
left:14px;
width:94px;
height:50px;
}
.search_run:hover {
cursor:pointer;
}
</style>
<table><tr>
<td width="46%">
<div class="button_home">
  <div class="button_home_text"><br><br> Home </div>
</div>
<div class="button_back">
  <div><br><br>Zur&uuml;k</div>
</div>
</td>
<td align="left">Suche:</td>
<td align="left">
<div class="search_box">
<div><input class="search_input" type="text"></div>
<div class="search_run"></div></div></td>
<td width="40%"  align="right">
<a href="http://www.apache.org">
<img src="apache2.png" width="110px" alt="apache2 Logo"></img></a>
</td>
</tr></table>
<script>
<?php
$_referer = $_SERVER['HTTP_REFERER'];
echo "var referer = '" . $_referer . "';";
?>
$(".button_home").on("click", function() {
var url = "./docindex.php";
$(location).attr('href',url);
});
$(".button_back").on("click", function() {
$(location).attr('href',referer);
});
</script>