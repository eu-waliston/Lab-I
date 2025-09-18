/*
1) Faça um programa que leia vários números inteiros, verifique
e imprima a quantidade de primos dentre os números
digitados. O programa acaba quando for digitado um valor menor ou igual a zero.
*/

#include <stdio.h>

int main() {
    int num;

    printf("Digite um número pra saber se ele é primo: ");
    scanf("%d", &num);

    while (num % num != 0 && num / 1 == num){
        printf("O número %d não é primo!!", num);
        printf("Digite um número pra saber se ele é primo: ");
        scanf("%d", &num);
    }

    printf("O número %d é um número primo!", num);
    
    return 0;
}