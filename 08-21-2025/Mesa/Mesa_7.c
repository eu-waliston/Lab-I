#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;

    x = 10;
    y = 20;
    z = x - y;
    
    printf("Resultado 1 = %d\n", x);
    z = y + x;
    printf("Resultado 2 = %d\n", y);
    z = z / (x / 5);
    printf("Resultado 3 = %d\n", z);
    return (0);
}