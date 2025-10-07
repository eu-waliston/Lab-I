/*

6) Leia um número inteiro (utilizar uma única variável inteira) de 3
algarismos e imprima apenas o algarismo das dezenas.

*/

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro de 3 algarismos: ");
    scanf("%d", &numero);

    int algarismo_das_dezenas = (numero / 10) % 10;

    printf("O algarismo das dezenas é: %d\n", algarismo_das_dezenas);

    return 0;
}
