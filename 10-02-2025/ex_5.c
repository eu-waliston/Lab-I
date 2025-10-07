/*
5) Leia um vetor de 10 posições e mostre-o. A seguir, troque o primeiro
elemento com o último, o segundo com o penúltimo, o terceiro com o
antepenúltimo, e assim sucessivamente. Mostre o vetor após a troca.
*/
#include <stdio.h>
#define TAM 10

int main(void) {
    int vetor[TAM];

    printf("Digite %d valores inteiros:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor original:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Troca os elementos
    for (int i = 0; i < TAM / 2; i++) {
        int temp = vetor[i];
        vetor[i] = vetor[TAM - 1 - i];
        vetor[TAM - 1 - i] = temp;
    }

    printf("\nVetor após a troca:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

