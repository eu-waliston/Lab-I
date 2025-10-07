#include <stdio.h>

// Função SEM parâmetros

// sem retorno
void media_ex1()
{
    int a, b;
    float m;
    printf("digite 2 valores\n");
    scanf("%d %d", &a, &b);
    m = (float)(a + b) / 2;
    printf("media = %.2f\n", m);
}

// com retorno
float media_ex2()
{
    int a, b;
    float r;

    printf("digite 2 valores\n");
    scanf("%d %d", &a, &b);
    r = (float)(a + b) / 2;
    return r;
}

// Função COM parâmetros (passagem por valor)

// sem retorno
void media(int x, int y){
 float m;
m = (float)(x+y)/2;
printf("media = %.2f\n", m);
} 

// Função COM parâmetros (passagem por valor)

// sem retorno
void media(int x, int y){
 float m;
m = (float)(x+y)/2;
printf("media = %.2f\n", m);
} 

// com retorno
float media(int x, int y){
 float r;
r = (float)(x+y)/2;
return r;
} 

// funcções COM parametros
void media_ex3(int x, int y)
{
    float m;
    m = (float)(x + y) / 2;
    printf("media = %2.f\n", m);
}

int main()
{
    int a, b;

    printf("digite 2 valores\n");
    scanf("%d %d", &a, &b);

    media_ex3(a, b);

    return 0;
}