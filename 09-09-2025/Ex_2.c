/*
2) Leia 20 valores, encontre e escreva o maior deles.
*/

#include <stdio.h>  
int main()  
{  
    int num, maior, cont;  

    printf("Digite 20 valores:\n");  

    for (cont = 1; cont <= 20; cont++)  
    {  
        printf("Valor %d: ", cont);  
        scanf("%d", &num);  

        if (cont == 1 || num > maior)
        {  
            maior = num;  
        }  
    }  

    printf("O maior valor digitado é: %d\n", maior);  

    return 0;  
}