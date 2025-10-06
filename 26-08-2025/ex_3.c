#include <stdio.h>
#include <math.h>

int main() {
    int N,VALOR_ABSOLUTO;

    printf("Digite um número: ");
    scanf("%d", &N);


    if(N > 0) {
        printf("O inverso do número %d é %d \n", N, -N);
    } else {
        printf("O valor absoluto é %d", fabs(N));
    }
}