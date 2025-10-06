/*
2. Observe o trecho de código abaixo:

int x, y;
x = 1.23; // conversão implícita

printf("valor de x = %d\n", x); // imprime 1
y = (int) 5.67; // conversão explícita - cast

printf("valor de y = %d\n", y); // imprime 5

Faça um programa que declare 3 variáveis inteiras a, b e c e uma variável float d.
Atribua 5 para a e 2 para b. A seguir, calcule a divisão de a por b, atribuindo essa
expressão a c, imprimindo o valor da variável inteira c. Na sequência, o programa
deve calcular a divisão de a por b, atribuindo essa expressão a d, utilizando o
recurso de cast (exibido no exemplo acima).

*/

#include <stdio.h>

int main() {
    int a,b,c,div_1, div_2;
    float d;

    a = 5;
    b = 2;
    div_1 = a/b;
    c = div_1;
    div_2 = (float)a/(float)b;
    d = div_2;
    
    printf(" RESULTADOS \n");
    printf("A: %d \n", a);
    printf("B: %d \n", b);
    printf("C: %d \n", c);
    printf("D: %f \n", d);
}