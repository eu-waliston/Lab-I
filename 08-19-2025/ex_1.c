//1. Faça um programa que leia o valor da velocidade em m/s, transforme e imprima
//este valor em km/h.

#include <stdio.h>

int main() {
    float entrance, result;
    printf("Digite a velocidade em M/S e veja ele convertido em KM/h: ");
    scanf("%f", &entrance);

    result =  entrance * 3.6;

    printf("%f m/s apos convertido sera %fkm/h \n", entrance, result);

    return 0;
}