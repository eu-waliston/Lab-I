/*

5) Leia a idade de uma pessoa e exiba quantos dias de vida ela
possui. Considere sempre anos completos e que um ano sempre
possui 365 dias.

*/
#include <stdio.h>

int main() {
    int idade, dias_de_vida;

    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    dias_de_vida = idade * 365;

    printf("A pessoa possui aproximadamente %d dias de vida.\n", dias_de_vida);

    return 0;
}
