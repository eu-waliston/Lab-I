/*

2) Faça um programa que leia um número indeterminado de
duplas m e n, todos inteiros e positivos, uma dupla de cada
vez. Para cada dupla lida, o programa deve chamar uma
função que receba m e n e calcule a soma dos n inteiros
consecutivos a partir de m inclusive. Ao final, a função deve
retornar o valor da soma para a função main, que irá
imprimi-la. (ex.: para m = 2 e n = 4, a função irá calcular
2+3+4+5)

*/

#include <stdio.h>

void soma_consecutivos()
{
    int m, n, soma;

    printf("Digite dois numeros inteiros e positivos (m n): ");
    scanf("%d %d", &m, &n);

    while (m <= 0 || n <= 0)
    {
        break;
    }

    soma = 0;
    for (int i = 0; i < n; i++)
    {
        soma += (m + i);
    }

    printf("A soma dos valores consecutuvios é %d", soma);
}

int main()
{
    soma_consecutivos();
    return 0;
}
