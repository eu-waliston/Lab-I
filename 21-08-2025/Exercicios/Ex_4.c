/*
4. Faça um programa que leia um valor de comprimento em centímetros e apresente-o convertido
em polegadas. A fórmula de conversão é: P = C
2,54 , sendo C o comprimento em centímetros e P o
comprimento em polegadas.
*/

#include <stdio.h>

int main() {
    float comprimento_em_centímetros, polegadas;

    printf("Forneça os comprimento em centímetros para a conversão em polegadas: ");
    scanf("%f", &comprimento_em_centímetros);

    polegadas = comprimento_em_centímetros / 2.54;

    printf("Após conversão os %3.f centimetros itão se transformar em %3.f polegadas \n", comprimento_em_centímetros, polegadas);

    return 0;
}