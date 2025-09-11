/*

6) Gere e imprima os N primeiros termos da série de Fibonacci, sendo
N um valor fornecido pelo usuário. Obs.: os dois primeiros termos
desta série são 0 e 1. Os demais são gerados a partir da soma dos
anteriores.

Ex.: 0+1 = 1 → terceiro termo; 1+1 = 2 → quarto termo;
1+2=3→ quinto termo; ...

*/

#include <stdio.h>

int main()
{
    int n, i;
    unsigned long long int t1 = 0, t2 = 1, proximoTermo;

    printf("Digite a quantidade de termos da série de Fibonacci que deseja ver: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Por favor, digite um número inteiro positivo.\n");
    }
    else
    {
        printf("Série de Fibonacci:\n");

        for (i = 1; i <= n; ++i)
        {
            printf("%llu ", t1);
            proximoTermo = t1 + t2;
            t1 = t2;
            t2 = proximoTermo;
        }
        printf("\n");
    }

    return 0;
}