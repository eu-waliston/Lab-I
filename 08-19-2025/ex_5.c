/*
5. Faça um programa que leia 2 valores inteiros e os armazene nas variáveis a e b,
imprimindo-as. A seguir, realize a troca dos valores de modo que o valor contido
em a passe para b e o valor de b passe para a. Ao final, imprima os valores de a e b.
*/

#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    c = a;
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("RESULTADOS[antes da troca] \n");
    printf("A: %d, B: %d \n", a, b);

    d = b;
    a = c;
    printf("RESULTADOS[depois da troca] \n");
    printf("A: %d, B: %d \n", d, c);
    return 0;
}
