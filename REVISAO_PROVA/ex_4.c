#include <stdio.h>

int main() {
    int n, soma = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) soma += i;
    printf("Soma = %d\n", soma);
    return 0;
}
