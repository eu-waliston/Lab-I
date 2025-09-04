/*

6) Leia o número do mês e informe o número de dias existentes
naquele mês, conforme abaixo. Para números de mês inválidos, o
programa deve exibir uma mensagem adequada.

Nro de dias     Mês
    28          02
    30          04,06,09,11
    31          01,03,05,07,08,10,12

*/

#include <stdio.h>

int main()
{
    int numero_mes;
    printf("Descubra quantos dias tem cada mês");
    printf("Temos 12, então basta responde qual mês você quer saber...\n");
    printf("Escolha: ");
    scanf("%d", &numero_mes);

    switch (numero_mes)
    {
    case 2:
        printf("Este mes tem 28 dias!!!");
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("Este mes tem 30 dias!!!");
        break;

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Este mes tem 31 dias!!!");
        break;

    default:
        break;
    }
    return 0;
}
