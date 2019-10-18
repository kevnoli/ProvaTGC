#include <stdio.h>

int main()
{
    int x[] = {0,1};
    for(int i = 0; i < 5; i++)
        printf("%d\n",x[i]); //vai imprimir lixo da memória

    return 0;
}