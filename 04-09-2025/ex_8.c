/*

8) Em época de inflação alta, a empresa KKK tem uma política de juros para
compra de produtos a prazo (em dias) conforme mostrado abaixo:

Prazo           Juros(%)
1   -   3       0
5   -   7       0.05%
8   -   12      1.5%
13  -   20      3%

Faça um programa que leia o valor de uma compra e o prazo de pagamento. A
seguir, o programa deve chamar uma função, passando esses valores como
parâmetros, que deve calcular o valor a ser gasto com o produto. Esse valor deve
ser retornado para a função main, que irá imprimir como saída.
*/

#include <stdio.h>

// Função que calcula o valor final com base no prazo
float calculaValorFinal(float valor, int prazo) {
    float juros = 0.0;

    if (prazo >= 1 && prazo <= 3) {
        juros = 0.0;
    } else if (prazo >= 5 && prazo <= 7) {
        juros = 0.0005; // 0.05% = 0.0005
    } else if (prazo >= 8 && prazo <= 12) {
        juros = 0.015; // 1.5% = 0.015
    } else if (prazo >= 13 && prazo <= 20) {
        juros = 0.03; // 3% = 0.03
    }

    return valor * (1 + juros);
}

int main() {
    float valor, valorFinal;
    int prazo;

    // Entrada
    printf("Digite o valor da compra: ");
    scanf("%f", &valor);

    printf("Digite o prazo em dias: ");
    scanf("%d", &prazo);

    // Chamada da função
    valorFinal = calculaValorFinal(valor, prazo);

    // Saída
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}
