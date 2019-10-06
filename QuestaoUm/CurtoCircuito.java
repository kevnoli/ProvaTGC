public class CurtoCircuito{
 public static void main (String[]args){
 System.out.println("Bitwise OU");
 int x = 0;
  for(int i = 0; i < 5; i++){
   if((1==1) | (x++>3))
    System.out.println("x = " + x);
  }
  System.out.println("\nOU");
  x = 0;
  for(int i = 0; i < 5; i++){
   if((1==1) || (x++>3))
    System.out.println("x = " + x);
  }
 }
}

