/*
9. Faça um programa que receba como entrada a quantidade de maçãs para o
transporte e o preço de cada maçã.

Como resultado, o programa deve informar o valor total da carga e a quantidade de caixas de maçã necessárias para o
transporte. 

Considere que uma caixa de maçãs possui espaço para 48 unidades.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    float apples, applesPrice, load, boxes = 48.0;

    printf("Digite a quantidade de Maçãs: ");
    scanf("%f", &apples);

    printf("Digite o preço de cada Maça: ");
    scanf("%f", &applesPrice);

    load = apples/boxes ;

    printf("RESULTADO: \n");
    printf("Preço das maças(unidade) R$%3.f \n", applesPrice);
    printf("Quantidade de maças: %3.f\n", apples);
    printf("Maças por caixa: %2.f\n", boxes);
    printf("Você ira precisar de %2.f caixas para carregar todas as maças! \n", load);
}