/*6) Leia 2 vetores A e B de tamanho 10 e os escreva. Crie, a seguir, um
vetor C de 20 posições, que contenha os elementos dos vetores A e B
em ordem decrescente.*/

#include <stdio.h>
#define TAM 10
#define TAM_C 20

int main(void) {
    int A[TAM], B[TAM], C[TAM_C];
    int i, j, k;

    printf("Digite %d valores inteiros para o vetor A:\n", TAM);
    for (i = 0; i < TAM; i++) {
        printf("A[%d]: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("Digite %d valores inteiros para o vetor B:\n", TAM);
    for (i = 0; i < TAM; i++) {
        printf("B[%d]: ", i + 1);
        scanf("%d", &B[i]);
    }

    // Exibir os vetores A e B
    printf("\nVetor A:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("\nVetor B:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    // Combinar os vetores A e B em C
    for (i = 0; i < TAM; i++) {
        C[i] = A[i];
        C[i + TAM] = B[i];
    }

    // Ordenar o vetor C em ordem decrescente (Bubble Sort)
    for (i = 0; i < TAM_C - 1; i++) {
        for (j = 0; j < TAM_C - 1 - i; j++) {
            if (C[j] < C[j + 1]) {
                int temp = C[j];
                C[j] = C[j + 1];
                C[j + 1] = temp;
            }
        }
    }

    // Exibir o vetor C ordenado
    printf("\nVetor C em ordem decrescente:\n");
    for (i = 0; i < TAM_C; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
