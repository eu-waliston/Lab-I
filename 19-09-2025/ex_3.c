/*

3) Faça um programa que leia um número inteiro e positivo.
A seguir, chame uma função que receba esse número e
verifique se o mesmo é triangular, retornando essa
informação à função main, que irá imprimir uma
mensagem adequada. Um número é dito triangular
quando é resultado do produto de 3 números
consecutivos. (ex.: 24 é triangular, pois 24 = 2*3*4)

*/

#include <stdio.h>

int isTriangular(int num);

int main() {
    int num;

    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("O numero deve ser inteiro e positivo.\n");
        return 1;
    }

    if (isTriangular(num)) {
        printf("%d eh um numero triangular.\n", num);
    } else {
        printf("%d nao eh um numero triangular.\n", num);
    }

    return 0;
}