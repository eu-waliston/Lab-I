/*

1) Leia uma quantidade não determinada de valores
positivos, calcule e imprima a soma dos mesmos.
Usar um valor negativo como marca de parada.

*/

#include <stdio.h>

int main()
{
    int num, soma = 0;

    do
    {
        printf("digite valor inteiro positivo (negativo para parar): \n");
        scanf("%d", &num);
        if (num > 0)
        {
            soma += num;
        }
    } while (num >= 0);

    printf("soma dos valores positivos = %d\n", soma);

    return 0;
}