/*

5) Leia e armazene os elementos de uma matriz inteira de
tamanho 5x5 e a imprima. A seguir, troque:
- a segunda linha pela quinta e imprima a matriz;
- a terceira coluna pela quinta e imprima a matriz;
- a diagonal principal pela secundária e imprima a matriz.

*/

#include <stdio.h>

#define LIN 5
#define COL 5
#define ULT LIN - 1
#define ULT_C COL - 1
#define SEG LIN - 2
#define SEG_C COL - 2
#define TER LIN - 3
#define TER_C COL - 3
#define PEN LIN - 4
#define PEN_C COL - 4

int main()
{
    int matriz[LIN][COL];
    int i, j, temp;

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

    for (j = 0; j < COL; j++)
    {
        temp = matriz[SEG][j];
        matriz[SEG][j] = matriz[PEN][j];
        matriz[PEN][j] = temp;
    }

    printf("\nMatriz após trocar a segunda linha pela quinta:\n");

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
        temp = matriz[i][TER_C];
        matriz[i][TER_C] = matriz[i][PEN_C];
        matriz[i][PEN_C] = temp;
    }

    printf("\nMatriz após trocar a terceira coluna pela quinta:\n");

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
        temp = matriz[i][i];
        matriz
            [i][i] = matriz[i][ULT_C - i];
        matriz[i][ULT_C - i] = temp;
    }   
    printf("\nMatriz após trocar a diagonal principal pela secundária:\n");
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

