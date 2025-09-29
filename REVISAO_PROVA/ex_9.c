/*
9 - Leia um número N e imprima os N primeiros termos da sequência de Fibonacci 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int n, i, t1=0, t2=1, proxTermo;

    printf("Digite a quantidade de termos da sequencia de Fibonacci que deseja ver: ");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci: \n");

    for(i=1; i<=n; i++){
        printf("%d, ", t1);
        proxTermo = t1 + t2;
        t1 = t2;
        t2 = proxTermo;
    }

    return 0;
}