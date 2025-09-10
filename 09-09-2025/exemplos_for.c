#include <stdio.h>

int main()
{
    // Ex.1: imprime todos os valores inteiros em um intervalo indicado pelo usuário (16)
    int cont, inicio, fim;
    printf("Digite o menor numero: ");
    scanf("%d", &inicio);

    printf("Digite o maior numero: ");
    scanf("%d", &fim);

    printf("\nIntervalo: ");

    for(cont = inicio; cont <= fim; cont ++) {
        printf(" %d ", cont);
    }

    //Ex.2: lê 50 valores e conta quantos são negativos

    int num, i, cont = 0;
    printf("Digite 50 números inteiros: ");
    for (i = 0; i < 50; i++)
    {
        scanf("%d", &num);
        if (num < 0)
        {
            cont++;
        }
    }
    printf("Número de valores negativos = %d\n", cont);

    // Ex.3: cálculo da média de 10 valores inteiros lidos

    int i, num, soma = 0; //inicia o acumulador
    float media;

    printf("digite 10 valores inteiros: ");
    for(i = 0; i < 10; i++) {
        scanf("%d", &num);
        soma = soma + num; //incrementa (variavel) do acumulador
    }

    media = (float) soma / 10;
    printf("Media é: %2.f\n", media);

    return 0;
}