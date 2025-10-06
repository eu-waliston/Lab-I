// 3) Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.

// A fórmula de conversão é: F = C * 9/5 + 32, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * 9/5 + 32;

    printf("A temperatura em graus Fahrenheit é: %.2f\n", fahrenheit);

    return 0;
}
