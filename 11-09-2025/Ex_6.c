/*

6) Faça um programa que leia um número N, que será o limite superior de um
intervalo e o incremento I.

A seguir, chame uma função, 

passando N e I como parâmetros. 

A função deve imprimir todos os números naturais no intervalo
de 0 até N, de acordo com o incremento. 

Ex.: para N = 20 e I = 5 serão impressos: 0, 5, 10, 15, 20.

*/

#include <stdio.h>

void intervalo() {
    int num, incremento, count, i;

    printf("Digite um número pra ver o intervalo dele: ");
    scanf("%d", &num);

    for( i; i <= num; i++) {
       printf("%d", i);
    }

    printf("N: %d e Incremento: %d \nO intevalor foi: %d", num, incremento, count);
}

int main() {
    intervalo();
}