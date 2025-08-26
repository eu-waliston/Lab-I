#include <stdio.h>

int main()
{
    int N;

    printf("DIgite um número: ");
    scanf("%d", &N);

    if (N % 3 != 0 && N % 7 != 0)
    {
        printf("O Número %d não divisivel por 3 e por 7! \n", N);
    }
    else
    {
        printf("O Número %d  é divisivel por 3 e por 7!", N);
    }

    return 0;
}