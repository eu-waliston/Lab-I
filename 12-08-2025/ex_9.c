#include <stdio.h>

// Forma 1: usando #define (pré-processador)
#define PI 3.14159

int main() {
    // Forma 2: usando const
    const float DOLAR = 5.25;

    printf("Valor de PI = %.5f\n", PI);
    printf("Valor do DOLAR = %.2f\n", DOLAR);

    return 0;
}
