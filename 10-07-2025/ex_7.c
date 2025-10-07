/*

7) Leia duas matrizes 4x4 e escreva uma terceira matriz com os
maiores valores de cada posição das matrizes lidas. Ao final,
exiba a matriz resultante.

*/
#include <stdio.h>
#define LIN 4
#define COL 4


int main()
{
    int matriz1[LIN][COL], matriz2[LIN][COL], matriz_resultante[LIN][COL];
    int i, j;

    printf("Digite os elementos da primeira matriz %dx%d:\n", LIN, COL);

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz %dx%d:\n", LIN, COL);

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (matriz1[i][j] > matriz2[i][j])
            {
                matriz_resultante[i][j] = matriz1[i][j];
            }
            else
            {
                matriz_resultante[i][j] = matriz2[i][j];
            }
        }
    }

    printf("\nMatriz Resultante com os maiores valores de cada posição:\n");

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%d\t", matriz_resultante[i][j]);
        }
        printf("\n");
    }

    return 0;
}



