#include <stdio.h>
int x = 0;

static void efeito()
{
    if(x < 2)
		printf("Olá");
	x++;    
}

int main()
{
    printf("1: ");
    efeito();
    printf("\n2: ");
    efeito();
    printf("\n3: ");
    efeito();
    printf("\n4: ");
    efeito();
    
    return 0;
}

