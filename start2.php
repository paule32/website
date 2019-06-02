<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01//EN" "http://www.w3.org/TR/html4/strict.dtd">
<html lang="en">
<head>
    <meta charset="utf-8">

    <meta name="robots" content="index,follow">
    <meta http-equiv="content-type" content="text/html; charset=utf-8">
    <meta http-equiv="expires" content="0" />
    <meta http-equiv="cache-control" content="max-age=0" />
    <meta http-equiv="cache-control" content="no-cache" />
    <meta http-equiv="pragma" content="no-cache" />

    <link   type="text/css" rel="stylesheet" href="/css/jquery-layout.css"/>
    <link   type="text/css" rel="stylesheet" href="/css/jquery-ui.css"/>

    <link rel="stylesheet" type="text/css" href="/themes/default/easyui.css">
    <link rel="stylesheet" type="text/css" href="/themes/icon.css">
    <link rel="stylesheet" type="text/css" href="/themes/color.css">

    <script type="text/javascript" src="/js/jquery.min.js"></script>
    <script type="text/javascript" src="/js/jquery.easyui.min.js"></script>

    <style>
        #my_computer       { position:fixed; top:  20px; background: hsla(350,50%,50%,0.3); padding:10px; width: 132px; height: 100px; }
        #my_documents      { position:fixed; top: 140px; background: hsla(350,50%,50%,0.3); padding:10px; width: 132px; height: 100px; }
        #my_network_places { position:fixed; top: 260px; background: hsla(350,50%,50%,0.3); padding:10px; width: 132px; height: 100px; }
        #my_recycle_bin    { position:fixed; top: 380px; background: hsla(350,50%,50%,0.3); padding:10px; width: 132px; height: 100px; }
    </style>
</head>
<body>

<div id="my_desktop">
    <div class="easyui-panel" style="
    position:relative;
    width:1250px;
    height:850px;
    background: #004E98 url(/img/xpdefault/background.jpg) no-repeat 0 100%;
    min-height: 100%;
    overflow:auto;">

        <div id="my_computer"      > <center><img src="/img/xpdefault/my_computer.png"       width="60px"/> <br> My Computer       </center></div>
        <div id="my_documents"     > <center><img src="/img/xpdefault/my_documents.png"      width="60px"/> <br> My Documents      </center></div>
        <div id="my_recycle_bin"   > <center><img src="/img/xpdefault/my_recycle_bin.png"    width="60px"/> <br> My Recycle Bin    </center></div>
        <div id="my_network_places"> <center><img src="/img/xpdefault/my_network_places.png" width="60px"/> <br> My Network Places </center></div>


            <div class="easyui-window" id="w" title="My Computer: 1"
            data-options="iconCls:'icon-save'" style="width:500px;height:200px;padding:10px;">
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
        var lastdialog = null;
        var i = 1;
        $("#my_computer").on("click", function (event) {
            event.preventDefault();
console.log("fffffff");

        });
    });
</script>
</body>
</html>
