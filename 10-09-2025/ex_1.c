/*
1. Faça um programa que leia um vetor A de 100 posições. Em seguida, compacte o vetor, retirando
os valores nulos e negativos. Coloque o resultado no vetor B.
*/

#include <stdio.h>
#define TAM 100

int main()
{
    int A[TAM], B[TAM];
    int i, j = 0;

    printf("Digite os elementos do vetor A (100 posicoes):\n");

    for (i = 0; i < TAM; i++)
    {
        printf("Elemento [%d]: ", i);
        scanf("%d", &A[i]);
    }

    for (i = 0; i < TAM; i++)
    {
        if (A[i] > 0)
        {
            B[j] = A[i];
            j++;
        }
    }

    printf("\nVetor B (compactado, sem valores nulos e negativos):\n");

    for (i = 0; i < j; i++)
    {
        printf("Elemento [%d]: %d\n", i, B[i]);
    }

    return 0;
}
