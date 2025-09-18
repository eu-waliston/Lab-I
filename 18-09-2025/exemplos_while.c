#include <stdio.h>
int main() {
    int num, quad;
    //imprime uma msg e lê o IO. inteiro 
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    while(num != 0) {
        quad = num * num;
        printf("\nQuadrado de %d: %d", num,quad);

        printf("\nDigite um número inteiro: ");
        scanf("%d", &num);
        
    }

    return 0;
}