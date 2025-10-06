/*


2) Leia uma quantidade não determinada de valores
positivos, calcule e imprima o produto dos mesmos e a
quantidade de valores multiplicados. Usar um valor
negativo menor ou igual a zero como marca de parada.

*/

#include <stdio.h>

int main()
{
    int num, cont = 0;
    long long produto = 1;

    do
    {
        printf("digite valor inteiro positivo (ou negativo para sair): \n");
        scanf("%d", &num);

        if(num > 0) {
            produto *= num;
            cont++;
        }
    } while (num > 0);

    if (cont > 0) {
        printf("produto dos valores = %lld\n", produto);
        printf("quantidade de valores multiplicados = %d\n", cont);
    } else {
        printf("Nenhum valor positivo foi inserido.\n");
    }
    
    return 0;
}