/*
3. Faça um programa que leia um vetor de 30 posições e calcule a diferença entre o maior e o menor
valor do vetor.
*/

#include <stdio.h>
#define TAM 30

int main()
{
    int A[TAM];
    int i;
    int maior, menor;

    printf("Digite 30 numeros inteiros:\n" );

    for (i = 0; i < TAM; i++)
    {
        printf("Numero [%d]: ", i);
        scanf("%d", &A[i]);
    }

    maior = A[0];
    menor = A[0];

    for (i = 1; i < TAM; i++)
    {
        if (A[i] > maior)
        {
            maior = A[i];
        }
        if (A[i] < menor)
        {
            menor = A[i];
        }
    }

    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Diferenca entre maior e menor: %d\n", maior - menor);

    return 0;
}
