#include <stdio.h>

int x = 10;

int f()
{
 return x;
}

int g()
{
 int x = 20;
 return f();
}

int main()
{
 printf("x = %d\n", g());
 /*Imprime 10, porque x não está definido em f
  * e o nível acima de f é o global*/
}
