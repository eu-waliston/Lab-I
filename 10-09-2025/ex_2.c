/*
2. Faça um programa que leia 20 números inteiros e armazene-os em um vetor. A seguir, imprima-o
na ordem inversa a da leitura.
*/

#include <stdio.h>
#define TAM 20

int main()
{
    int A[TAM];
    int i;

    printf("Digite 20 numeros inteiros:\n");

    for (i = 0; i < TAM; i++)
    {
        printf("Numero [%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("\nVetor na ordem inversa:\n");

    for (i = TAM - 1; i >= 0; i--)
    {
        printf("Numero [%d]: %d\n", i, A[i]);
    }

    return 0;
}