#include <stdio.h>
#include <math.h>

int main() {
    double x = 9.0, y = 2.5;

    printf("sqrt(%.1f) = %.2f\n", x, sqrt(x));   // raiz quadrada
    printf("pow(%.1f, %.1f) = %.2f\n", x, y, pow(x,y)); // potenciação
    printf("sin(%.1f) = %.2f\n", y, sin(y));     // seno
    printf("cos(%.1f) = %.2f\n", y, cos(y));     // cosseno
    printf("fabs(-%.1f) = %.2f\n", y, fabs(-y)); // valor absoluto
    printf("floor(%.1f) = %.2f\n", y, floor(y)); // arredonda p/ baixo
    printf("ceil(%.1f) = %.2f\n", y, ceil(y));   // arredonda p/ cima

    return 0;
}
