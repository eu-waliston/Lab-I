/*

5) Calcule o menor inteiro positivo cujo quadrado é
superior a um número inteiro e positivo lido do
usuário.

*/
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main() {
    int num, i = 1;

    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("O numero deve ser inteiro e positivo.\n");
        return 1;
    }

    while (i * i <= num) {
        i++;
        if (i > sqrt(INT_MAX)) { // Previne overflow
            printf("Numero muito grande para calcular o quadrado.\n");
            return 1;
        }
    }

    printf("O menor inteiro positivo cujo quadrado eh superior a %d eh %d.\n", num, i);

    return 0;
}
