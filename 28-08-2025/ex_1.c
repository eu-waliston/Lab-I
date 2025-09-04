/*

1) Para incentivar a economia de água, uma empresa de abastecimento alterou
os preços de seu fornecimento de modo que, proporcionalmente, os clientes
que consumirem menos água paguem menos pelo metro cúbico. Todo cliente
paga mensalmente uma assinatura de R$ 7,00, que inclui uma franquia de
10m3 de água. Isto é, para qualquer consumo entre 0 e 10m 3, o consumidor
paga a mesma quantia de R$ 7,00 (note que o valor da assinatura deve ser
pago mesmo que o consumidor não tenha consumido água). Acima de 10m 3,
cada metro cúbico subsequente tem um valor diferente, dependendo da faixa
de consumo, conforme tabela abaixo. São sobradas apenas quantidades
inteiras de metros cúbicos.

[FAIXA DE CONSUMO M²]   [PREÇO por m²]
Até 10                  Incluido na Franquia
11 a 30                 R$ 1.00
31 a 100                R$ 2.00
101 em diante           R$ 5.00

Assim, por exemplo, se o consumo foi de 120m³, o valor da conta é:
- R$ 7,00 da assinatura básica;
- R$ 20,00 pelo consumo no intervalo 11-30m³;
- R$ 140,00 pelo consumo no intervalo 31-100m³;
- R$ 100,00 pelo consumo no intervalo 101-120m³;
Logo, o valor da conta de água é R$ 267,00.
Faça um programa que leia o consumo de uma residência, em m³, calcule e
imprima o valor de sua conta de água

*/

#include <stdio.h>

int main()
{
    int consumo, excedente;
    double conta = 7;

    printf("Digite o consumo de agua em M³: ");
    scanf("%d", &consumo);

    if (consumo > 10)
    {
        if (consumo <= 30)
        {
            excedente = consumo - 10;
            conta += excedente * 1.0;
        }

        else if (consumo <= 100)
        {
            conta += 20 * 1.0;
            excedente = consumo - 30;
            conta += excedente * 2.0;
        }

        else
        {
            conta += 20 * 1.0;
            conta += 70 * 2.0;
            excedente = consumo - 100;
            conta += excedente * 5.0;
        }
    }

    printf("O valor da conta de agua é: R$ %2.f\n", conta);

    return 0;
}