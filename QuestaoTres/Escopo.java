public class Escopo{
 static int x = 10;
 public static void main(String[]args){
  System.out.println(g());
 }
 public static int f(){
  return x;
 }
 public static int g(){
  int x = 20;
  return f();
 }
}
