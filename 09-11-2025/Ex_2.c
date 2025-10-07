/*

2) Faça programa que calcule e escreva a soma dos números que não são
múltiplos de 13 no intervalo entre 100 e 200.

*/

#include <stdio.h>

void soma_valores() {
    int soma = 0;

    for(int i = 100; i <= 200; i++) {
        if(i % 13 != 0) {
            soma += i;
        }
    }

    printf("A Soma dos valores que não são múltiplos de 13 é: %d \n", soma);
}

int main() {
    soma_valores();
}

