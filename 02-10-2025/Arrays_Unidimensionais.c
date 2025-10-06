#include <stdio.h>

#define TAMANHO 10
#define TAM 50
#define MAX 30

// Inicialização por atribuição
void inicializacao_po_atributos()
{
    int i, numeros[TAMANHO];

    for (i = 0; i < TAMANHO; i++)
    {
        numeros[i] = i * 2;
    }

    for (i = 0; i < TAMANHO; i++)
    {
        printf("%d", numeros[i]);
    }
}

// Leitura com scanf
void leitura_com_scanf()
{
    int i, vet[TAM];

    printf("diite %d valores: \n", TAM);
    for (i = 0; i < TAM; i++)
    {
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < TAM; i++)
    {
        printf("Valor %d: %d\n", i + 1, vet[i]);
    }
}

// Faça um programa que leia 30 valores, calcule a sua média
// aritmética e imprima a média e os valores iguais ou superiores à
// média
void leitura_de_valores()
{
    int i, soma = 0, vetor[MAX];
    double media;

    printf("Digite %d valores (inteiros): \n", MAX);
    for (i = 0; i < MAX; i++)
    {
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }

    media = (double)soma / MAX;
    printf("\nMEdia = %8.2lf\n", media);
    printf("\n\nValores iguais ou superiores a media:\n");
    for (i = 0; i < MAX; i++)
    {
        if (vetor[i] >= media)
        {
            printf("%4d\n", vetor[i]);
        }
    }
}

int main()
{
    inicializacao_po_atributos();
    leitura_com_scanf();
    leitura_de_valores();

    return 0;
}