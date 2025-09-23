#include <stdio.h>

int main() {
    int n;

    print("Digite um  numero pra saber se e par ou impar: ");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("Par\n");
    else
        printf("Impar\n");
    return 0;
}
