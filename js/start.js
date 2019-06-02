var mp3 = 0;
var mp2 = false;
var mp1 = true;

// for the designer grid
var gridPointVector = [ {x: 2, y: 0} ];
var gridBoundRect ;
var gridMouseDown ;
var gridObjects = [
    {   name:"obser1",  
        left:20, top:20,
        width:150,height:150,
        color:"#ff0000"
    },
    {	name:"caffeelate",
        left:40, top:40,
        width:150,height:150,
        color:"#00ff00"
    }
];
var max_designer_width  = 800;
var max_designer_height = 600;

var currentResizer;
var compodrop = 0;

var grippersCSS = {theCssString: function(){/*
#nwgrip_@, #negrip_@, #swgrip_@, #segrip_@, #ngrip_@, #egrip_@, #sgrip_@, #wgrip_@ {
z-index:2502;
width: 10px;
height: 10px;
background-color: #ffffff;
border: 1px solid #000000;}
#negrip_@ { top:-6px; right:-6px; }
#segrip_@ { bottom:-6px; right:-6px;}
#nwgrip_@ { top:-6px; left:-6px;}
#swgrip_@ { bottom:-6px; left:-6px;}
#ngrip_@  { top:-6px;     left:50%; margin-left:-6px;}
#egrip_@  { right:-6px;   top: 50%; margin-top :-6px;}
#sgrip_@  { bottom:-6px;  left:50%; margin-left:-6px;}
#wgrip_@  { left:-6px;    top: 50%; margin-top :-6px;}*/}.toString().slice(14,-3)};

var fontArray = [10,12,14,16,18,20];
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

var tabs = [
{name:tabnames[0], components: [
	{image:"/img/tmouse.png",     hint:"chooser"    },
	{image:"/img/tmainmenu.png",  hint:"TMainMenu"	},
	{image:"/img/tpopupmenu.png", hint:"TPopUpMenu"	},
	{image:"/img/tbutton.png",    hint:"TButton" 	},
	{image:"/img/tlabel.png",     hint:"TLabel"	},
	{image:"/img/tedit.png",      hint:"TEdit"	},
	{image:"/img/tmemo.png",      hint:"TMemo"	},
	{image:"/img/ttogglebox.png", hint:"TToggleBox"	}
    ]
},
{name:tabnames[1], components: [
	{image:"/img/tbutton.png",    hint:"TButton" 	}
    ]
}
];


var mDown = false;
var old_xpos;
var old_ypos;

var over_sub = false;
var rid = "";
var editor,consoleEditor;

var can,canvas,canvasWidth,canvasHeight,ctx,canvasData;
var over_compo = 0;
var isDown = false;
var ṕtr,obj,cy,cx;

// for the designer grid
var gridPointVector = [ {x: 2, y: 0} ];
var gridBoundRect ;
var gridMouseDown ;
var gridObjects = [
    {name:"obser1", zindex: 1, 
	left:20, top:20,
	width:50,height:50,
	color:"#ff0000"
    },
    {name:"caffeelate", zindex: 2,
	left:40, top:40,
	width:50,height:50,
	color:"#00ff00"
    }
];
var prev = 0;

function draw_designer_grid()
{
    var len = gridPointVector.length;
    for (let i=1;i<len-1;++i) {
        drawPixel(
        gridPointVector[i].x,
        gridPointVector[i].y, 0, 0, 0, 255);	
    }
    updateCanvas();
}

function draw_designer_objects()
{
    var len = gridObjects.length;
    var ptr;
    for (var i=0;i<len;i++) {
        ptr = gridObjects[i];
    }
}

function draw_desinger()
{
    draw_designer_grid();
//    draw_designer_objects();
}

function init_editor() {
    editor = ace.edit("editorpane");
    editor.setTheme("/js/ace/theme/eclipse");
    editor.session.setMode("/js/ace/src/mode-javascript");
}

