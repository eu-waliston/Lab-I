/*
4) Leia o preço base de um produto. A seguir, calcule um
desconto de 10% no preço base e exiba o preço base e o
novo preço. Na sequência, calcule um aumento de 20% no
preço base e exiba o preço base e o novo preço.
*/

#include <stdio.h>

int main() {
    float preco_base, novo_preco;

    printf("Digite o preço base do produto: ");
    scanf("%f", &preco_base);

    novo_preco = preco_base - (preco_base * 0.10);
    printf("Preço base: %.2f\n", preco_base);
    printf("Preço com desconto de 10%%: %.2f\n", novo_preco);

    novo_preco = preco_base + (preco_base * 0.20);
    printf("Preço com aumento de 20%%: %.2f\n", novo_preco);

    return 0;
}
