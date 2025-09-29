/*

10) Um número i é congruente módulo m a j se i % m = j % m. Faça um
programa que leia os valores inteiros e positivos n, j e m, e imprima os n
primeiros naturais congruentes a j módulo m

Ex.: 35 é congruente módulo 4 a 39, pois 35 % 4 = 3 = 39 % 4

*/

#include <stdio.h>

void congruente_modulo(int n, int j, int m) {
    int count = 0; // Contador de números encontrados
    int num = 0;   // Número atual a ser verificado

    printf("Os %d primeiros naturais congruentes a %d módulo %d são:\n", n, j, m);
    while (count < n) {
        if (num % m == j % m) { // Verifica a congruência
            printf("%d ", num); // Imprime o número congruente
            count++; // Incrementa o contador
        }
        num++; // Incrementa o número a ser verificado
    }
    printf("\n");
}

int main() {
    int n, j, m;

    // Leitura dos valores de n, j e m
    printf("Digite o valor de n (número de naturais a imprimir): ");
    scanf("%d", &n);
    printf("Digite o valor de j: ");
    scanf("%d", &j);
    printf("Digite o valor de m: ");
    scanf("%d", &m);

    // Chama a função para encontrar e imprimir os números congruentes
    congruente_modulo(n, j, m);

    return 0;
}
