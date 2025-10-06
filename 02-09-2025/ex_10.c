/*

10) Faça um programa que leia um número inteiro e verifique se é
par ou ímpar, imprimindo essa informação.

*/

#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    switch (num % 2) {
        case 0:
            printf("%d e par.\n", num);
            break;
        case 1:
        case -1: // para lidar com numeros negativos
            printf("%d e impar.\n", num);
            break;
    }

    return 0;
}
