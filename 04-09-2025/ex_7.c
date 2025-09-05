/*

7) Em uma danceteria o preço da entrada sofre variações. Domingo, Segunda e
Terça (‘D’, ‘2’, ‘3’), ela oferece um desconto de 25% no preço normal de entrada.
Nos dias de música ao vivo, o preço da entrada é acrescido em 15% em relação
ao preço normal. Faça um programa que chame uma função que leia o preço
normal da entrada, o dia da semana (‘D’, ‘2’, ‘3, ‘4’, ‘5’, ‘6’, ‘S’), e se é dia de
música ao vivo (‘S’ ou ‘N’). A função deve calcular e retornar o preço a ser pago
pela entrada, que deve ser impresso pela função main.

*/

#include <stdio.h>

// Função que calcula o preço final da entrada
float calculaPreco(float precoNormal, char dia, char musica) {
    float precoFinal = precoNormal;

    // Desconto nos dias D, 2, 3
    if (dia == 'D' || dia == '2' || dia == '3') {
        precoFinal = precoNormal * 0.75;
    }

    // Acréscimo se tiver música ao vivo
    if (musica == 'S') {
        precoFinal = precoFinal * 1.15;
    }

    return precoFinal;
}

int main() {
    float precoNormal, precoFinal;
    char dia, musica;

    // Entrada
    printf("Digite o preco normal da entrada: ");
    scanf("%f", &precoNormal);

    printf("Digite o dia da semana (D, 2, 3, 4, 5, 6, S): ");
    scanf(" %c", &dia);

    printf("Ha musica ao vivo? (S/N): ");
    scanf(" %c", &musica);

    // Chamada da função
    precoFinal = calculaPreco(precoNormal, dia, musica);

    // Saída
    printf("Preco a pagar: R$ %.2f\n", precoFinal);

    return 0;
}
