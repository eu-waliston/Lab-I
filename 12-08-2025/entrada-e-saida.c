#include <stdio.h>

# define pi 3.14159

int main() {
    float r, area;
    printf("\n Digite o valor do raio: ");
    scanf("%f", &r);

    area = pi * r * r;

    printf("\nValor da area do circulo = %f\n\n", area);
    return 0;
}