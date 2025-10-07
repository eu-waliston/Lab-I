/*

4) Leia dois valores inteiros x e y e exiba um menu com as opções: ‘A’, ‘P’
e ‘R’.

Para a opção ‘A’, o programa deve calcular e exibir a média aritmética
dos dois valores.

Para a opção ‘P’, o programa deve calcular e exibir a
média ponderada dos valores, supondo pesos 4 para x e 6 para y.

Para a
opção ‘R’, o programa deve calcular e exibir o resto inteiro da divisão de y
por x.

*/

#include <stdio.h>

int main()
{
    int A, P, R, N1, N2, Resultado;
    char opcao;

    printf("\n ------ Calculadora A,P,R ------ \n\n");
    printf("A - Média Aritmética\nP - Média Ponderada\nR - Resto Inteiro\n\nDigite sua Opção [A ,P ou R]: ");
    scanf("%s", &opcao);

    switch (opcao)
    {
    case 'A':
        printf("Digite o primeiro número: ");
        scanf("%d", &N1);

        printf("Digite o segundo npumero: ");
        scanf("%d", &N2);

        A = ( N1 * N2 ) / 2;
        printf("Média é: %d", A);
        break;

    case 'P':

        printf("Digite o primeiro número: ");
        scanf("%d", &N1);

        printf("Digite o segundo npumero: ");
        scanf("%d", &N2);

        P = (N1 / 4) * (N2 / 6);
        printf("Média podenrada é: %d", P);
        break;

    case 'R':

        printf("Digite o primeiro número: ");
        scanf("%d", &N1);

        printf("Digite o segundo npumero: ");
        scanf("%d", &N2);

        R = N1 % N2;
        printf("O resto da divisão é: %d", R);
        break;

    default:
        printf("Opção Inválida!!!");
        break;
    }
    return 0;
}