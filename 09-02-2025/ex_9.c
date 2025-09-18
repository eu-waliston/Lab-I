/*

9) Faça um programa que leia 2 números inteiros x e y, verifique
o menor e atribua esse valor à variável z.

*/

#include <stdio.h>

int main() {
    int x, y, z;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &x, &y);

    // switch usando a comparação (x < y) como condição 0 ou 1
    switch (x < y) {
        case 1: // x < y é verdadeiro
            z = x;
            break;
        case 0: // x < y é falso, então x >= y
            z = y;
            break;
    }

    printf("O menor valor e: %d\n", z);

    return 0;
}
