
#include <stdio.h>

int main(){
    
    int n, primo = 1;

    printf("Digite um numero prasaber se ele e primo: ");
    scanf("%d", &n);

    if (n < 2)
        primo = 0;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            primo = 0;
    }

    if (primo)
        printf("Primo\n");
    else
        printf("Nao primo\n");
    return 0;
}
