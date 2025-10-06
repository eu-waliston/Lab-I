/*

7) Leia uma data no formato ddmmaa (utilizar uma única variável
inteira) e imprima dia, mês e ano separados.

*/

#include <stdio.h>

int main() {
    int dia,mes,ano;
    printf("Digite sua dadta de nascimento: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    printf("Voce nasceu no dia %d do mes %d do ano de %d", dia, mes,ano);

    return 0;
}