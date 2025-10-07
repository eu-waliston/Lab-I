/*

4) leia valores para uma matriz (2,2), calcule e imprima o seu
determinante. O determinante de uma matriz é dado pelo
produto dos elementos da diagonal principal subtraído do
produto dos elementos da diagonal secundária.

*/

#include <stdio.h>

#define LIN 2
#define COL 2

int main()
{
    int matriz[LIN][COL];
    int i, j;
    int determinante;

    printf("Digite os elementos da matriz %dx%d:\n", LIN, COL);

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    determinante = (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);

    printf("\nMatriz Original:\n");

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nDeterminante da matriz: %d\n", determinante);

    return 0;
}


