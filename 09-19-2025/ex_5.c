/*

5) Faça um programa que leia um número inteiro N e chame
uma função passando N como parâmetro. A função deve
verificar se N é um quadrado perfeito, informando sua raiz,
calculada através da soma de ímpares. Um número é um
quadrado perfeito se for possível somarmos números
ímpares consecutivos (1+3+5+7+...) até que esta soma
seja igual ao próprio número. Neste caso, a quantidade de
termos somados é a raiz quadrada deste número. (ex. 16
= 1+3+5+7. Foram somados 4 termos, que é a raiz
quadrada de 16).

*/

#include <stdio.h>

int isPerfectSquare(int num, int *root);

int main() {
    int num, root;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("O numero deve ser inteiro e nao negativo.\n");
        return 1;
    }

    if (isPerfectSquare(num, &root)) {
        printf("%d eh um quadrado perfeito. Raiz: %d\n", num, root);
    } else {
        printf("%d nao eh um quadrado perfeito.\n", num);
    }

    return 0;
}