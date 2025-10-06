/*

1) Faça uma função que realize a soma de todos os valores inteiros de 1 a n,
sendo que n deve ser recebido como parâmetro da função main. Implemente
também a função main, que irá receber e imprimir o resutlado da soma.

*/

#include <stdio.h>

void soma_valores() {
    int soma, valores, num;
    
    printf("Digite numero de iterações: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        soma = valores + soma;

        printf("Digite o %d º número: ", i);
        scanf("%d", &valores);
        
    }

    printf("A Soma dos valores é: %d \n", soma);
}

int main() {
    soma_valores();
}