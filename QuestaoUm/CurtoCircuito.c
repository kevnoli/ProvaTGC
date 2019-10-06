#include <stdio.h>

int main()
{
 printf("Bitwise OU\n");
 int x = 0;
 for(int i = 0; i < 5; i++){
  if((1==1) | (x++>3))
   printf("x = %d\n", x);
 }
 printf("\nOU\n");
 x = 0;
 for(int i = 0; i < 5; i++){
  if((1==1) || (x++>3))
   printf("x = %d\n", x);
 }
}

