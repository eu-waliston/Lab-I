/*

10 -

Leia um número inteiro e imprima o número invertido (ex -: 123 → 321) -

*/

#include <stdio.h>

int main()
{
    int num, invertido = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    while (num != 0)
    {
        int digito = num % 10;
        invertido = invertido * 10 + digito;
        num /= 10;
    }

    printf("Numero invertido: %d\n", invertido);

    return 0;
}