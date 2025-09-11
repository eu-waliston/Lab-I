/*

3) Faça um programa que chame uma função que leia 200 números inteiros e
imprima a quantidade de pares, sua média, a quantidade de ímpares e seu
somatório.

*/

#include <stdio.h>

void soma_valores() {
    int impares, pares,media;

    for(int i = 100; i <= 200; i++) {

        if(i % i != 0) {
            impares += i;
        }

        if (i % i == 0) {
            pares += i;
        }

        media = (i * i) / i;
    }

    printf("A Soma dos valores pares: %d \n", impares);
    printf("A Soma dos valores impares: %d \n", pares);
    printf("A Soma dos valores e a média: %d \n", media);
}

int main() {
    soma_valores();
}