<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01//EN" "http://www.w3.org/TR/html4/strict.dtd">
<html lang="de">
  <head>
    <meta charset="utf-8">
    <meta http-equiv="content-type" content="text/html; charset=utf-8">
    <meta http-equiv="expires" content="0" />
    <meta http-equiv="cache-control" content="max-age=0" />
    <meta http-equiv="cache-control" content="no-cache" />
    <meta http-equiv="pragma" content="no-cache" />
    <title>LISP Dokumentation</title>

    <link type="text/css" rel="stylesheet" href="docfooter.css"/>
    <link type="text/css" rel="stylesheet" href="ioncss.css"/>

    <link   type="text/css" rel="stylesheet" href="/css/jquery/jquery-layout.css"/>
    <link   type="text/css" rel="stylesheet" href="/css/jquery/jquery-ui.css"/>

    <script type="text/javascript" src="/js/jquery.min.js"></script>
    <script type="text/javascript" src="/js/jquery.base64.js"></script>
    <script type="text/javascript" src="/js/jquery-ui.js"></script>
    <script type="text/javascript" src="/js/jquery.easyui.min.js"></script>

    <link rel="stylesheet" type="text/css" href="/themes/default/easyui.css"/>
    <link rel="stylesheet" type="text/css" href="/themes/icon.css"/>
    <link rel="stylesheet" type="text/css" href="/themes/color.css"/>

    <!--script type="text/javascript" src="/js/lz-string.js"></script-->
    <script type="text/javascript" src="/js/ace/src-noconflict/ace.js" charset="utf-8"></script>

  </head>
    <style>
    body {
    padding:0px;
    margin:0px;
    background-color: #1c0700;
    background-image: url("BGgrey.png");
    }
    table {
    background-color: white;
    }
    #trMitte {
    height:80%;
    }
    td.leftnull  { border-left:  0px; border-color:white;vertical-align:top;}
    td.rightnull { border-right: 0px; padding-left:15px; vertical-align:top;}
    td.ccsmedia  { border:  0px solid black; align="left"; width="400px";}
    .vertical-flex1 {
    background-image:url("facebook.png");
    background-size:30px 30px;
    background-repeat:no-repeat;
    width: 80%;
    height: 30px;;
    display: flex;
    align-items: center;
    justify-content: left;
    }
    .vertical-flex1:hover {
    background-image:url("facebook-ring.png");
    background-color:yellow;
    color:black;
    }
    .vertical-flex2 {
    background-image:url("twitter.png");
    background-size:30px 30px;
    background-repeat:no-repeat;
    width: 80%;
    height: 30px;;
    display: flex;
    align-items: center;
    justify-content: left;
    }
    .vertical-flex2:hover {
    background-image:url("twitter-ring.png");
    background-color:yellow;
    color:black;
    }
    .vertical-flex3 {
    background-image:url("instagram.png");
    background-size:30px 30px;
    background-repeat:no-repeat;
    width: 80%;
    height: 30px;;
    display: flex;
    align-items: center;
    justify-content: left;
    }
    .vertical-flex3:hover {
    background-image:url("instagram-ring.png");
    background-color:yellow;
    color:black;
    }
    .vertical-flex4 {
    background-image:url("youtube.png");
    background-size:30px 30px;
    background-repeat:no-repeat;
    width: 80%;
    height: 30px;;
    display: flex;
    align-items: center;
    justify-content: left;
    }
    .vertical-flex4:hover {
    background-image:url("youtube-ring.png");
    background-color:yellow;
    color:black;
    }
    .vertical-flex5 {
    background-image:url("linkedin.png");
    background-size:30px 30px;
    background-repeat:no-repeat;
    width: 80%;
    height: 30px;;
    display: flex;
    align-items: center;
    justify-content: left;
    }
    .vertical-flex5:hover {
    background-image:url("linkedin-ring.png");
    background-color:yellow;
    color:black;
    }
    .pptr { cursor: pointer; }
    .ccs_copy {
    background-color:lightgray;
    padding-left:10px;
    width:95%;
    }
    </style>
  <body>
    <?php
        $path = __DIR__ . '/locales.php';
        include $path;
    ?>
    <center><br>
    <table border="4" width="95%" height=220>
    <tr>
        <td style="border:3px solid red;">
        <table>
        <tr>
            <td width="8%"><a href="http://www.landoflisp.com/">
                <img width="84px" height="84px" alt="Lisp Logo" src="/img/lisp.jpeg">
                </a>
            </td>
            <td><b>LISP</b><br>is<br><b>L</b>ist<br><b>P</b>rocessing</td>
            <td width="80%">
            <center>
                <h2> GNU Common LISP - Dokumentation </h2>
                <h3> (c) April, 2019 - KALLUP * non-profit </h3>
            </center>
            </td>
            <td width="5%"><b>GNU</b><br>is<br><b>N</b>ot<br><b>U</b>nix</td>
            <td><a href="http://www.gnu.org">
                <img width="84px" height="84px" alt="GNU Logo" src="/img/gnu.png">
                </a>
            </td>
        </tr>
        </table>
        </td>
    </tr>
    <tr><td height="84px">
    <?php
        $path = __DIR__ . '/menu.php';
        include $path;
    ?>
    </td></tr>
    <tr><td>
    <div style="height:120%;padding-left:6px;">
    <?php
        if ($_GET['topic'] == "rot") {
            $path = __DIR__ . '/navbar.php';
            include $path;
        }
        else {
            $path = __DIR__ . '/' . $_GET['topic'] . '.php';
	        if (!file_exists($path)) {
		        echo "<b>INTERNAL FILE ERROR</b>";
		        die();
	        }
	        else {
                include $path;
	        }
        }
    ?></div></td>
    </tr>
    <tr>
    <td bgcolor="red" style="padding:10px">
        <table width="100%">
        <tr>
            <td>
            <?php
                $path = __DIR__ . '/docfooter.php';
                require $path;
            ?>
            </td>
        </tr>
        </table>
    </td>
    </tr>
    </table>
    <br>
    <table border="2" width="95%"><tr>
    <td class="rightnull">
        <table border="0" width="100%">
        <tr><td><br><img src="logo-ccs.png" width="100px"></img><br><br>
        <font size="2" face="arial" color="gray">
        Common Sense is the nation's leading nonprofit organization<br>
        dedicated to improving the lives of kids and families by<br>
        providing the trustworthy information, education, and <br>
        independent voice they need to thrive in the 21st century.
        <p><br>
        <i>Headquartered in San Francisco, with offices in Arizona, <br>
        Los Angeles, New York, and Washington, D.C.
        </p>
        </font></td>
        <td valign="top"><br><a href="docheader.php?topic=dbase_dev"><img src="dbase.jpg"></img></a></td>
        <td width="300px" valign="top"><center>
        <br><b><font face="arial">Besucherzähler:</font></b><br>
        <a href="http://www.andyhoppe.com/" title="Besucherzaehler">
        <img src="//c.andyhoppe.com/1556989191" style="border:none" alt="Besucherzaehler"/></a>
        </center>
        </td>
        <td class="leftnull"><font face="arial" color="gray"><br>
        <font color="black">Follow Common Sense <br>
        Media<br></font><br>
            <table border="0" width="70%">
                <tr><td class="vertical-flex1 pptr" onClick="window.location='https://www.facebook.com/commonsensemedia'">              &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Facebook  </td></tr>
                <tr><td class="vertical-flex2 pptr" onClick="window.location='https://www.twitter.com/commonsense'">                    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Twitter   </td></tr>
                <tr><td class="vertical-flex3 pptr" onClick="window.location='https://www.instagram.com/commonsenseorg'">               &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Instagram </td></tr>
                <tr><td class="vertical-flex4 pptr" onClick="window.location='https://www.youtube.com/user/CommonSenseMedia/featured'"> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; YoutTube  </td></tr>
                <tr><td class="vertical-flex5 pptr" onClick="window.location='https://www.linkedin.com/company/common-sense-media'">    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; LinkedIn  </td></tr>
            </table>
        </font>
        <br>
        </td></tr></table>
    </table>
        <table class="ccs_copy">
        <tr><td>
        <font color="gray" size="2" face="Arial"><p><i>
            <a href="./docheader.php?topic=cs_policy">Privacy policy </a> / 
            <a href="./docheader.php?topic=cs_terms" >Terms of use   </a> /
            <a href="./docheader.php?topic=cs_guide" >Community guidelines</a></p></i></font>
            <font color="gray" size="2" face="Arial"><p>(c) Common Sense Media. All rights reserved.</p></font>
        </font>
        </td></tr>
    </table>
    <div id="cookies">
    <div id="cookiestr">
        Diese Webseite verwendet Cokkie.
        Mit der Nutzung stimmen Sie der Verwendung von Cookies zu
        <div class="okButton">Ok</div>
        <div class="okButton">Learn More</div>
    </div>
  </div>
<?php
    session_destroy();
?><br>
<!-- Matomo -->
<!--script type="text/javascript">
  var _paq = window._paq || [];
  _paq.push(['trackPageView']);
  _paq.push(['enableLinkTracking']);
  (function() {
    var u="//localhost/matamo/";
    _paq.push(['setTrackerUrl', u+'matomo.php']);
    _paq.push(['setSiteId', '1']);
    var d=document, g=d.createElement('script'), s=d.getElementsByTagName('script')[0];
    g.type='text/javascript'; g.async=true; g.defer=true; g.src=u+'matomo.js'; s.parentNode.insertBefore(g,s);
  })();
</script-->
<!-- End Matomo Code -->
</body>
</html>
