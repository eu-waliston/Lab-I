#include <stdio.h>

int main() {
    int y = 10;

    printf("y = %d\n", y);
    printf("y++ (pos-incremento) = %d\n", y++); // mostra antes, incrementa depois
    printf("Depois do y++: y = %d\n", y);

    printf("++y (pre-incremento) = %d\n", ++y); // incrementa antes, mostra depois

    printf("y-- (pos-decremento) = %d\n", y--);
    printf("Depois do y--: y = %d\n", y);

    return 0;
}
