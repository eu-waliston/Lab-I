/*
8. Pedrinho tem um cofrinho com muitas moedas e deseja saber quantos reais
conseguiu poupar. Faça um programa que leia a quantidade de moedas de cada
tipo e imprima o valor total economizado, em reais. Considere que existem moedas
de 1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. Não havendo moeda de
um tipo, a quantidade lida deve ser zero.
*/

#include <stdio.h>
#include <locale.h>

int main() {

    int quant_1, quant_5, quant_10, quant_25, quant_50, quant_100;
    int total_centavos;

    printf("Quantas moedas de 1 centavo? ");
    scanf("%d", &quant_1);

    printf("Quantas moedas de 5 centavos? ");
    scanf("%d", &quant_5);

    printf("Quantas moedas de 10 centavos? ");
    scanf("%d", &quant_10);

    printf("Quantas moedas de 25 centavos? ");
    scanf("%d", &quant_25);

    printf("Quantas moedas de 50 centavos? ");
    scanf("%d", &quant_50);

    printf("Quantas moedas de 1 real? ");
    scanf("%d", &quant_100);

    // cálculo total em centavos
    total_centavos = quant_1*1 + quant_5*5 + quant_10*10 + quant_25*25 + quant_50*50 + quant_100*100;

    // imprimir em reais com vírgula (divisão inteira + resto)
    printf("Pedrinho tem ao todo R$: %d,%02d\n", total_centavos/100, total_centavos%100);

    return 0;
}
