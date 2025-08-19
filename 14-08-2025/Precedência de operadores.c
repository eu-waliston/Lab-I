#include <stdio.h>

int main() {
    int resultado;

    resultado = 2 + 3 * 4; // multiplicação tem precedência
    printf("2 + 3 * 4 = %d\n", resultado); // 14

    resultado = (2 + 3) * 4; // parênteses mudam ordem
    printf("(2 + 3) * 4 = %d\n", resultado); // 20

    resultado = 10 - 3 > 2 && 4 < 6; // (10-3)>2 = 1 && (4<6)=1 -> 1
    printf("10 - 3 > 2 && 4 < 6 = %d\n", resultado);

    return 0;
}
