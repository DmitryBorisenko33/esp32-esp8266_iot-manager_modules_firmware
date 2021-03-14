var app=function(){"use strict";function t(){}function e(t){return t()}function n(){return Object.create(null)}function r(t){t.forEach(e)}function a(t){return"function"==typeof t}function o(t,e){return t!=t?e==e:t!==e||t&&"object"==typeof t||"function"==typeof t}function c(t,e,n,r){if(t){const a=u(t,e,n,r);return t[0](a)}}function u(t,e,n,r){return t[1]&&r?function(t,e){for(const n in e)t[n]=e[n];return t}(n.ctx.slice(),t[1](r(e))):n.ctx}function s(t,e,n,r,a,o,c){const s=function(t,e,n,r){if(t[2]&&r){const a=t[2](r(n));if(void 0===e.dirty)return a;if("object"==typeof a){const t=[],n=Math.max(e.dirty.length,a.length);for(let r=0;r<n;r+=1)t[r]=e.dirty[r]|a[r];return t}return e.dirty|a}return e.dirty}(e,r,a,o);if(s){const a=u(e,n,r,c);t.p(a,s)}}function l(t,e){t.appendChild(e)}function i(t,e,n){t.insertBefore(e,n||null)}function p(t){t.parentNode.removeChild(t)}function f(t){return document.createElement(t)}function d(t){return document.createTextNode(t)}function h(){return d(" ")}function m(t,e,n,r){return t.addEventListener(e,n,r),()=>t.removeEventListener(e,n,r)}function $(t,e,n){null==n?t.removeAttribute(e):t.getAttribute(e)!==n&&t.setAttribute(e,n)}let b;function g(t){b=t}function x(){if(!b)throw new Error("Function called outside component initialization");return b}function v(t){return x().$$.context.get(t)}const w=[],y=[],_=[],k=[],E=Promise.resolve();let C=!1;function H(){C||(C=!0,E.then(A))}function S(){return H(),E}function O(t){_.push(t)}let T=!1;const M=new Set;function A(){if(!T){T=!0;do{for(let t=0;t<w.length;t+=1){const e=w[t];g(e),R(e.$$)}for(g(null),w.length=0;y.length;)y.pop()();for(let t=0;t<_.length;t+=1){const e=_[t];M.has(e)||(M.add(e),e())}_.length=0}while(w.length);for(;k.length;)k.pop()();C=!1,T=!1,M.clear()}}function R(t){if(null!==t.fragment){t.update(),r(t.before_update);const e=t.dirty;t.dirty=[-1],t.fragment&&t.fragment.p(t.ctx,e),t.after_update.forEach(O)}}const q=new Set;let F;function W(t,e){t&&t.i&&(q.delete(t),t.i(e))}function j(t,e,n,r){if(t&&t.o){if(q.has(t))return;q.add(t),F.c.push((()=>{q.delete(t),r&&(n&&t.d(1),r())})),t.o(e)}}function z(t){t&&t.c()}function L(t,n,o){const{fragment:c,on_mount:u,on_destroy:s,after_update:l}=t.$$;c&&c.m(n,o),O((()=>{const n=u.map(e).filter(a);s?s.push(...n):r(n),t.$$.on_mount=[]})),l.forEach(O)}function I(t,e){const n=t.$$;null!==n.fragment&&(r(n.on_destroy),n.fragment&&n.fragment.d(e),n.on_destroy=n.fragment=null,n.ctx=[])}function N(e,a,o,c,u,s,l=[-1]){const i=b;g(e);const f=e.$$={fragment:null,ctx:null,props:s,update:t,not_equal:u,bound:n(),on_mount:[],on_destroy:[],before_update:[],after_update:[],context:new Map(i?i.$$.context:[]),callbacks:n(),dirty:l,skip_bound:!1};let d=!1;if(f.ctx=o?o(e,a.props||{},((t,n,...r)=>{const a=r.length?r[0]:n;return f.ctx&&u(f.ctx[t],f.ctx[t]=a)&&(!f.skip_bound&&f.bound[t]&&f.bound[t](a),d&&function(t,e){-1===t.$$.dirty[0]&&(w.push(t),H(),t.$$.dirty.fill(0)),t.$$.dirty[e/31|0]|=1<<e%31}(e,t)),n})):[],f.update(),d=!0,r(f.before_update),f.fragment=!!c&&c(f.ctx),a.target){if(a.hydrate){const t=function(t){return Array.from(t.childNodes)}(a.target);f.fragment&&f.fragment.l(t),t.forEach(p)}else f.fragment&&f.fragment.c();a.intro&&W(e.$$.fragment),L(e,a.target,a.anchor),A()}g(i)}class Y{$destroy(){I(this,1),this.$destroy=t}$on(t,e){const n=this.$$.callbacks[t]||(this.$$.callbacks[t]=[]);return n.push(e),()=>{const t=n.indexOf(e);-1!==t&&n.splice(t,1)}}$set(t){var e;this.$$set&&(e=t,0!==Object.keys(e).length)&&(this.$$.skip_bound=!0,this.$$set(t),this.$$.skip_bound=!1)}}const K=[];function D(e,n=t){let r;const a=[];function c(t){if(o(e,t)&&(e=t,r)){const t=!K.length;for(let t=0;t<a.length;t+=1){const n=a[t];n[1](),K.push(n,e)}if(t){for(let t=0;t<K.length;t+=2)K[t][0](K[t+1]);K.length=0}}}return{set:c,update:function(t){c(t(e))},subscribe:function(o,u=t){const s=[o,u];return a.push(s),1===a.length&&(r=n(c)||t),o(e),()=>{const t=a.indexOf(s);-1!==t&&a.splice(t,1),0===a.length&&(r(),r=null)}}}}function G(t,e=!1){return(t=t.slice(t.startsWith("/#")?2:0,t.endsWith("/*")?-2:void 0)).startsWith("/")||(t="/"+t),"/"===t&&(t=""),e&&!t.endsWith("/")&&(t+="/"),t}function B(t,e,n){if(""===n)return t;if("/"===n[0])return n;let r=t=>t.split("/").filter((t=>""!==t)),a=r(t);return"/"+(e?r(e):[]).map(((t,e)=>a[e])).join("/")+"/"+n}function P(t,e,n,r){let a=[e,"data-"+e].reduce(((e,r)=>{let a=t.getAttribute(r);return n&&t.removeAttribute(r),null===a?e:a}),!1);return!r&&""===a||(a||r||!1)}function Q(t){let e=t.split("&").map((t=>t.split("="))).reduce(((t,e)=>{let n=e[0];if(!n)return t;let r=!(e.length>1)||e[e.length-1];return"string"==typeof r&&r.includes(",")&&(r=r.split(",")),void 0===t[n]?t[n]=[r]:t[n].push(r),t}),{});return Object.entries(e).reduce(((t,e)=>(t[e[0]]=e[1].length>1?e[1]:e[1][0],t)),{})}var Z,J,U={HISTORY:1,HASH:2,MEMORY:3,OFF:4,run:function(t,e,n,r){return 1===t?e&&e():2===t?n&&n():r&&r()},getDeafault:function(){return window&&"srcdoc"!==window.location.pathname?1:3}},V=function(){let t,e=U.getDeafault(),n=n=>t&&t(X(e));function r(t){t&&(e=t),window.onhashchange=window.onpopstate=J=null,e!==U.OFF&&U.run(e,(t=>window.onpopstate=n),(t=>window.onhashchange=n))&&n()}return{mode:t=>r(t),get:t=>X(e),go(t){(function(t,e){U.run(t,(t=>history.pushState({},"",e)),(t=>window.location.hash=e),(t=>J=e))})(e,t),n()},start(e){t=e,r()},stop(){t=null,r(U.OFF)}}}();function X(t){let e=Z,n=Z=U.run(t,(t=>window.location.pathname+window.location.search),(t=>String(window.location.hash.slice(1)||"/")),(t=>J||"/")),r=n.match(/^([^?#]+)(?:\?([^#]+))?(?:\#(.+))?$/);return{url:n,from:e,path:r[1]||"",query:Q(r[2]||""),hash:r[3]||""}}function tt(t){let e=v("tinro");e&&(e.exact||e.fallback)&&function(t){throw new Error("[Tinro] "+t)}(`${t.fallback?"<Route fallback>":`<Route path="${t.path}">`}  can't be inside ${e.fallback?"<Route fallback>":`<Route path="${e.path||"/"}"> with exact path`}`);let n=t.fallback?"fallbacks":"childs",r=D({}),a={router:{},exact:!1,pattern:null,meta:{},parent:e,fallback:t.fallback,redirect:!1,firstmatch:!1,breadcrumb:null,matched:!1,childs:new Set,activeChilds:new Set,fallbacks:new Set,update(t){a.exact=!t.path.endsWith("/*"),a.pattern=G(`${a.parent&&a.parent.pattern||""}${t.path}`),a.redirect=t.redirect,a.firstmatch=t.firstmatch,a.breadcrumb=t.breadcrumb,a.match()},register:()=>{if(a.parent)return a.parent[n].add(a),()=>{a.parent[n].delete(a),a.router.un&&a.router.un()}},show:()=>{t.onShow(),!a.fallback&&a.parent&&a.parent.activeChilds.add(a)},hide:()=>{t.onHide(),!a.fallback&&a.parent&&a.parent.activeChilds.delete(a)},match:async()=>{a.matched=!1;let{path:e,url:n,from:o,query:c}=a.router,u=function(t,e){t=G(t,!0),e=G(e,!0);let n=[],r={},a=!0,o=t.split("/").map((t=>t.startsWith(":")?(n.push(t.slice(1)),"([^\\/]+)"):t)).join("\\/"),c=e.match(new RegExp(`^${o}$`));return c||(a=!1,c=e.match(new RegExp(`^${o}`))),c?(n.forEach(((t,e)=>r[t]=c[e+1])),{exact:a,params:r,part:c[0].slice(0,-1)}):null}(a.pattern,e);if(!a.fallback&&u&&a.redirect&&(!a.exact||a.exact&&u.exact))return await S(),nt.goto(B(e,a.parent&&a.parent.pattern,a.redirect));if(a.meta=u&&{from:o,url:n,query:c,match:u.part,pattern:a.pattern,breadcrumbs:a.parent&&a.parent.meta&&a.parent.meta.breadcrumbs.slice()||[],params:u.params,subscribe:r.subscribe},a.breadcrumb&&a.meta&&a.meta.breadcrumbs.push({name:a.breadcrumb,path:u.part}),r.set(a.meta),!u||a.fallback||!(!a.exact||a.exact&&u.exact)||a.parent&&a.parent.firstmatch&&a.parent.matched?a.hide():(t.onMeta(a.meta),a.parent&&(a.parent.matched=!0),a.show()),await S(),u&&!a.fallback&&(a.childs.size>0&&0==a.activeChilds.size||0==a.childs.size&&a.fallbacks.size>0)){let t=a;for(;0==t.fallbacks.size;)if(t=t.parent,!t)return;t&&t.fallbacks.forEach((t=>{t.redirect?nt.goto(B("/",t.parent&&t.parent.pattern,t.redirect)):t.show()}))}}};return c="tinro",u=a,x().$$.context.set(c,u),o=()=>a.register(),x().$$.on_mount.push(o),a.router.un=nt.subscribe((t=>{a.router.path=t.path,a.router.url=t.url,a.router.query=t.query,a.router.from=t.from,null!==a.pattern&&a.match()})),a;var o,c,u}function et(){return v("tinro").meta}var nt=function(){let{subscribe:t}=D(V.get(),(t=>{V.start(t);let e=function(t){let e=e=>{let n=e.target.closest("a[href]"),r=n&&P(n,"target",!1,"_self"),a=n&&P(n,"tinro-ignore"),o=e.ctrlKey||e.metaKey||e.altKey||e.shiftKey;if("_self"==r&&!a&&!o&&n){let r=n.getAttribute("href").replace(/^\/#/,"");/^\/\/|^[a-zA-Z]+:/.test(r)||(e.preventDefault(),t(r.startsWith("/")?r:n.href.replace(window.location.origin,"")))}};return addEventListener("click",e),()=>removeEventListener("click",e)}(V.go);return()=>{V.stop(),e()}}));return{subscribe:t,goto:t=>V.go(t),params:rt,meta:et,useHashNavigation:t=>V.mode(t?U.HASH:U.HISTORY),mode:{hash:()=>V.mode(U.HASH),history:()=>V.mode(U.HISTORY),memory:()=>V.mode(U.MEMORY)}}}();function rt(){return v("tinro").meta.params}const at=t=>({params:2&t,meta:4&t}),ot=t=>({params:t[1],meta:t[2]});function ct(t){let e;const n=t[9].default,r=c(n,t,t[8],ot);return{c(){r&&r.c()},m(t,n){r&&r.m(t,n),e=!0},p(t,e){r&&r.p&&262&e&&s(r,n,t,t[8],e,at,ot)},i(t){e||(W(r,t),e=!0)},o(t){j(r,t),e=!1},d(t){r&&r.d(t)}}}function ut(t){let e,n,a=t[0]&&ct(t);return{c(){a&&a.c(),e=d("")},m(t,r){a&&a.m(t,r),i(t,e,r),n=!0},p(t,[n]){t[0]?a?(a.p(t,n),1&n&&W(a,1)):(a=ct(t),a.c(),W(a,1),a.m(e.parentNode,e)):a&&(F={r:0,c:[],p:F},j(a,1,1,(()=>{a=null})),F.r||r(F.c),F=F.p)},i(t){n||(W(a),n=!0)},o(t){j(a),n=!1},d(t){a&&a.d(t),t&&p(e)}}}function st(t,e,n){let{$$slots:r={},$$scope:a}=e,{path:o="/*"}=e,{fallback:c=!1}=e,{redirect:u=!1}=e,{firstmatch:s=!1}=e,{breadcrumb:l=null}=e,i=!1,p={},f={};const d=tt({fallback:c,onShow(){n(0,i=!0)},onHide(){n(0,i=!1)},onMeta(t){n(2,f=t),n(1,p=f.params)}});return t.$$set=t=>{"path"in t&&n(3,o=t.path),"fallback"in t&&n(4,c=t.fallback),"redirect"in t&&n(5,u=t.redirect),"firstmatch"in t&&n(6,s=t.firstmatch),"breadcrumb"in t&&n(7,l=t.breadcrumb),"$$scope"in t&&n(8,a=t.$$scope)},t.$$.update=()=>{232&t.$$.dirty&&d.update({path:o,redirect:u,firstmatch:s,breadcrumb:l})},[i,p,f,o,c,u,s,l,a,r]}class lt extends Y{constructor(t){super(),N(this,t,st,ut,o,{path:3,fallback:4,redirect:5,firstmatch:6,breadcrumb:7})}}const it=(()=>{const{subscribe:t,update:e}=D([]);let n=0,r={};return{subscribe:t,push:(t,a={})=>{const o={id:++n,msg:t,...r,...a,theme:{...r.theme,...a.theme}};return e((t=>o.reversed?[...t,o]:[o,...t])),n},pop:t=>{e((e=>t?e.filter((e=>e.id!==t)):e.splice(1)))},set:(t,n)=>{e((e=>{const r=e.findIndex((e=>e.id===t));return r>-1&&(e[r]={...e[r],...n}),e}))},_opts:(t={})=>(r={...r,...t,theme:{...r.theme,...t.theme}},r)}})();function pt(e){let n,a,o,c,u,s,d,b,g,x,v,w;return{c(){n=f("div"),a=f("h2"),a.textContent=`${mt}`,o=h(),c=f("button"),c.textContent="Get request",u=h(),s=f("button"),s.textContent="EMIT TOAST",d=h(),b=f("p"),b.textContent="Result:",g=h(),x=f("pre"),x.textContent=`${gt}`,$(c,"type","button"),$(s,"type","button"),$(n,"class","head svelte-8uxp1u")},m(t,r){i(t,n,r),l(n,a),l(n,o),l(n,c),l(n,u),l(n,s),l(n,d),l(n,b),l(n,g),l(n,x),v||(w=[m(c,"click",e[1]),m(s,"click",e[3])],v=!0)},p:t,d(t){t&&p(n),v=!1,r(w)}}}function ft(e){let n,r,a,o,u,d;const b=e[2].default,g=c(b,e,e[4],null),x=g||function(e){let n,r,a,o,c,u,s,d,b,g;return{c(){n=f("form"),r=f("div"),r.innerHTML='<div class="left-column svelte-8uxp1u"><label for="fname" class="svelte-8uxp1u">Название сети:</label></div> \n\t\t\t\t\t\t\t\t<div class="right-column svelte-8uxp1u"><input type="text" id="fname" name="fname" class="svelte-8uxp1u"/></div>',a=h(),o=f("div"),o.innerHTML='<div class="left-column svelte-8uxp1u"><label for="lname" class="svelte-8uxp1u">Пароль:</label></div> \n\t\t\t\t\t\t\t\t<div class="right-column svelte-8uxp1u"><input type="password" id="lname" name="lname" class="svelte-8uxp1u"/></div>',c=h(),u=f("div"),s=f("div"),d=f("button"),d.textContent="Сохранить",$(r,"class","row svelte-8uxp1u"),$(o,"class","row svelte-8uxp1u"),$(d,"type","button"),$(s,"class","center-column svelte-8uxp1u"),$(u,"class","row svelte-8uxp1u")},m(t,p){i(t,n,p),l(n,r),l(n,a),l(n,o),l(n,c),l(n,u),l(u,s),l(s,d),b||(g=m(d,"click",e[0]),b=!0)},p:t,d(t){t&&p(n),b=!1,g()}}}(e);return{c(){n=f("div"),r=f("h2"),r.textContent=`${$t}`,a=h(),o=f("div"),u=f("div"),x&&x.c(),$(n,"class","head svelte-8uxp1u"),$(u,"class","box svelte-8uxp1u"),$(o,"class","content svelte-8uxp1u")},m(t,e){i(t,n,e),l(n,r),i(t,a,e),i(t,o,e),l(o,u),x&&x.m(u,null),d=!0},p(t,e){g&&g.p&&16&e&&s(g,b,t,t[4],e,null,null)},i(t){d||(W(x,t),d=!0)},o(t){j(x,t),d=!1},d(t){t&&p(n),t&&p(a),t&&p(o),x&&x.d(t)}}}function dt(e){let n,r;return{c(){n=f("div"),r=f("h2"),r.textContent=`${bt}`,$(n,"class","head svelte-8uxp1u")},m(t,e){i(t,n,e),l(n,r)},p:t,d(t){t&&p(n)}}}function ht(t){let e,n,r,a,o,c,u,s,d,m,b,g,x,v,w,y,_,k,E,C,H,S;return _=new lt({props:{path:"/",$$slots:{default:[pt]},$$scope:{ctx:t}}}),E=new lt({props:{path:"/wifi",$$slots:{default:[ft]},$$scope:{ctx:t}}}),H=new lt({props:{path:"/mqtt",$$slots:{default:[dt]},$$scope:{ctx:t}}}),{c(){e=f("div"),n=f("input"),r=h(),a=f("label"),a.innerHTML='<span class="svelte-8uxp1u"></span>',o=h(),c=f("ul"),u=f("li"),s=f("a"),s.textContent=`${mt}`,d=h(),m=f("li"),b=f("a"),b.textContent=`${$t}`,g=h(),x=f("li"),v=f("a"),v.textContent=`${bt}`,w=h(),y=f("ul"),z(_.$$.fragment),k=h(),z(E.$$.fragment),C=h(),z(H.$$.fragment),$(n,"id","menu__toggle"),$(n,"type","checkbox"),$(n,"class","svelte-8uxp1u"),$(a,"class","menu__btn svelte-8uxp1u"),$(a,"for","menu__toggle"),$(s,"class","menu__item svelte-8uxp1u"),$(s,"href","/"),$(b,"class","menu__item svelte-8uxp1u"),$(b,"href","/wifi"),$(v,"class","menu__item svelte-8uxp1u"),$(v,"href","/mqtt"),$(c,"class","menu__box svelte-8uxp1u"),$(y,"class","menu__main svelte-8uxp1u"),$(e,"class","hamburger-menu")},m(t,p){i(t,e,p),l(e,n),l(e,r),l(e,a),l(e,o),l(e,c),l(c,u),l(u,s),l(c,d),l(c,m),l(m,b),l(c,g),l(c,x),l(x,v),l(e,w),l(e,y),L(_,y,null),l(y,k),L(E,y,null),l(y,C),L(H,y,null),S=!0},p(t,[e]){const n={};16&e&&(n.$$scope={dirty:e,ctx:t}),_.$set(n);const r={};16&e&&(r.$$scope={dirty:e,ctx:t}),E.$set(r);const a={};16&e&&(a.$$scope={dirty:e,ctx:t}),H.$set(a)},i(t){S||(W(_.$$.fragment,t),W(E.$$.fragment,t),W(H.$$.fragment,t),S=!0)},o(t){j(_.$$.fragment,t),j(E.$$.fragment,t),j(H.$$.fragment,t),S=!1},d(t){t&&p(e),I(_),I(E),I(H)}}}let mt="Устройство",$t="WiFi",bt="MQTT",gt=null;function xt(t,e,n){let{$$slots:r={},$$scope:a}=e,o="1";return t.$$set=t=>{"$$scope"in t&&n(4,a=t.$$scope)},[function(){console.log("лог",undefined)},async function(){"1"==o?o="0":"0"==o&&(o="1");let t=await fetch("http://192.168.88.16/set?order=btn640_"+o,{mode:"no-cors",method:"GET"});if(t.ok){let t=await response.text();alert("text "+t.slice(0,80)+"...")}else alert("status "+t.status)},r,()=>it.push("Hello world!"),a]}return new class extends Y{constructor(t){super(),N(this,t,xt,ht,o,{})}}({target:document.body,props:{name:"world"}})}();
//# sourceMappingURL=bundle.js.map
