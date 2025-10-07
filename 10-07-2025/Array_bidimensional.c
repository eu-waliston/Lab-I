#include <stdio.h>

#define LINHA 2
#define COLUNA 3

int main() {
    int i, j;
    int matriz[LINHA][COLUNA];

    for (i = 0; i <LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i=0; i < LINHA; i++) {
        for(j=0; j < COLUNA; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}