function init_menu(m_array)
{
    var wpos = 7;
    var len = m_array.length;
    var txt = "";
    for (i=0;i<7;i++) {
	txt = "<div id='menuid" +
	      (i+1) + "' class='menu_top' " + "menuid='" +
	      (i+1) + "'>" + m_array[i]     + "</div>";
	$('#menu_top').append(txt);

        $('.menu_top').css('background-image','url("img/btn.png"');
        $('#menuid'+(i+1)).css('left',wpos+'px');

        $('#menuid'+(i+1)).mouseenter(function(){
		$(this).css({
			'border':'2px solid black',
			'textShadow':'#000000 2px 2px 2px',
			'color':'yellow'});
		});
        $('#menuid'+(i+1)).mouseleave(function(){
		$(this).css({
			'border':'1px solid black',
			'textShadow':'#000000 0px 0px 0px',
			'color':'black' });
		});
        wpos += 90;

	$('#menuid'+(i+1)).mousedown(function(){
	    $(this).css('textShadow','white 2px 2px 2px');
	    $(this).css('color','black');
	});
	$('#menuid'+(i+1)).mouseup(function(){
	    $(this).css('textShadow','black 2px 2px 2px');
	    $(this).css('color','yellow');
	});
    }
}

function evnt_click1() { $('#bar2').hide(); $('#bar3').show(); }
function prop_click1() { $('#bar3').hide(); $('#bar2').show(); }

function init_submenu(mid,m_array) {
    var len = m_array.length;
    // ------------------------
    // calculate menu height:
    // ------------------------
    var font_height = 40;
    var menu_height = (len * font_height);
    $('#menu_sub').css('height',parseInt(menu_height)+'px');

    var rid,id,div_code;
    var mtop    = 90;		// menu top start++
    var mheight = 32;		// size of menu item

    rid = "#menu_sub";
    for (i = 0; i < len; i++) {
        id = '#menuid' +
        parseInt(mid)  + '_' +
        parseInt(i+1)  ;

        div_code = "<div id='menuid"   +
        parseInt(mid) + "_"   +
        parseInt(i+1) + "' class='menu_sub' menuid='" +
        parseInt(mid) + "_"   +
        parseInt(i+1) + "'>"  +
        m_array[i] + "</div>" ;

        $(rid).append(div_code);

        $(id)
        . css('color','black')
        . css('font-size','16px')
        . css('height','40px')
        . css('top',mtop+'px')
		. css('outline','2px dotted white')
		. css('display','flex')
		. css('justify-content','center')
		. css('align-items','center');

	    $(id).mouseenter(function(){
            $(this)
            . css('background-color','black')
            . css('color','white')
            . css('top',mtop+'px');
	    });
        $(id).mouseleave(function(){
            $(this)
            . css('background-color','rgb(180,150,50)')
            . css('color','black')
            . css('top',mtop+'px');
        });

        mheight += 30;
        mtop += 30;

        if (parseInt(i) == 1) { // project
            $('#menuid1').mousedown(function(){
                if (!over_sub) { over_sub = true;  $(rid).show(); }
                else           { over_sub = false; $(rid).hide(); }
            });
        }
    }
    $(rid).hide();
}

function init_console()
{
    consoleEditor = ace.edit("console");
    consoleEditor.setTheme("/js/ace/theme/chaos");
    consoleEditor.session.setMode("/js/ace/src/mode-javascript");
    consoleEditor.renderer.setShowGutter(false);
    consoleEditor.setOption("highlightActiveLine", false);

}

// ---------------------------------------
// select combo; for editor font size ...
// ---------------------------------------
function fontSizeCombo(thelist)
{
    var idx = fontsizelist.selectedIndex;
    for (i = 0; i < 7; i++) {
	if (idx == i) {
	    editor.setFontSize(fontArray[i]+'pt');
	    editor.focus();
	}
    }
}

function init_fontlist(m_array)
{
    var lir = '#fontsizelist';
    var len = m_array.length;

    for (i = 0; i < len; i++) {
    	$(lir).append("<option>Font-Size: " + m_array[i] +
	"pt</option>");
    }
}

function switcher(btn)  {
    if ($(btn).attr('value') == "switch to designer ...") {
        $(btn).prop('value',"switch to console");
        $('#painter').show();
        $('#vscroll').show();
        $('#hscroll').show();

        draw_designer_grid();
	draw_designer_objects();
    }
    else {
        $(btn).prop('value',"switch to designer ...");
	$('#painter').hide();
        $('#vscroll').hide();
        $('#hscroll').hide();
    }
}

