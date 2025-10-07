#include <stdio.h>

int main() {

    // permitem testas para decidir ações alternativas
    // if & else 
    //switch

    //exemplo:
    int V;

    printf("\nDigite valor inteiro: ");
    scanf("%d", &V);

    if(V > 0) {
        printf("%d é maior que 0. ", V);
    } else {
        printf("Não é maoir!!!");
    }


    return 0;
}