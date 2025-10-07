/*

6) Calcule a média dos números pares digitados pelos
usuário. O programa deve encerrar a entrada quando
encontrar o valor 0.
a) faça uma versão com while
b) faça uma versão com do-while

*/

#include <stdio.h>

int main() {
    int num;
    int soma = 0;
    int count = 0;

    // Versão com while
    printf("Versao com while:\n");
    printf("Digite numeros inteiros (0 para encerrar):\n");
    scanf("%d", &num);

    while (num != 0) {
        if (num % 2 == 0) { // Verifica se o número é par
            soma += num;
            count++;
        }
        scanf("%d", &num);
    }

    if (count > 0) {
        printf("Media dos numeros pares: %.2f\n", (float)soma / count);
    } else {
        printf("Nenhum numero par foi digitado.\n");
    }

    // Resetando variáveis para a próxima versão
    soma = 0;
    count = 0;

    // Versão com do-while
    printf("\nVersao com do-while:\n");
    printf("Digite numeros inteiros (0 para encerrar):\n");

    do {
        scanf("%d", &num);
        if (num != 0 && num % 2 == 0) { // Verifica se o número é par e não é zero
            soma += num;
            count++;
        }
    } while (num != 0);

    if (count > 0) {
        printf("Media dos numeros pares: %.2f\n", (float)soma / count);
    } else {
        printf("Nenhum numero par foi digitado.\n");
    }

    return 0;
}