function start_script()
{
    consoleEditor.session.insert(
    consoleEditor.getCursorPosition(), "stext");
    consoleEditor.focus();
}

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

function normalize_components(el,state)
{
    let la = tabs.length;
    let found  = false;
    let obj;

    for (let c = 0; c < la; ++c) { let lb = tabs[c].components.length;
    for (let b = 0; b < lb; ++b) {
         let d = "tab" + (c+1) + "_" + (b+1);
         let e = $(el).hasClass(d);
         if (e) {
             set_activeCompo('.'+d,0);
        }
    }
    }

    for (let c = 0; c < la; ++c) { let lb = tabs[c].components.length;
    for (let b = 0; b < lb; ++b) {
         let d = "tab" + (c+1) + "_" + (b+1);
         let e = $(el).hasClass(d);
         if (e) {
             found = true;
             if (state == "enter" && over_compo == 0) { set_activeCompo('.'+d,0); over_compo = 1; } else
             if (state == "leave" && over_compo == 1) { set_activeCompo('.'+d,1); over_compo = 0; } else
             if (state == "leave" && over_compo == 2) { set_activeCompo('.'+d,1); over_compo = 2; } else
             if (state == "mdown" && over_compo == 1) { set_activeCompo('.'+d,2); over_compo = 2; } else
             if (state == "mdown" && over_compo == 2) { set_activeCompo('.'+d,1); over_compo = 1; }
             break;
        }
    }
    if (found == true) break;
    }
}

function init_tabscontent()
{
    var lpos = 14;
    var t    = 0;

    var len = tabs.length;
    var len2;
    let element;
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
	        + tabs[i].components[j].hint + '</span>');

            element = '.tab' + (i+1) + '_' + (j+1);
	        $(element).css({
	        	'background-image':"url('" + tabs[i].components[j].image + "')",
	        	'position':'fixed',
	        	'background-size':'cover',
	        	'top':'102px',
	        	'width':'36px',
	        	'height':'34px',
	        	'left':lpos+'px'
	        });

            $(element).on("mouseenter",function(e){ let found = normalize_components(this,"enter"); });
            $(element).on("mouseleave",function(e){ let found = normalize_components(this,"leave"); });
            $(element).on("mousedown" ,function(e){ let found = normalize_components(this,"mdown"); });

	        lpos += 42;
            ++t;
	    }
    }
}
function my_compo_enter(pl){
alert("pl: " + pl);
}

function init_scrollbars()
{
    var m_array = [
	"#vscrollup"  , "#vscrolldown",
	"#hscrollleft", "#hscrollright"
    ];
    var len = m_array.length;
    for (let i=0;i<len;++i) {
        $(m_array[i]).mouseenter(function(){ set_activeCompo(m_array[i],0); $(m_array[i]).css('background-color','#aaeeaa').css('width','21px'); });
        $(m_array[i]).mouseleave(function(){ set_activeCompo(m_array[i],1); $(m_array[i]).css('background-color','yellow' ); });
        $(m_array[i]).mousedown (function(){ set_activeCompo(m_array[i],2); $(m_array[i]).css('background-color','#fff'   ).css('width','20px'); });
        $(m_array[i]).mouseup   (function(){ set_activeCompo(m_array[i],1); $(m_array[i]).css('background-color','#aaeeaa').css('width','22px'); });
    }
}

function tab_click(tab) { hide_compos(); $('.'+tabnames[tab]).show(); }

function updateCanvas() { ctx.putImageData(ctxdata, 0, 0); }
function drawPixel (x, y, r, g, b, a) {
    var index = (x + y * max_designer_width) * 4;

    ctxdata.data[index + 0] = r;
    ctxdata.data[index + 1] = g;
    ctxdata.data[index + 2] = b;
    ctxdata.data[index + 3] = a;
}

function PIXEL_RATIO() {
    ctx = document.getElementById("painter").getContext("2d");
    dpr = window.devicePixelRatio || 1;
    bsr =
        ctx.webkitBackingStorePixelRatio    ||
        ctx.mozBackingStorePixelRatio       ||
        ctx.msBackingStorePixelRatio        ||
        ctx.oBackingStorePixelRatio         ||
        ctx.backingStorePixelRatio          || 1;
    return dpr / bsr;
};

