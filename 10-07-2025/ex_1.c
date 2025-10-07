/*
1) leia valores para uma matriz inteira (10,10) e escreva todos os
elementos exceto os elementos da diagonal secundária.
*/

#include <stdio.h>
#define LIN 10
#define COL 10
#define ULT LIN - 1
#define ULT_C COL - 1
#define MEIO LIN / 2
#define MEIO_C COL / 2

int main()
{
    int matriz[LIN][COL];
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

    printf("\nMatriz sem a diagonal secundária:\n");

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (j != ULT_C - i)
            {
                printf("%d\t", matriz[i][j]);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }

    return 0;
}

