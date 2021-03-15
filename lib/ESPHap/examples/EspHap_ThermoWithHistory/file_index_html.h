#pragma once
const char INDEX_HTML[] PROGMEM  =  "\n"
"<html>\n"
"<head>\n"
"    <meta charset=\"utf-8\">\n"
"    <meta name=\"viewport\" content=\"width=device-width,initial-scale=1\">\n"
"    <title>Thermostat web portal</title>\n"
"\t<script src='https://cdn.plot.ly/plotly-latest.min.js'></script>\n"
"    <style>\n"
"            body {\n"
"                font-family: Arial,Helvetica,sans-serif;\n"
"                background: #181818;\n"
"                color: #EFEFEF;\n"
"                font-size: 16px\n"
"            }\n"
"            h2 {\n"
"                font-size: 18px\n"
"            }\n"
"            section.main {\n"
"                display: flex\n"
"            }\n"
"            #menu,section.main {\n"
"                flex-direction: column\n"
"            }\n"
"            #menu {\n"
"                display: none;\n"
"                flex-wrap: nowrap;\n"
"                min-width: 440px;\n"
"                background: #363636;\n"
"                padding: 8px;\n"
"                border-radius: 4px;\n"
"                margin-top: 10px;\n"
"                margin-right: 10px;\n"
"            }\n"
"            #content {\n"
"                display: flex;\n"
"                flex-wrap: wrap;\n"
"                align-items: stretch\n"
"            }\n"
"            figure {\n"
"                padding: 0px;\n"
"                margin: 0;\n"
"                -webkit-margin-before: 0;\n"
"                margin-block-start: 0;\n"
"                -webkit-margin-after: 0;\n"
"                margin-block-end: 0;\n"
"                -webkit-margin-start: 0;\n"
"                margin-inline-start: 0;\n"
"                -webkit-margin-end: 0;\n"
"                margin-inline-end: 0\n"
"            }\n"
"            figure img {\n"
"                display: block;\n"
"                width: 100%;\n"
"                height: auto;\n"
"                border-radius: 4px;\n"
"                margin-top: 8px;\n"
"            }\n"
"            @media (min-width: 800px) and (orientation:landscape) {\n"
"                #content {\n"
"                    display:flex;\n"
"                    flex-wrap: nowrap;\n"
"                    align-items: stretch\n"
"                }\n"
"                figure img {\n"
"                    display: block;\n"
"                    max-width: 100%;\n"
"                    max-height: calc(100vh - 40px);\n"
"                    width: auto;\n"
"                    height: auto\n"
"                }\n"
"                figure {\n"
"                    padding: 0 0 0 0px;\n"
"                    margin: 0;\n"
"                    -webkit-margin-before: 0;\n"
"                    margin-block-start: 0;\n"
"                    -webkit-margin-after: 0;\n"
"                    margin-block-end: 0;\n"
"                    -webkit-margin-start: 0;\n"
"                    margin-inline-start: 0;\n"
"                    -webkit-margin-end: 0;\n"
"                    margin-inline-end: 0\n"
"                }\n"
"            }\n"
"            section#buttons {\n"
"                display: flex;\n"
"                flex-wrap: nowrap;\n"
"                justify-content: space-between\n"
"            }\n"
"            #nav-toggle {\n"
"                cursor: pointer;\n"
"                display: block\n"
"            }\n"
"            #nav-toggle-cb {\n"
"                outline: 0;\n"
"                opacity: 0;\n"
"                width: 0;\n"
"                height: 0\n"
"            }\n"
"            #nav-toggle-cb:checked+#menu {\n"
"                display: flex\n"
"            }\n"
"            .input-group {\n"
"                display: flex;\n"
"                flex-wrap: nowrap;\n"
"                line-height: 22px;\n"
"                margin: 5px 0\n"
"            }\n"
"            .input-group>label {\n"
"                display: inline-block;\n"
"                padding-right: 10px;\n"
"                min-width: 47%\n"
"            }\n"
"            .input-group input,.input-group select {\n"
"                flex-grow: 1\n"
"            }\n"
"            .range-max,.range-min {\n"
"                display: inline-block;\n"
"                padding: 0 5px\n"
"            }\n"
"            button {\n"
"                display: block;\n"
"                margin: 5px;\n"
"                padding: 0 12px;\n"
"                border: 0;\n"
"                line-height: 28px;\n"
"                cursor: pointer;\n"
"                color: #fff;\n"
"                background: #ff3034;\n"
"                border-radius: 5px;\n"
"                font-size: 16px;\n"
"                outline: 0\n"
"            }\n"
"            button:hover {\n"
"                background: #ff494d\n"
"            }\n"
"            button:active {\n"
"                background: #f21c21\n"
"            }\n"
"            button.disabled {\n"
"                cursor: default;\n"
"                background: #a0a0a0\n"
"            }\n"
"            input[type=range] {\n"
"                -webkit-appearance: none;\n"
"                width: 100%;\n"
"                height: 22px;\n"
"                background: #363636;\n"
"                cursor: pointer;\n"
"                margin: 0\n"
"            }\n"
"            input[type=range]:focus {\n"
"                outline: 0\n"
"            }\n"
"            input[type=range]::-webkit-slider-runnable-track {\n"
"                width: 100%;\n"
"                height: 2px;\n"
"                cursor: pointer;\n"
"                background: #EFEFEF;\n"
"                border-radius: 0;\n"
"                border: 0 solid #EFEFEF\n"
"            }\n"
"            input[type=range]::-webkit-slider-thumb {\n"
"                border: 1px solid rgba(0,0,30,0);\n"
"                height: 22px;\n"
"                width: 22px;\n"
"                border-radius: 50px;\n"
"                background: #ff3034;\n"
"                cursor: pointer;\n"
"                -webkit-appearance: none;\n"
"                margin-top: -11.5px\n"
"            }\n"
"            input[type=range]:focus::-webkit-slider-runnable-track {\n"
"                background: #EFEFEF\n"
"            }\n"
"            input[type=range]::-moz-range-track {\n"
"                width: 100%;\n"
"                height: 2px;\n"
"                cursor: pointer;\n"
"                background: #EFEFEF;\n"
"                border-radius: 0;\n"
"                border: 0 solid #EFEFEF\n"
"            }\n"
"            input[type=range]::-moz-range-thumb {\n"
"                border: 1px solid rgba(0,0,30,0);\n"
"                height: 22px;\n"
"                width: 22px;\n"
"                border-radius: 50px;\n"
"                background: #ff3034;\n"
"                cursor: pointer\n"
"            }\n"
"            input[type=range]::-ms-track {\n"
"                width: 100%;\n"
"                height: 2px;\n"
"                cursor: pointer;\n"
"                background: 0 0;\n"
"                border-color: transparent;\n"
"                color: transparent\n"
"            }\n"
"            input[type=range]::-ms-fill-lower {\n"
"                background: #EFEFEF;\n"
"                border: 0 solid #EFEFEF;\n"
"                border-radius: 0\n"
"            }\n"
"            input[type=range]::-ms-fill-upper {\n"
"                background: #EFEFEF;\n"
"                border: 0 solid #EFEFEF;\n"
"                border-radius: 0\n"
"            }\n"
"            input[type=range]::-ms-thumb {\n"
"                border: 1px solid rgba(0,0,30,0);\n"
"                height: 22px;\n"
"                width: 22px;\n"
"                border-radius: 50px;\n"
"                background: #ff3034;\n"
"                cursor: pointer;\n"
"                height: 2px\n"
"            }\n"
"            input[type=range]:focus::-ms-fill-lower {\n"
"                background: #EFEFEF\n"
"            }\n"
"            input[type=range]:focus::-ms-fill-upper {\n"
"                background: #363636\n"
"            }\n"
"            .switch {\n"
"                display: block;\n"
"                position: relative;\n"
"                line-height: 22px;\n"
"                font-size: 16px;\n"
"                height: 22px\n"
"            }\n"
"            .switch input {\n"
"                outline: 0;\n"
"                opacity: 0;\n"
"                width: 0;\n"
"                height: 0\n"
"            }\n"
"            .slider {\n"
"                width: 50px;\n"
"                height: 22px;\n"
"                border-radius: 22px;\n"
"                cursor: pointer;\n"
"                background-color: grey\n"
"            }\n"
"            .slider,.slider:before {\n"
"                display: inline-block;\n"
"                transition: .4s\n"
"            }\n"
"            .slider:before {\n"
"                position: relative;\n"
"                content: \"\";\n"
"                border-radius: 50%;\n"
"                height: 16px;\n"
"                width: 16px;\n"
"                left: 4px;\n"
"                top: 3px;\n"
"                background-color: #fff\n"
"            }\n"
"            input:checked+.slider {\n"
"                background-color: #ff3034\n"
"            }\n"
"            input:checked+.slider:before {\n"
"                -webkit-transform: translateX(26px);\n"
"                transform: translateX(26px)\n"
"            }\n"
"            select {\n"
"                border: 1px solid #363636;\n"
"                font-size: 14px;\n"
"                height: 22px;\n"
"                outline: 0;\n"
"                border-radius: 5px\n"
"            }\n"
"            .image-container {\n"
"                position: relative;\n"
"                min-width: 160px\n"
"            }\n"
"            .close {\n"
"                position: absolute;\n"
"                right: 5px;\n"
"                top: 5px;\n"
"                background: #ff3034;\n"
"                width: 16px;\n"
"                height: 16px;\n"
"                border-radius: 100px;\n"
"                color: #fff;\n"
"                text-align: center;\n"
"                line-height: 18px;\n"
"                cursor: pointer\n"
"            }\n"
"            .hidden {\n"
"                display: none\n"
"            }\n"
"    .checkbox {\n"
"     position: absolute;\n"
"     z-index: -1;\n"
"     opacity: 0;\n"
"     margin: 10px 0 0 20px;\n"
"   }\n"
"   .checkbox + label {\n"
"     position: relative;\n"
"     padding: 0 0 0 60px;\n"
"     cursor: pointer;\n"
"   }\n"
"   .checkbox + label:before {\n"
"     content: '';\n"
"     position: absolute;\n"
"     top: -4px;\n"
"     left: 0;\n"
"     width: 50px;\n"
"     height: 26px;\n"
"     border-radius: 13px;\n"
"     background: #CDD1DA;\n"
"     box-shadow: inset 0 2px 3px rgba(0,0,0,.2);\n"
"     transition: .2s;\n"
"   }\n"
"   .checkbox + label:after {\n"
"     content: '';\n"
"     position: absolute;\n"
"     top: -2px;\n"
"     left: 2px;\n"
"     width: 22px;\n"
"     height: 22px;\n"
"     border-radius: 10px;\n"
"     background: #FFF;\n"
"     box-shadow: 0 2px 5px rgba(0,0,0,.3);\n"
"     transition: .2s;\n"
"   }\n"
"   .checkbox:checked + label:before {\n"
"     background: #9FD468;\n"
"   }\n"
"   .checkbox:checked + label:after {\n"
"     left: 26px;\n"
"   }\n"
"   .checkbox:focus + label:before {\n"
"     box-shadow: inset 0 2px 3px rgba(0,0,0,.2), 0 0 0 3px rgba(255,255,0,.7);\n"
"   }\n"
"    </style>\n"
"</head>\n"
"<body>\n"
"    <section class=\"main\">\n"
"        <div id=\"logo\">\n"
"            <label for=\"nav-toggle-cb\" id=\"nav-toggle\">☰&nbsp;&nbsp;Thermostat</label>\n"
"        </div>\n"
"        <div id=\"content\">\n"
"            <div id=\"sidebar\">\n"
"                <input type=\"checkbox\" id=\"nav-toggle-cb\" checked=\"checked\">\n"
"                <nav id=\"menu\">\n"
"               <div class=\"input-group\" id=\"temp-group\">\n"
"                           \n"
"              <input type=\"text\" id=\"temp\"  class=\"default-action\" >\n"
"              <label for=\"temp\">Themperature</label>\n"
"                        </div>\n"
"                       \n"
"               <div class=\"input-group\" id=\"hum-group\">\n"
"                           \n"
"              <input type=\"text\" id=\"hum\"  class=\"default-action\" >\n"
"              <label for=\"hum\">Humidity</label>\n"
"                        </div>\n"
"                       \n"
"                </nav>\n"
"            </div>\n"
"        </div>\n"
"\t\t<div id=\"chart-temp\">\n"
"\t\t</div>\n"
"    </section>\n"
"    <script>\n"
"\tvar jsontest=JSON.parse('[{\"t\":20,\"h\":50,\"p\":1000,\"tm\":1611052483},{\"t\":20,\"h\":50,\"p\":1000,\"tm\":1611052593}]');\n"
"\n"
"document.addEventListener('DOMContentLoaded', function (event) {\n"
"    var baseHost = document.location.origin;\n"
"  \n"
"\t\tfunction transformData(json){\n"
"\t\tvar dt={};\n"
"\t\t  dt.temp={};\n"
"\t\t  dt.hum={};\n"
"\t\t  dt.temp.x=[];\n"
"\t\t  dt.temp.y=[];\n"
"\t\t  dt.temp.type=\"scatter\";\n"
"\t\t  dt.temp.name=\"Themperature\";\n"
"\t\t  dt.hum.x=[];\n"
"\t\t  dt.hum.y=[];\n"
"\t\t  dt.hum.type=\"scatter\";\n"
"\t\t  dt.hum.name=\"Humidity\";\n"
"\t\t  json.map(function(currentValue, index, arr){\n"
"\t\t\t\tvar mdt=new Date(currentValue.tm*1000);\n"
"\t\t\t\tdt.temp.y.push(currentValue.t);\n"
"\t\t\t\tdt.temp.x.push(mdt.toISOString());\n"
"\t\t\t\tdt.hum.y.push(currentValue.h);\n"
"\t\t\t\tdt.hum.x.push(mdt.toISOString());\n"
"\t\t\t\t});\n"
"\t\treturn  dt;//{s:1,i:index,v:currentValue};\n"
"\n"
"\t}\n"
"\tfunction drawChart(){\n"
"\t\n"
"\t\tconst query = `${baseHost}/history.json`;\n"
"\t\tfetch(query)\n"
"\t\t.then(response => response.json())\n"
"\t\t.then(json => {\n"
"\t\t\tvar transformed=transformData(json);\n"
"\t\t\tvar data = [transformed.temp, transformed.hum];\n"
"\t\t\tdrawChartData(data);\t\n"
"\t\t})\n"
"\t\t//var test=transformData(jsontest);\n"
"\n"
"\n"
"\t\t//var data = [test.temp, test.hum];\n"
"\n"
"\t\t//drawChartData(data);\t\n"
"\n"
"\t}\n"
"\tfunction drawChartData(data){\n"
"\t\tPlotly.newPlot('chart-temp', data);\n"
"\t}\n"
"  function updateConfig (el,proto_val) {\n"
"      let value;\n"
"  \n"
"    switch (el.type) {\n"
"     case 'input':\n"
"            value = el.value;\n"
"            break;\n"
"     case 'range':\n"
"            value = el.value;\n"
"            break;\n"
"   case 'checkbox':\n"
"     value=el.checked;\n"
"     break;\n"
"      case 'button':\n"
"        case 'submit':\n"
"            if (proto_val) {\n"
"                value = proto_val;\n"
"            } else {\n"
"                value = '1';\n"
"            }\n"
"            break;\n"
"        default:\n"
"            return;\n"
"      };\n"
"      const query = `${baseHost}/set?var=${el.id}&val=${value}`;\n"
" console.log(query);\n"
"    fetch(query)\n"
"      .then(response => {\n"
"        console.log(`request to ${query} finished, status: ${response.status}`)\n"
"      })\n"
"    };\n"
" document\n"
"    .querySelectorAll('.default-action')\n"
"    .forEach(el => {\n"
"      el.onchange = () => updateConfig(el)\n"
"    });\n"
" \n"
"      drawChart();\n"
" var tm=500;\n"
"  document\n"
"    .querySelectorAll('.default-action')\n"
"    .forEach(el => {\n"
"      el.onchange = () => updateConfig(el);\n"
"    })\n"
"  document\n"
"    .querySelectorAll('.default-action')\n"
"    .forEach(el => {\n"
"\tfunction dofetch(el){\n"
"\tconst query = `${baseHost}/get?var=${el.id}`;\n"
"\t\tfetch(query)\n"
"\t\t.then(response => response.text())\n"
"\t.then(val => {\n"
"\t\tel.value=val;\n"
"\n"
"   \n"
"   })\n"
"   }\n"
"   setTimeout(dofetch,tm,el); \n"
"\ttm+=1000;\n"
"    })\n"
"})\n"
"    </script>\n"
"</body>\n"
"</html>\n"
"";
