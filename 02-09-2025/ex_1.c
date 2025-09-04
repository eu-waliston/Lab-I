/*

1) Leia um conjunto de 4 valores i, a, b, c, onde i é inteiro e positivo e
a, b, c são reais. Escreva os valores lidos e, a seguir:
• Se i = 1 escrever os valores a, b, c em ordem crescente.
• Se i = 2 escrever os valores a, b, c em ordem decrescente.
• Se i = 3 escrever os valores a, b, c de forma que o maior fique
entre os outros dois.

*/

#include <stdio.h>

int main() {
    int i;
    double a, b, c, temp;

    printf("Digite i (1, 2 ou 3) e os valores a, b, c:\n");
    scanf("%d %lf %lf %lf", &i, &a, &b, &c);

    printf("Valores lidos: i=%d, a=%.2lf, b=%.2lf, c=%.2lf\n", i, a, b, c);

    if (i == 1) {
        // ordem crescente
        if (a > b) { temp = a; a = b; b = temp; }
        if (a > c) { temp = a; a = c; c = temp; }
        if (b > c) { temp = b; b = c; c = temp; }
        printf("Ordem crescente: %.2lf %.2lf %.2lf\n", a, b, c);

    } else if (i == 2) {
        // ordem decrescente
        if (a < b) { temp = a; a = b; b = temp; }
        if (a < c) { temp = a; a = c; c = temp; }
        if (b < c) { temp = b; b = c; c = temp; }
        printf("Ordem decrescente: %.2lf %.2lf %.2lf\n", a, b, c);

    } else if (i == 3) {
        // maior no meio
        double maior = a;
        if (b > maior) maior = b;
        if (c > maior) maior = c;

        if (maior == a) {
            printf("%.2lf %.2lf %.2lf\n", b, a, c);
        } else if (maior == b) {
            printf("%.2lf %.2lf %.2lf\n", a, b, c);
        } else {
            printf("%.2lf %.2lf %.2lf\n", a, c, b);
        }

    } else {
        printf("Valor de i invalido.\n");
    }

    return 0;
}
