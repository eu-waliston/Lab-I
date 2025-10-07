/*

3) Leia o código de um produto e exiba a sua classificação, conforme a
tabela abaixo:

codigo:                     Classifocação
1                           Alimento não perecível
2,3 ou 4                    Alimento perecivel
5 ou 6                      Higiene Pessoal
7                           Utensilios domésticos
8 até 12                    Limpeza
Qualquer outro codigo       Códogo inválido

*/

#include <stdio.h>

int main()
{
    int cod_produto;

    printf("SNK Estoque\n");
    printf("Digite um número de 1 a 12 para buscar seu item:");
    scanf("%d", &cod_produto);

    switch (cod_produto)
    {
    case 1:
        printf("Alimento não perecível \n");
        break;
    case 2:
    case 3:
    case 4:
        printf("Alimento perecivel \n");
        break;
    case 5:
    case 6:
        printf("Alimento perecivel \n");
        break;
    case 7:
        printf("Utensilios domésticos \n");
        break;
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
        printf("Alimento não perecível \n");
        break;
    default:
        printf("Códogo inválido!");
        break;
    }
    return 0;
}