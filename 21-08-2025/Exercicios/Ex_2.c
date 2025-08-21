//2. Faça um programa que leia três valores inteiros e imprima a soma deles.

#include <stdio.h>

int main() {
    int x,y,z, soma;

    printf("Gitie 3 valores inteiros: ");
    scanf("%d %d %d", &x, &y, &z);

    soma = (x + y + z);

    printf("A soma dos numeros inteiros deu: %d \n", soma);
}