/*
2) Leia um vetor de reais (positivos ou nulos) e o escreva. A seguir,
substitua os valores iguais a zero por -99 e escreva novamente o vetor.
*/

#include <stdio.h>
#define TAM 10

int main(void) {
    float vetor[TAM];

    printf("Digite %d valores reais (positivos ou nulos):\n", TAM);
    for (int i = 0; i < TAM; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    printf("\nVetor original:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");

    for (int i = 0; i < TAM; i++) {
        if (vetor[i] == 0) {
            vetor[i] = -99;
        }
    }

    printf("\nVetor modificado (zeros substituídos por -99):\n");
    for (int i = 0; i < TAM; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");

    return 0;
}

