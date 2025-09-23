#include <stdio.h>
int main()
{
    int num, cont = 0;

    do
    {
        printf("digite valor inteiro diferente de zero: \n");
        scanf("%d", &num);

        if(num < 0) {
            cont++;
        }
    } while (num != 0);

    printf("quantidade de Neros negativos = %d\n", cont);
    
    return 0;
}