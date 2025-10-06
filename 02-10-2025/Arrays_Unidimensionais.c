#include <stdio.h>

#define TAMANHO 10

int main() {
    int i, numeros[TAMANHO];

    for (i = 0; i < TAMANHO; i ++) {
        numeros[i] = i * 2;
    }

    for (i = 0; i < TAMANHO; i++) {
        printf("%d", numeros[i]);
    }
}