/*
5. Faça um programa que leia um valor de área em metros quadrados (m2
)e apresente-o convertido
em acres. A fórmula de conversão é: A = M 0,000247, sendo M a área em metros quadrados e A a ∗
área em acres.
*/

#include <stdio.h>

int main() {
    float   metros_quadrados, acres, M = 0.000247;

    printf("Apresente o valor em M² para ve-lô convetido: ");
    scanf("%f",&metros_quadrados);

    acres = metros_quadrados / M;

    printf("%4.f M² será %f acres. \n", metros_quadrados, acres);

    return 0;
}