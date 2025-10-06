/*
7. Faça um programa que leia as dimensões (em m) de um terreno retangular e de
uma casa (também retangular) sobre este terreno. A seguir, calcule e exiba a área
livre do terreno, em m2
 e em percentual.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    float dim,house, freeArea;

    printf("Digite a dimenção do terreno: ");
    scanf("%f", &dim);

    printf("Digite a area da Casa: ");
    scanf("%f", &house);

    printf("Com base nas informações passadas: \n");
    freeArea = dim - house;
    printf("Você tem um espaço livre de: %f M² \n", freeArea);

}