/*
4. Faça um programa que leia o valor da hora de trabalho de um funcionário e a
quantidade de horas trabalhadas no mês.

A seguir, calcule o seu salário bruto, o
qual corresponde ao produto da quantidade de horas trabalhadas pelo valor da
hora de trabalho. 

Na sequência, calcule o salário líquido, o qual deve descontar
11% de IR, 8% de INSS e 5% de contribuição sindical. 

Todos os descontos são
aplicados ao valor do salário bruto. Ao final, imprima o salário bruto, o salário
líquido e o valor de cada desconto aplicado. Exibir todos os valores com 2 casas
decimais.
*/

#include <stdio.h>

int main() {

    int horasDia, horasMes, valHora;
    float salarioBruto,salarioLiquid, descontos;


    printf("Quantas horas voce trabalha por dia: ");
    scanf("%d", &horasDia);

    printf("Quanto voce ganha por hora: ");
    scanf("%d", &valHora);

    horasMes = horasDia * 30;

    salarioBruto = horasMes * valHora;

    salarioLiquid = salarioBruto - 0.11 - 0.8 - 0.5;

    printf("RESUTLADOS: \n");
    printf("HORAS POR DIA: %d \n", horasDia);
    printf("HORAS MES: %d \n", horasMes);
    printf("GANHOS POR HORA R$:%d \n", valHora);
    printf("SALARIO BRUTO R$:%2.f \n", salarioBruto);
    printf("SALARIO LIQUIDO R$:%2.f \n", salarioLiquid);

}