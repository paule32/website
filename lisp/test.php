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

    <link   type="text/css" rel="stylesheet" href="/css/jquery/jquery-layout.css"/>
    <link   type="text/css" rel="stylesheet" href="/css/jquery/jquery-ui.css"/>

    <script type="text/javascript" src="/js/jquery.min.js"></script>
    <script type="text/javascript" src="jquery.base64.js"></script>
    <script type="text/javascript" src="/js/jquery-ui.js"></script>
    <script type="text/javascript" src="/js/jquery.easyui.min.js"></script>

    <link rel="stylesheet" type="text/css" href="/themes/default/easyui.css"/>
    <link rel="stylesheet" type="text/css" href="/themes/icon.css"/>
    <link rel="stylesheet" type="text/css" href="/themes/color.css"/>

    <script type="text/javascript" src="ace/src-noconflict/ace.js" charset="utf-8"></script>
    <script type="text/javascript" src="ace/src-noconflict/ext-language_tools.js" charset="utf-8"></script>

<style>
#tabs .ui-tabs-nav li {
top:50px;
    position:absolute;
    width:100px;
    height:50px;
    margin-top: 2em; 
    font-size: 70%; 
} 
#tabs .ui-tabs-nav li.ui-tabs-selected, 
#tabs .ui-tabs-nav li.ui-state-active {
top:50px;
    position:absolute;
    width:100px;
    margin-top: 2em; 
    font-size: 70%; 
}
.tab-panels ul {
    margin: 0;
    padding: 0;
}
.tab-panels ul li {
    list-style-type: none;
    display: inline-block;
    background: #999;
    margin: 0;
    padding: 3px 10px;
    border-radius: 10px 10px 0 0;
    color: #fff;
    font-weight: 200;
    cursor: pointer;

}
.tab-panels ul li:hover {
    color: #fff;
    background: #666;
}

.tab-panels ul li.active {
    color: #fff;
    background: #666;
}

.tab-panels .panel {
    display:none;
    background: #c9c9c9;
    height:43px;
    width:100px;
    padding-left:15px;
    border-radius: 0 0 10px 10px;
}

.tab-panels .panel.active {
    display:block;
}

.tabitem {
    position:fixed;
    z-index:999999;
    float:left;
    margin-right:3px;
    margin-left:2px;
    top:1px;
    left:-16px;
    width:42px;
    height:42px;
}

.image{
    position:relative;
    margin-right:3px;
    margin-left:2px;
}
.image:hover {
    border-top:    2px solid white;
    border-left:   2px solid white;
    border-right:  2px solid black;
    border-bottom: 2px solid black;
}

.hint {
    position:absolute;
    background-color:black;
    border-radius: 10px 10px 10px 10px;
    z-index:999999;
    padding-top:4px;
    padding-left:4px;
    top:155px;
    color:white;
    width:120px;
    height:26px;
    display:none;
}
.tabitem:hover + .hint {
    display:block;
    border-top:    2px solid white;
    border-left:   2px solid white;
    border-right:  2px solid white;
    border-bottom: 2px solid white;
}
.tabitem:active {
    border-top:    1px solid black;
    border-left:   1px solid black;
    border-right:  1px solid white;
    border-bottom: 1px solid white;
}

</style>
  </head>

<body>
<script>
var tabnames = [
    "Standard",
    "Additional",
    "Common",
    "Dialogs",
    "Data",
    "DataCtrls",
    "DataAccess",
    "System",
    "Misc",
    "SynEdit"
];

