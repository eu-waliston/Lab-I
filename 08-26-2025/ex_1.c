#include <stdio.h>

int main()
{
    int N1, N2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &N1);
    printf("Digite o segundo numero: ");
    scanf("%d", &N2);

    if (N1 % N2 != 0)
    {
        printf("%d é multiplo de %d \n", N1, N2);
    }
    else
    {
        printf("%d não é multiplo de %d \n", N1, N2);
    }

    return 0;
}