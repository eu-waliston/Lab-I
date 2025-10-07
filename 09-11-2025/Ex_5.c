/*

5) Faça um programa que chame uma função que leia 20 números

e imprima a soma dos números cujos quadrados são menores que 225.

*/
#include <stdio.h>
#include <math.h>
#define TAM 20

void soma_quadrados() {
    int numeros[TAM];
    int soma = 0;

    for (int i = 0; i < TAM; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < TAM; i++) {
        if (pow(numeros[i], 2) < 225) {
            soma += numeros[i];
        }
    }

    printf("A soma dos números cujos quadrados são menores que 225 é: %d\n", soma);
}

int main() {
    soma_quadrados();
    return 0;
}
