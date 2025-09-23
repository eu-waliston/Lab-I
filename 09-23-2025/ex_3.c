/*

3) Calcule o MDC entre 2 números inteiros lidos do
usuário.

*/

#include <stdio.h>

int main() {
    int a, b, mdc, i;

    printf("Digite dois numeros inteiros: \n");
    scanf("%d %d", &a, &b); 

    int min = (a < b) ? a : b;
    
    mdc = 1;

    do {
        if (a % min == 0 && b % min == 0) {
            mdc = min;
            break;
        }
        min--;
    } while(min > 0);


    printf("MDC(%d, %d) = %d\n", a, b, mdc);

    return 0;
}