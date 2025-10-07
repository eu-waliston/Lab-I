#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c;
    float delta, x1,x2;

    printf("Digite o valo de A");
    scanf("%f", &a);

    printf("Digite o valo de B");
    scanf("%f", &b);

    printf("Digite o valo de C");
    scanf("%f", &c);

    if(a == 0) {
        if(b == 0) {
            if(c == 0) {
                printf("Opção ideterminada (0 = 0)");
            } else {
                printf("Equação impossivel (%f = 0)", c);
            }
        } else {
            x1 = -c / b;

            printf("Equação do primeiro grau\n");
            printf("Raiz unica: x %.2f\n", x1);
        }
    } else {
        delta = b * b - 4 * a * c;

        if (delta < 0 ) {

            printf("Delta = %.2f (negativo)\n", delta);
            printf("A equação não possui raizes reais. \n");

        } else if (delta == 0) {
            x1 = -b / (2 * a);

            printf("Delta = 0\n");
            printf("Raiz única: x = %.2f\n", x1);

        } else {
            x1 = (-b + sqrt(delta) / (2 * a));
            x2 = (-b - sqrt(delta) / (2 * a));

            printf("Delta = %2.f\n", delta);
            printf("Duas Raizes reais:\n");
            printf("x1 = %2.f\n", x1);
            printf("x2 = %2.f\n", x2);
        }
    }
}