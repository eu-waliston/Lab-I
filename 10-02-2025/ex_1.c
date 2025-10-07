/*
1) Leia valores para um vetor de 10 elementos. A seguir, leia um valor e
imprima o número de ocorrências desse valor no vetor.
*/
#include <stdio.h>

#define TAM 10

int main(void) {
    int vetor[TAM], valor, ocorrencias = 0;

    printf("Digite %d valores inteiros:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite um valor para buscar no vetor: ");
    scanf("%d", &valor);

    for (int i = 0; i < TAM; i++) {
        if (vetor[i] == valor) {
            ocorrencias++;
        }
    }

    printf("O valor %d ocorre %d vezes no vetor.\n", valor, ocorrencias);

    return 0;
}