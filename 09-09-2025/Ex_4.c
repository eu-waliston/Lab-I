/*

4) Leia um valor inteiro n e verifique se este valor é primo. Se não for,
deve ser apresentada a lista dos divisores de n.

*/

#include <stdio.h>

int main()
{
    int n, i, divisores = 0;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    printf("Divisores de %d: ", n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            divisores++;
        }
    }

    if (divisores == 2)
    {
        printf("\n%d é um número primo.\n", n);
    }
    else
    {
        printf("\n%d não é um número primo.\n", n);
    }

    return 0;
}