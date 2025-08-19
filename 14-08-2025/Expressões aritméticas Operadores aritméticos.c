#include <stdio.h>

int main() {
    int a = 10, b = 3;

    printf("Soma: %d + %d = %d\n", a, b, a + b);
    printf("Subtracao: %d - %d = %d\n", a, b, a - b);
    printf("Multiplicacao: %d * %d = %d\n", a, b, a * b);
    printf("Divisao inteira: %d / %d = %d\n", a, b, a / b);
    printf("Resto (modulo): %d %% %d = %d\n", a, b, a % b);

    return 0;
}
