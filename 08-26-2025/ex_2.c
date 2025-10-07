#include <stdio.h>

int main() {
    int N;

    printf("Digite um número: ");
    scanf("%d", &N);

    if(N < 0) {
        printf("Numero negativo!");
    } else if ( N > 0 ) {
        printf("Numero positvo!");
    } else {
        printf("Numero NULO");
    }

    return 0;
}