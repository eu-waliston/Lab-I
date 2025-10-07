/*

6) Leia um vetor de 3 elementos e uma matriz 3x3. A seguir, o
programa deve multiplicar a primeira coluna da matriz pelo
primeiro elemento do vetor, a segunda coluna pelo segundo
elemento e a terceira coluna pelo terceiro elemento. Ao final,
imprima a matriz resultante.

*/

#include <stdio.h>
#define LIN 3
#define COL 3

int main()
{
    int vetor[LIN], matriz[LIN][COL];
    int i, j;

    printf("Digite os elementos do vetor de %d elementos:\n", LIN);

    for (i = 0; i < LIN; i++)
    {
        printf("Elemento [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Digite os elementos da matriz %dx%d:\n", LIN, COL);

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (j = 0; j < COL; j++)
    {
        for (i = 0; i < LIN; i++)
        {
            matriz[i][j] *= vetor[j];
        }
    }

    printf("\nMatriz Resultante:\n");

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

