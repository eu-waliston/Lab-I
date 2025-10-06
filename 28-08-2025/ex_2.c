/*

2) O móbile de Maria é composto por três hastes como mostra a figura abaixo.
Para que ele esteja completamente equilibrado, com todas as hastes na
horizontal, os pesos das quatro bolas A, B, C e D têm que satisfazer todas as
seguintes condições:

    A=B+C+D
    B+C=D
    B=C
*/

#include <stdio.h>

int main() {
    int B;
    int C,D,A;

    printf("Digite o peso da bola B: ");
    scanf("%d", &B);

    C = B;
    D = B + C;
    A = B + C + D;

    printf("Peso das bolas para equilibar o mobile:\n");
    printf("A = %d", A);
    printf("B = %d", B);
    printf("C = %d", C);
    printf("D = %d", D);

    return 0;
}