/*
6. Realize a troca dos valores das variáveis do exercício anterior usando apenas duas
variáveis.
*/

/*
5. Faça um programa que leia 2 valores inteiros e os armazene nas variáveis a e b,
imprimindo-as. A seguir, realize a troca dos valores de modo que o valor contido
em a passe para b e o valor de b passe para a. Ao final, imprima os valores de a e b.
*/

#include <stdio.h>

int main()
{
    int a, b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("RESULTADO [antes da troca]  A: %d, B: %d \n\n", a, b);

    // troca sem variável auxiliar
    a = a + b;
    b = a - b;
    a = a - b;

    printf("RESULTADO [depois da troca]  A: %d, B: %d \n", a, b);
    return 0;
}

