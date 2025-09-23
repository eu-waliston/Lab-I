#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i*i <= n; i++) {
        if (i*i == n) {
            printf("Eh quadrado perfeito\n");
            return 0;
        }
    }
    printf("Nao eh quadrado perfeito\n");
    return 0;
}
