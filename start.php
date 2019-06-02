<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01//EN" "http://www.w3.org/TR/html4/strict.dtd">
<html lang="en">
<head>
    <meta charset="utf-8">

    <meta name="author" content="Jens Kallup [paule32]">
    <meta name="copyright" content="Jens Kallup">
    <meta name="keywords" content="kallup, css, html, theme, desktop, windows, xp">
    <meta name="description" content="A Windows XP desktop in HTML, CSS and JavaScript">
    <meta name="robots" content="index,follow">
    <meta http-equiv="content-type" content="text/html; charset=utf-8">
    <meta http-equiv="expires" content="0" />
    <meta http-equiv="cache-control" content="max-age=0" />
    <meta http-equiv="cache-control" content="no-cache" />
    <meta http-equiv="pragma" content="no-cache" />

    <title>RAD - Rapid Application Development</title>
    <link   type='text/css' rel="stylesheet" href="/css/cog.css"/>

    <link   type='text/css' rel='stylesheet' href="https://use.fontawesome.com/releases/v5.6.3/css/all.css"/>
    <link   type="text/css" rel="stylesheet" href="/css/jquery-layout.css"/>
    <link   type="text/css" rel="stylesheet" href="/css/jquery-ui.css"/>

    <link rel="stylesheet" type="text/css" href="/themes/default/easyui.css">
    <link rel="stylesheet" type="text/css" href="/themes/icon.css">
    <link rel="stylesheet" type="text/css" href="/themes/color.css">

    <script type="text/javascript" src="/js/jquery.min.js"></script>
    <script type="text/javascript" src="/js/jquery-ui.min.js"></script>

    <style>
        #my_computer       { z-index:10; top: 20px; background: hsla(350,50%,50%,0.3); padding:10px; width: 132px; height: 100px; }
        #my_documents      { z-index:10; top: 40px; background: hsla(350,50%,50%,0.3); padding:10px; width: 132px; height: 100px; }
        #my_network_places { z-index:10; top: 60px; background: hsla(350,50%,50%,0.3); padding:10px; width: 132px; height: 100px; }
        #my_recycle_bin    { z-index:10; top: 80px; background: hsla(350,50%,50%,0.3); padding:10px; width: 132px; height: 100px; }
    </style>
</head>
<body>
    <div id="loader" class="overlay-loader">
        <div class="loader-background color-flip">PLEASE WAIT ...</div>
        <img class="loader-icon spinning-cog" src="/img/cogs/cog08.svg" data-cog="cog08">
    </div>

<div id="my_desktop">
    <div class="easyui-panel"
        style="
        position:absolute;
        width:1000px;
        height:900px;
        overflow:auto;
        background:#004E98 url(/img/xpdefault/background.jpg) no-repeat 0 100%;
        min-height:100%;">

        <div id="my_computer"      > <center><img src="/img/xpdefault/my_computer.png"       width="60px" class="desktop_icon, ui-widget-content"/> <br> My Computer       </center></div>
        <div id="my_documents"     > <center><img src="/img/xpdefault/my_documents.png"      width="60px" class="desktop_icon, ui-widget-content"/> <br> My Documents      </center></div>
        <div id="my_recycle_bin"   > <center><img src="/img/xpdefault/my_recycle_bin.png"    width="60px" class="desktop_icon. ui-widget-content"/> <br> My Recycle Bin    </center></div>
        <div id="my_network_places"> <center><img src="/img/xpdefault/my_network_places.png" width="60px" class="desktop_icon, ui-widget-content"/> <br> My Network Places </center></div>


            <div class="easyui-window" title="My Computer: 1"
            data-options="width:200px,height:260px,left:40px,top:30px,inline:true,closecls:"c1"
            </div>
    </div>
</div>
    <script>
    $(function() {
        $("#my_computer").draggable();
        $("#my_documents").draggable();
        $("#my_recycle_bin").draggable();
        $("#my_network_places").draggable();
    });

    $(document).ready(function() {
        $(".loader-icon").removeClass("spinning-cog").addClass("shrinking-cog");
        $(".loader-background").delay(1200).fadeOut();

        var lastdialog = null;
        var i = 1;
        $("#my_computer").on("click", function (event) {
            event.preventDefault();
console.log("fffffff");
/*            lastdialog =
            '<div id="win1" class="easyui-window" title="My Computer: ' + i + '" ' +
            'data-options="width:200px,height:260px,left:40px,top:30px,inline:true,closecls:"c1">' +
            '</div>';
            $("#my_desktop").append(lastdialog);*/
        });

        $(".loader").hide();
    });
</script>
</body>
</html>
