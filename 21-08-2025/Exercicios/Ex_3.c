/*
3. Faça um programa que leia um valor de comprimento em polegadas e apresente-o convertido em
centímetros. A fórmula de conversão é: C = P 2,54, sendo C o comprimento em centímetros e P o ∗
comprimento em polegadas.
*/

#include <stdio.h>

int main() {
    float comprimento_em_polegadas, centimetros;

    printf("Forneça o comprimento em polegadas para conversão em centimetros: ");
    scanf("%f", &comprimento_em_polegadas);

    centimetros = comprimento_em_polegadas * 2.54;

    printf("Após conversão %3.f polegadas, sera %4.f centimentros \n", comprimento_em_polegadas, centimetros);
}