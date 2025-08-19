/*
3. Faça um programa que leia a base e a altura de um triângulo. A seguir, calcule e
imprima a sua área.
*/

#include <stdio.h>

int main() {
    
    float base;
    float altura;
    float area;

    printf(" AREA DO TRIANGULO \n");

    printf("Digite o vlaor da BASE: ");
    scanf("%f", &base);

    printf("Digite a ALTURA: ");
    scanf("%f", &altura);

    area = ( base * altura ) / 2;

    printf("A Area do triangulo sera: %f \n", area);

}