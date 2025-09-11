/*

7) Leia 2 números inteiros (tab e limite) e imprima a tabuada de tab
desde 1 até limite. 

*/

#include <stdio.h>

int main()
{
    int tab, limite, i;

    printf("Digite o valor da tabuada: ");
    scanf("%d", &tab);

    printf("Digite o limite: ");
    scanf("%d", &limite);

    for (i = 1; i <= limite; i++)
    {
        printf("%d x %d = %d\n", tab, i, tab * i);
    }

    return 0;
}