/*

5) Calcule e escreva o valor de S:

        1   3   5   7         99
    s = - + - + - + - + ... + --
        1   2   3   4         50


*/

#include <stdio.h>

int main()
{
    int i;
    float S = 0.0;

    for (i = 1; i <= 99; i += 2)
    {
        S += (float)i / ((i + 1) / 2);
    }

    printf("O valor de S é: %.2f\n", S);

    return 0;
}