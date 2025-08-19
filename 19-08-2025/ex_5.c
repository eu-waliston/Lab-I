/*
5. Faça um programa que leia 2 valores inteiros e os armazene nas variáveis a e b,
imprimindo-as. A seguir, realize a troca dos valores de modo que o valor contido
em a passe para b e o valor de b passe para a. Ao final, imprima os valores de a e b.
*/

#include <stdio.h>

int main() {
    int n1,n2,aux_1, aux_2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);

    printf("Digite o segundo valor: ");
    scanf("%d", &n2);

    printf("ANTES DA TROCA: \n");
    printf("N1: %d, N2: %d \n", n1, n2);

    printf("APOS A TROCA: \n");
    aux_1 = (n1 = n2);

    aux_2 = (aux_1 = n1);
    printf("N1: %d, N2: %d \n", aux_1, aux_2);
    return 0;
}
