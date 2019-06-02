<style>
.login_de {
background-image:url("login_de1.png");
background-size:cover;
cursor:pointer;
}
.login_de:hover {
background-image:url("login_de2.png");
background-size:cover;
cursor:pointer;
}
.login_en {
background-image:url("login_en1.png");
background-size:cover;
cursor:pointer;
}
.login_en:hover {
background-image:url("login_en2.png");
background-size:cover;
cursor:pointer;
}
.register_de {
background-image:url("register_de1.png");
background-size:0px 0px 100px 32px;
background-repeat:no-repeat;
height:51px;
cursor:pointer;
}
.register_de:hover {
background-image:url("register_de2.png");
background-size:0px 0px 100px 32px;
background-repeat:no-repeat;
height:51px;
cursor:pointer;
}
.register_en {
background-image:url("register_en1.png");
background-size:0px 0px 100px 32px;
background-repeat:no-repeat;
height:51px;
cursor:pointer;
}
.register_en:hover {
background-image:url("register_en2.png");
background-size:0px 0px 100px 32px;
background-repeat:no-repeat;
height:51px;
cursor:pointer;
}
</style>
<script>
var getUrlParameter = function getUrlParameter(sParam) {
    var sPageURL = window.location.search.substring(1),
        sURLVariables = sPageURL.split('&'),
        sParameterName,
        i;

    for (i = 0; i < sURLVariables.length; i++) {
        sParameterName = sURLVariables[i].split('=');

        if (sParameterName[0] === sParam) {
            return sParameterName[1] === undefined ? true : decodeURIComponent(sParameterName[1]);
        }
    }
};
function checkPass()
{
    var url_1 = './docheader.php';
    var url_a = '?topic=dbaseide&lang=';
    var url_b = getUrlParameter('lang');

    if ($("#un").val().length < 1) { alert("username < 1 not allowed"); return; }
    if ($("#up").val().length < 1) { alert("userpass < 1 not allowed"); return; }

    var url_c = '&un=' + $.base64.encode($("#un").val());
    var url_d = '&up=' + $.base64.encode($("#up").val());
    //var url_c = '&un=' + $("#un").val();
    //var url_d = '&up=' + $("#up").val();
    window.location.href = url_1+url_a+url_b+url_c+url_d;
}
</script>
<div style="background-color:yellow;">
  <hr>
    <b>dBase4Web (c) Jens Kallup - non-profit</b>
  <hr>
</div>
<center>
<?php echo $LOCALES_ARRAY[$_GET['lang']][1]; ?><p>
<table width="40%" border="0">
<tr><td>
	<table border="2">
        <tr><td>
            <?php echo $LOCALES_ARRAY[$_GET['lang']][2];?>
        </td><td>
            <input type="text" id="un" maxlength="20">
        </td></tr>
        <tr><td>
            <?php echo $LOCALES_ARRAY[$_GET['lang']][3];?>
        </td><td>
            <input type="password" id="up" maxlength="20">
        </td></tr>
        <tr><td onClick="checkPass();" class="login_<?php echo $_GET['lang'] . '">';?><br><br>
        </td></tr>
    </table>
    <p>
    <table>
        <tr><td width="180px">
            <?php echo $LOCALES_ARRAY[$_GET['lang']][4];?><br>
	        <div class="register_<?php echo $_GET['lang'];?>"></div>
        </td></tr>
    </table>
    <p>
</td></tr>
</table>
</center>
