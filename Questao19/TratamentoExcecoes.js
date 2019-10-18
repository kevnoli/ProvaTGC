var num = 10;
for(let i = 3;i > -1; i--){
 try {
  num.toPrecision(i);
 }
 catch(err) {
  console.log(err.name);
 }
 finally {
  console.log("Fim da iteração");
 }
}