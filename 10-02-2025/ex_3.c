/*
3) Leia um vetor de inteiros e o escreva. A seguir, apresente o menor
valor, juntamente com sua posição no vetor.
*/

#include <stdio.h>
#define TAM 10

int main(void) {
    int vetor[TAM];
    int menor, posicao;

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

    menor = vetor[0];
    posicao = 0;
    for (int i = 1; i < TAM; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
            posicao = i;
        }
    }

    printf("\nMenor valor: %d\n", menor);
    printf("Posição do menor valor no vetor: %d\n", posicao);

    return 0;
}