function set_activeCompo(tab,flag)
{
    if (flag == 0) {
    $(tab).css({
    'border-left'   : '2px solid white',
    'border-top'    : '2px solid white',
    'border-bottom' : '1px solid black',
    'border-right'  : '1px solid black'
    });
    }
    else if (flag == 1) {
    $(tab).css({
    'border-left'   : '0px',
    'border-top'    : '0px',
    'border-bottom' : '0px',
    'border-right'  : '0px'
    });  }
    else {
    $(tab).css({
    'border-left'   : '1px solid black',
    'border-top'    : '1px solid black',
    'border-bottom' : '2px solid white',
    'border-right'  : '2px solid white'
    });
    }
}
function hide_compos()
{
    $('.Standard').hide();
    $('.Additional').hide();
}
function init_tabscontent()
{
    var lpos = 14;
    var t    = 0;

    var tabs = [
	{name:tabnames[0], components: [
		{image:"/img/tmouse.png",     hint:"chooser"    },
		{image:"/img/tmainmenu.png",  hint:"TMainMenu"	},
		{image:"/img/tpopupmenu.png", hint:"TPopUpMenu"	},
		{image:"/img/tbutton.png",    hint:"TButton" 	},
		{image:"/img/tlabel.png",     hint:"TLabel"     },
		{image:"/img/tedit.png",      hint:"TEdit"      },
		{image:"/img/tmemo.png",      hint:"TMemo"      },
		{image:"/img/ttogglebox.png", hint:"TToggleBox"	}
	    ]
	},
	{name:tabnames[1], components: [
		{image:"/img/tbutton.png",    hint:"TButton" 	}
	    ]
        }
	];

    var len = tabs.length;
    var len2;
    for (var i=0;i<len;i++) {
	$('#tabs').append('<li><a href="#" class="tab'
	+ (i+1) + '" onclick="tab_click(' +i+  ');">'
	+ tabs[i].name +  '</a></li>');

	lpos = 14;
	t = 0;
        len2 = tabs[i].components.length;
        for (var j=0;j<len2;j++) {
	    $('#tabscontent').append('<div class="'
	    + tabs[i].name + ' tooltip tab'
	    + (i+1) + '_'
	    + (j+1) + '"></div>');
            $('.tab'
	    + (i+1) + '_'
	    + (j+1) ).append('<span class="tooltiptext">'
	    + tabs[i].components[j].hint + '</spand');

	    $('.tab' + (i+1) + '_' + (j+1)).css({
	    	'background-image':"url('" + tabs[i].components[j].image + "')",
	    	'position':'fixed',
	    	'background-size':'cover',
	    	'top':'102px',
	    	'width':'36px',
	    	'height':'34px',
	    	'left':lpos+'px'
	    });



            $('.tab' + (i+1) + '_' + (j+1)).mouseenter(function(){
		if (over_compo == 2)
		{   over_compo = 0;
		    set_activeCompo(this,1);
		}
		else {
		    set_activeCompo(this,0);
		}
	    });
            $('.tab' + (i+1) + '_' + (j+1)).mouseleave(function(){
		if (over_compo == 2) {
		    over_compo = 0;
		    set_activeCompo(this,2);
		}
		else {
		    over_compo = 1; set_activeCompo(this,1);
		}
	    });
            $('.tab' + (i+1) + '_' + (j+1)).mousedown (function(){
		if (over_compo == 2) {
		    over_compo = 0;
		    set_activeCompo(this,1);
		}
		else {
		    over_compo = 2;
		    set_activeCompo(this,2);
		}

	    });

	    lpos += 42;
            ++t;
	}
    }
}
$(document).ready(function()
{
    init_tabscontent();
});

</script>
                <div id="tt" class="easyui-tabs" style="width:500px;height:78px;">
                    <div title="Standard" style="padding:10px">
                        <img src="/img/designer/tmouse.png" class="tabitem image"/><div class="hint">chooser</div>
                        <img src="/img/designer/tmainmenu.png" class="tabitem image"/><div class="hint">TMainMenu</div>
                        <img src="/img/designer/tpopupmenu.png" class="tabitem image"/><div class="hint">TPopUpMenu</div>
                        <img src="/img/designer/tbutton.png" class="tabitem image"/><div class="hint">TButton</div>
                        <img src="/img/designer/tlabel.png" class="tabitem image"/><div class="hint">TLabel</div>
                        <img src="/img/designer/tedit.png" class="tabitem image"/><div class="hint">TEdit</div>
                        <img src="/img/designer/tmemo.png" class="tabitem image"/><div class="hint">TMemo</div>
                        <img src="/img/designer/ttogglebox.png" class="tabitem image"/><div class="hint">TToggleBox</div>
                    </div>
                    <div title="Additional" style="padding:10px">
                        <img src="/img/designer/tmouse.png" class="tabitem image"/><div class="hint">chooser</div>
                    </div>
                </div>
                <div class="easyui-layout" data-options="fit:true">
                    <div data-options="region:'west',split:true" style="width:235px;padding:10px">
                        <div id="tt" class="easyui-tabs" style="width:240px;height:420px">
                            <div title="Properties" style="padding:5px">
                                <div class="easyui-panel" style="padding:0px" data-options="fit:true,border:false">
                                    <table id="pg" class="easyui-propertygrid" style="width:200px height:400px;" data-options="
                                        url:'/res/dBase/property_data1.json',
                                        method:'get',
                                        showGroup:true,
                                        columns: mycolumns,
                                        scrollbarSize:0">
                                    </table>
                                    <script>
                                        var mycolumns = [[
                                            {field:'name' ,title:'Properties',width:100,sortable:true},
                                            {field:'value',title:'Events',width:100,resizable:false}
                                        ]];
                                    </script>
                                </div>
                            </div>
                            <div title="Events" style="padding:10px"></div>
                        </div>
                    </div>
                    <div data-options="region:'east',split:true" style="width:190px;padding:5px">
                        <div>Inspector</div>
                        <div class="easyui-panel" style="padding:0px" data-options="fit:true,border:false">
                            <ul class="easyui-tree">
                                <li data-options="state:'closed'"> <span>Classes   </span> </li>
                                <li data-options="state:'closed'"> <span>Functions </span> </li>
                                <li data-options="state:'closed'"> <span>Elements  </span> </li>
                            </ul>
                        </div>
                    </div>
                    <div data-options="region:'center'" style="padding:10px">
                        <div id="tt" class="easyui-tabs" style="width:630px;height:450px">
                            <div title="File-1" style="padding:10px">
                                <div id="editorpane1"></div>
                            </div>
                            <div title="File-1: Designer" style="padding:10px">
                                <div id="mausi">
                                <canvas id="painter"></canvas>
                                </div>
                            </div>
                            <div title="File-3" data-options="closable:true" style="padding:10px">
                                This is the help content.
                            </div>
                        </div>
                    </div>
                </div>
</body>
</html>
