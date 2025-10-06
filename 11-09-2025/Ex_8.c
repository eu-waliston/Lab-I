/*

8) a) Faça um programa que leia um valor inteiro N. A seguir, chame uma função
que calcule e imprima o valor de H (também inteiro), conforme a série abaixo.
b) Faça um programa que leia um valor inteiro N e calcule o valor de H
utilizando casting (observe que apenas o casting não é suficiente para
transformar o resultado em real).

        1   1   1         1
H = 1   - + - - - + ... + -
        2   3   4         N

*/

#include <stdio.h>

int calcularH(int n) {
    int h = 0;
    for (int i = 1; i <= n; i++) {
        h += 1 / i;
    }
    return h;
}

float calcularHComCasting(int n) {
    float h = 0.0;
    for (int i = 1; i <= n; i++) {
        h += 1.0 / (float)i; // Usando casting para garantir divisão real
    }
    return h;
}

int main() {
    int n;

    // Parte a) com valores inteiros
    printf("Digite um valor inteiro N: ");
    scanf("%d", &n);
    int hInt = calcularH(n);
    printf("O valor de H (inteiro) é: %d\n", hInt);

    // Parte b) com casting para valores reais
    float hFloat = calcularHComCasting(n);
    printf("O valor de H (com casting) é: %.2f\n", hFloat);

    return 0;
}
