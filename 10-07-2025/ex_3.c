/*

3) leia valores inteiros para uma matriz (2,3), gere e imprima a
sua transposta. A matriz transposta é gerada trocando linha
por coluna.

*/

#include <stdio.h>

#define LIN 2
#define COL 3
#define LIN_T COL
#define COL_T LIN

int main()
{
    int matriz[LIN][COL], transposta[LIN_T][COL_T];
    int i, j;

    printf("Digite os elementos da matriz %dx%d:\n", LIN, COL);

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            transposta[j][i] = matriz[i][j];
        }
    }

    printf("\nMatriz Original:\n");

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Transposta:\n");

    for (i = 0; i < LIN_T; i++)
    {
        for (j = 0; j < COL_T; j++)
        {
            printf("%d\t", transposta[i][j]);
        }
        printf("\n");   
    }   
    return 0;
}


