var x = 10;
function f(){
 return x;
}
function g(){
 var x = 20;
 return f();
}

console.log(g());
