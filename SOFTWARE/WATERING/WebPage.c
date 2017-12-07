const char WebPage [][80] =
{
"<!DOCTYPE HTML>",
"<html>",
"<head>",
"  <meta name=\"viewport\" content=\"width=device-width, initial-scale=1\"/>",
"  <meta http-equiv=\"refresh\" content=\"5;url=/\"/>",
" <style>",
"   body * {",
"     font-size: 16px;",
"     font-family: Arial, sans-serif; ",
"     margin: 0;",
"     padding: 0;",
"   }",
"   p {",
"    font-size: 0;",
"   }",
"   h1 {",
"     margin-bottom: 10px;",
"     text-align: center;",
"     font-weight: bold;",
"     font-size: 25px;",
"     line-height: 35px;",
"     background-color: lightgray;",
"   }",
"   button {",
"     font-size: 15px;",
"     border: solid 1px black;",
"     padding: 10px 10px;",
"     width: 160px;",
"   }",
"   div.content {",
"     position: relative;",
"     padding: 10px;",
"     width: 100%%;",
"     max-width: 320px;",
"     margin-left: auto;",
"     margin-right: auto;",
"     border: solid 1px black;",
"   }",
"   div.status {",
"     margin-bottom: 10px;",
"     display: inline-block;",
"     width: 100%%;",
"   }",
"   div.status div {",
"     display: inline-block;",
"     width: auto;",
"   }",
"   div.int {",
"     display: inline-block;",
"     padding-right: 10px;",
"     padding-bottom: 10px;",
"     vertical-align: bottom;",
"     font-size: 0;",
"   }",
"   div.int .value {",
"     font-size: 28px;",
"     line-height: 40px;",
"     display: inline-block;",
"     width:  70px;",
"     height: 40px;",
"     border: solid 1px black;",
"     vertical-align: bottom;",
"     text-align: center;",
"   }",
"   div.int .ctrl {",
"     display: inline-block;",
"     width:  21px;",
"     vertical-align: bottom;",
"   }",
"   div.int .ctrl button {",
"     display: inline-block;",
"     width:  30px;",
"     height: 21px;",
"     border-left: none;",
"     padding: 0;",
"   }",
"   div.settings {",
"     display: inline-block;",
"     width: 100%%;",
"     padding-bottom: 10px;",
"   }",
"   div.settings .container {",
"     display: block;",
"     margin-bottom: 10px;",
"   }",
"   div.settings .container * {",
"     display: inline-block;",
"     font-size: 18px;",
"   }",
"   div.settings .container div {",
"     width: 150px;",
"    text-align: center;",
"  }",
"   div.settings .container button {",
"     height: 30px;",
"     padding: 0 0;",
"   }",
"   button.on {",
"     background: green;",
"     color: white;",
"   }",
"   button.off {",
"     background: red;",
"     color: white;",
"   }",
"   .on {",
"     color: green;",
"   }",
"   .off {",
"     color: red;",
"   }",
"   .left {",
"     float: left;",
"     text-align: left;",
"   }",
"   .right {",
"     float: right;",
"     text-align: right;",
"   }",
" </style>",
"</head>",
"<body>",
" <div class=\"content\">",
"   <h1>ESP32-EVB - Watering</h1>",
"   <div class=\"status\">",
"     <div class=\"left\">Status <b class=%s</b></div>",
"     <div class=\"right\">Current time <b>%s</b></div>",
"   </div>",
"   <div>",
"     <div class=\"int\">",
"       <div class=\"value\">%s</div>",
"       <div class=\"ctrl\">",
"         <a href=\"h+\"><button>&#9650;</button></a>",
"         <a href=\"h-\"><button>&#9660;</button></a>",
"       </div>",
"     </div>",
"     <div class=\"int\">",
"       <div class=\"value\">%s</div>",
"       <div class=\"ctrl\">",
"         <a href=\"m+\"><button>&#9650;</button></a>",
"         <a href=\"m-\"><button>&#9660;</button></a>",
"       </div>",
"     </div>",
"     <div class=\"int\">",
"       <div class=\"value\">%s</div>",
"       <div class=\"ctrl\">",
"         <a href=\"s+\"><button>&#9650;</button></a>",
"         <a href=\"s-\"><button>&#9660;</button></a>",
"       </div>",
"     </div>",
"     <div class=\"settings\">",
"       <div class=\"container\">",
"         <a href=\"setON\"><button>Set ON</button></a>",
"         <div class=\"value\">%s</div>",
"       </div>",
"       <div class=\"container\">",
"         <a href=\"setOFF\"><button>Set OFF</button></a>",
"         <div class=\"value\">%s</div>",
"       </div>",
"     </div>",
"   </div>",
"   <p>",
"     <a href=\"on\"><button class=\"on\">ON</button></a>",
"     <a href=\"off\"><button class=\"off\">OFF</button></a>&nbsp;",
"   </p>",
" </div>",
"</body>",
"</html>",
""
};