/*

2) leia valores para uma matriz inteira (5, 5) e imprima toda a
matriz e uma outra matriz formada pelos números que se
encontram em posições cujo índice da linha mais o da coluna
formam um número par.

*/

#include <stdio.h>
#define LIN 5
#define COL 5

int main()
{
    int matriz[LIN][COL], matriz_par[LIN][COL];
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

    printf("\nMatriz Original:\n");

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if ((i + j) % 2 == 0)
            {
                matriz_par[i][j] = matriz[i][j];
            }
            else
            {
                matriz_par[i][j] = 0;
            }
        }
    }

    printf("\nMatriz com elementos em posições onde a soma dos índices é par:\n");

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%d\t", matriz_par[i][j]);
        }
        printf("\n");
    }

    return 0;
}

