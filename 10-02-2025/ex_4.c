/*
4) Leia um conjunto de 50 valores, coloque-os em 2 vetores
classificando-os como pares ou ímpares. Imprimir os 2 vetores.
*/

#include <stdio.h>
#define TAM 50
#define MAX_PARES TAM
#define MAX_IMPARES TAM

int main(void) {
    int vetor[TAM];
    int pares[MAX_PARES], impares[MAX_IMPARES];
    int count_pares = 0, count_impares = 0;

    printf("Digite %d valores inteiros:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < TAM; i++) {
        if (vetor[i] % 2 == 0) {
            pares[count_pares++] = vetor[i];
        } else {
            impares[count_impares++] = vetor[i];
        }
    }

    printf("\nVetor de números pares:\n");
    for (int i = 0; i < count_pares; i++) {
        printf("%d ", pares[i]);
    }
    printf("\n");

    printf("\nVetor de números ímpares:\n");
    for (int i = 0; i < count_impares; i++) {
        printf("%d ", impares[i]);
    }
    printf("\n");

    return 0;
}

