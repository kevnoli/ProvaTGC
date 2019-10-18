#include <stdio.h>

int main()
{
    int overflow = 2147483647;
    printf("Overflow: %d\n", (overflow + 1));
    int underflow = -2147483648;
    printf("Underflow: %d\n", (underflow - 1));

    return 0;
}