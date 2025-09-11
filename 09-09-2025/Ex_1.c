/*

1) Gere e escreva os números ímpares dentro de um intervalo digitado
pelo usuário. O programa deve exibir também a soma destes
números.

*/

#include <stdio.h>



int main()
{
    int inicio, fim, cont, soma = 0;

    printf("Digite o menor numero: ");
    scanf("%d", &inicio);

    printf("Digite o maior numero: ");
    scanf("%d", &fim);

    printf("\nNúmeros ímpares no intervalo: ");

    for (cont = inicio; cont <= fim; cont++)
    {
        if (cont % 2 != 0) // Verifica se o número é ímpar
        {
            printf(" %d ", cont);
            soma += cont; // Acumula a soma dos números ímpares
        }
    }

    printf("\nSoma dos números ímpares: %d\n", soma);

    return 0;
}