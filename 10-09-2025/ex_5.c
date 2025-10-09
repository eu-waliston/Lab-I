/*
5. Faça um programa que leia um vetor A de 10 números inteiros e um vetor B de 20 números
inteiros. A seguir, verifique quais os elementos comuns aos 2 vetores, armazenando-os num vetor
C. A final, imprima o vetor C. Lembre-se de que os elementos comuns podem se repetir, mas não
podem aparecer repetidos no vetor C.
*/

#include <stdio.h>
#define TAM_A 10
#define TAM_B 20
#define TAM_C (TAM_A < TAM_B ? TAM_A : TAM_B) // Otamanho máximo possível para C

int main()
{
    int A[TAM_A], B[TAM_B], C[TAM_C];
    int i, j, k = 0;
    int encontrado;

    printf("Digite os elementos do vetor A (10 posicoes):\n");
    for (i = 0; i < TAM_A; i++)
    {
        printf("Elemento A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("Digite os elementos do vetor B (20 posicoes):\n");
    for (i = 0; i < TAM_B; i++)
    {
        printf("Elemento B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    // Encontrar elementos comuns
    for (i = 0; i < TAM_A; i++)
    {
        for (j = 0; j < TAM_B; j++)
        {
            if (A[i] == B[j])
            {
                // Verificar se já está em C
                encontrado = 0;
                for (int m = 0; m < k; m++)
                {
                    if (C[m] == A[i])
                    {
                        encontrado = 1;
                        break;
                    }
                }
                if (!encontrado)
                {
                    C[k] = A[i];
                    k++;
                }
                break; // Evitar múltiplas contagens do mesmo elemento em B
            }
        }
    }

    // Imprimir vetor C
    printf("\nVetor C (elementos comuns):\n");
    
    for (i = 0; i < k; i++)
    {
        printf("Elemento C[%d]: %d\n", i, C[i]);
    }

    return 0;
}


