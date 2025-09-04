/*

1) Faça um programa que chame uma função que leia um número
correspondente ao mês atual e 4 dígitos da placa de um veículo. Através do
número finalizador da placa (algarismo da casa das unidades) determine e
informe quando vence o IPVA do veículo.

final   Mês             Final(cont.)    Mês(cont.)
1       Janeiro         6               Junho
2       Fevereiro       7               Julho
3       Março           8               Agosto
4       Abril           9               Setembro
5       Maio            10              Outubro

*/

#include <stdio.h>

int lerMes()
{
    int mes;
    printf("Digite o mes atual (1 a 12): ");
    scanf("%d", &mes);
    return mes;
}

int lerPlaca()
{
    int placa;
    printf("Digite os 4 digitos da placa do veiculo: ");
    scanf("%d", &placa);
    return placa;
}

int ultimoDigito(int placa)
{
    return placa % 10;
}

int mesVencimento(int final)
{
    switch (final)
    {
    case 1:
        return 1; // Janeiro
    case 2:
        return 2; // Fevereiro
    case 3:
        return 3; // Março
    case 4:
        return 4; // Abril
    case 5:
        return 5; // Maio
    case 6:
        return 6; // Junho
    case 7:
        return 7; // Julho
    case 8:
        return 8; // Agosto
    case 9:
        return 9; // Setembro
    case 0:
        return 10; // Outubro
    default:
        return -1; // Inválido
    }
}

void imprimeMes(int mes)
{
    switch (mes)
    {
    case 1:
        printf("Janeiro");
        break;
    case 2:
        printf("Fevereiro");
        break;
    case 3:
        printf("Marco");
        break;
    case 4:
        printf("Abril");
        break;
    case 5:
        printf("Maio");
        break;
    case 6:
        printf("Junho");
        break;
    case 7:
        printf("Julho");
        break;
    case 8:
        printf("Agosto");
        break;
    case 9:
        printf("Setembro");
        break;
    case 10:
        printf("Outubro");
        break;
    default:
        printf("Mes invalido");
        break;
    }
}

int main()
{
    int mes_atual = lerMes();
    int placa = lerPlaca();
    int final = ultimoDigito(placa);
    int vencimento = mesVencimento(final);

    if (vencimento == -1)
    {
        printf("Placa invalida!\n");
    }
    else
    {
        printf("Placa final %d -> Vencimento do IPVA: ", final);
        imprimeMes(vencimento);
        printf("\n");
    }

    return 0;
}