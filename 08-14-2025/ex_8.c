/*

8) Leia a razão de uma PA e o valor do primeiro termo. Calcule e
imprima o décimo termo da série.e

*/

#include <stdio.h>

int main() {
    int a1, r, a10;

    // Ler o primeiro termo
    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &a1);

    // Ler a razão
    printf("Digite a razao da PA: ");
    scanf("%d", &r);

    // Calcular o 10º termo
    a10 = a1 + 9 * r;

    // Exibir o resultado
    printf("O decimo termo da PA eh: %d\n", a10);

    return 0;
}
