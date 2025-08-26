#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c;
    float delta, x1,x2;

    printf("Digite o valo de A");
    scanf("%d", &a);

    printf("Digite o valo de B");
    scanf("%d", &b);

    printf("Digite o valo de C");
    scanf("%d", &c);

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

        } else if (delta == 0) {

        } else {
            x1 = (-b + sqrt())
        }
    }
}