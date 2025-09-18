/*

8) Leia o plano de trabalho e o salário atual de um funcionário,
calcule e imprima o seu novo salário, com base na tabela abaixo:

Plano       Aumento
A              9% 
B              13% 
C              17%

*/

#include <stdio.h>

int main() {
    char plano;
    float salario, novo_salario;

    printf("Digite o plano de trabalho (A, B ou C): ");
    scanf(" %c", &plano);

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    switch (plano) {
        case 'A':
        case 'a':
            novo_salario = salario * 1.09;
            break;

        case 'B':
        case 'b':
            novo_salario = salario * 1.13;
            break;

        case 'C':
        case 'c':
            novo_salario = salario * 1.17;
            break;

        default:
            printf("Plano invalido!\n");
            return 1; // encerra o programa
    }

    printf("Novo salario: R$ %.2f\n", novo_salario);

    return 0;
}
