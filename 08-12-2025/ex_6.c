#include <stdio.h>

int main() {
    int X;
    long Y;
    float Z;

    printf("digite um inteiro: ");
    scanf("%d", &X);
    printf("digite um long: ");
    scanf("%ld", &Y);
    printf("digite um valor futuante: ");
    scanf("%f", &Z);

    printf("X: %d, Y: %ld, Z: %f\n",X,Y,Z);
}