function setHiDPICanvas(w, h, ratio) {
    if (!ratio) { ratio = PIXEL_RATIO(); }
    var can    = document.getElementById("painter");
    can.width  = w * ratio;
    can.height = h * ratio;
    can.style.width  = w + "px";
    can.style.height = h + "px";
    can.getContext("2d").setTransform(ratio, 0, 0, ratio, 0, 0);
    return can;
}

function init_painter() {
    can = setHiDPICanvas(
        $('#painter').width (),
        $('#painter').height(), 0);

    ctx     = can.getContext("2d");
    ctxdata = ctx.getImageData(0,0,
        $('#painter').width(),
        $('#painter').height());
}

function init_designer()
{
    var gridSize = 10;

    var left = gridSize;
    var top  = gridSize;

    var wpos = $('#painter').width ();
    var hpos = $('#painter').height();

    for (var xp = left; xp < wpos; xp += gridSize) {
    for (var yp = top ; yp < hpos; yp += gridSize) {
        gridPointVector.push({x:xp,y:yp}); }
    }
}

function replaceAll(str, find, replace) {    return str.replace(new RegExp(find, 'g'), replace); }
function LoadAndSetupCss(cssStyles,idx) {
    let str   = replaceAll(cssStyles,'_@','_'+idx);
    let  link = document.createElement('link');

    link.href = `data:text/css;base64,${btoa(str)}`;
    link.type = 'text/css';
    link.rel  = 'stylesheet';

    document.getElementsByTagName('head')[0].appendChild(link);
}

function makeResizableDiv()
{
    var c_array = ["red","yellow"];
    var r_array = ["nwgrip","negrip","swgrip","segrip","ngrip","egrip","sgrip","wgrip"];
    var s_array = ["nw","ne","sw","se","n","e","s","w"];

    var r_len   = r_array.length;
    var txta    = "";
    var txtb    = "";
    var txtc    = "";

    for (let i = 0; i < 2; ++i){
        $('#mausi').append(
        "<div id='resizable_" + i + "'>" +
        "<div id='resizable_" + i + "content'>ssss</div>");

        txta = "";
        for (let j = 0; j < 8; ++j) {
            txtb = s_array[j] ;
            txtc = r_array[j] + "_" + i;
            txta = txta + "<div class='mdc_" + i + " ui-resizable-handle ui-resizable-"
                 + txtb + "' id='"
                 + txtc + "'></div>";
        }   txta = txta + "</div>";

        $("#resizable_" + i).append(txta);
        $("#resizable_" + i).css({
            'position':'absolute',
            'border': '1px solid #000000',
            'background-color':c_array[i],
//            'z-index':2502,
            'width': '100px',
            'height': '100px',
            'top': '150px',
            'left': '170px'
        });
        
        LoadAndSetupCss(grippersCSS.theCssString,i);

        $('#resizable_' + i).resizable({
            handles: 'all',
            grid: [10,10],
            disabled: false
        });

        $(".mdc_"+i).hide();

        $('#resizable_' + i).draggable({ grid: [10,10]});
        $('#resizable_' + i).on("mousedown", function(e){
            console.log(e.target.id);
            for (let k = 0; k < 2; ++k)
            $(".mdc_" + k).hide();
            $(".mdc_" + i).show();
        });
    }
}

function init_spliter(){
    $("#left_pane").resizable({
        handles: 'e',
        resize: function() {
            $("#right_pane").outerWidth($("#container").innerWidth() - $("#left_pane").outerWidth());
        }
    });
    $("#left_pane3").resizable({
        handles: 'w',
        resize: function() {
            $("#right_pane3").outerWidth($("#container3").innerWidth() - $("#left_pane3").outerWidth());
        }
    });
}

$(document).ready(function()
{
    document.body.style.zoom = 1.0;
/*
    init_menu(["Project","Edit","Tools","","Support","Help","Register"]);
    init_submenu(1,["New","Open","Save As ...","Close / LogOut"]);

    init_spliter();

    init_fontlist(fontArray);

    init_editor();
    init_console();

    init_scrollbars();
    init_tabscontent();  tab_click(0);

    
    init_painter ();
    init_designer();
    draw_desinger();*/

//    makeResizableDiv();
});

