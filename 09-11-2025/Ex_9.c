/*

9) Faça uma função, denominada floyd, que receba como parâmetro um valor
inteiro n. A função deve exibir o triângulo de Floyd para este valor. O triângulo
de Floyd é formado por n linhas de números consecutivos, onde cada linha
contém um número a mais que a linha anterior. Implemente também a função
main, que chama a função floyd. O exemplo abaixo mostra um triângulo de 5
linhas:

1
2   3
4   5   6
7   8   9   10
11  12  13  14  15

*/

#include <stdio.h>

void floyd(int n) {
    int num = 1; // Número inicial

    for (int i = 1; i <= n; i++) { // Para cada linha
        for (int j = 1; j <= i; j++) { // Para cada número na linha
            printf("%d\t", num); // Imprime o número atual
            num++; // Incrementa o número
        }
        printf("\n"); // Nova linha após cada linha do triângulo
    }
}

int main() {
    int n;

    printf("Digite o número de linhas para o triângulo de Floyd: ");
    scanf("%d", &n);

    floyd(n); // Chama a função floyd

    return 0;
}
