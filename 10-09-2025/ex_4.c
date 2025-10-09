/*
4. Faça um programa que leia um vetor de 10 posições. A seguir, conte e escreva quantos valores
pares ele possui.
*/

#include <stdio.h>
#define TAM 10

int main()
{
    int A[TAM], i, pares;

    printf("Digite 10 numeros inteiros:\n");

    for (i = 0; i < TAM; i++)
    {
        printf("Numero [%d]: ", i);
        scanf("%d", &A[i]);
    }

    for (i = 1; i < TAM; i++)
    {
        if (A[i] % 2 != 0) {
            pares = A[i]; 
        }
    }

     printf("\nValores Pares: %d\n", pares);

    return 0;
}