/*

5) Utilize o comando switch e o tipo ‘char’ para fazer um programa que calcula
as áreas das seguintes figuras geométricas:

    ‘q’ - Área do quadrado
    ‘r’ - Área do retângulo
    ‘t’ - Área do triângulo
    ‘p’ - Área trapézio

Baseado na escolha do usuário, você deverá ler os valores necessários para fazer
os cálculos, imprimir o nome da figura escolhida e o valor da área. As opções de
figuras geométricas devem estar dispostas em um switch e cada uma delas
implementada por uma função. Cada função irá fazer a leitura da entrada e a
impressão do resultado.

*/

#include <stdio.h>

float area_quadrado(float lado){
    return lado * lado;
}

float area_retangulo()
{
}

float area_triangulo()
{
}

float area_trapezio()
{
}

int main()
{
    float lado;
    char q, r, t, p, option;
    printf("====== Calculo de Areas ======\n");
    printf("Digite:\nq - para area do quadrado\nr - Área do retângulo\nt - Área do triângulo\np - Área trapézio\n");
    scanf("%c", &option);

    switch (option)
    {
    case 'q':
        printf("Sua escolha foi: Área do quadrado!\n");
        printf("Digite o valor do lado do quadrado: ");
        scanf("%f", &lado);

        printf("A área do quadrado é: %2.f \n", area_quadrado(lado));
        break;

    case 'r':
        printf("Sua escolha foi: Área do retângulo!\n");
        break;

    case 't':
        printf("Sua escolha foi: Área do triângulo!\n");
        break;

    case 'p':
        printf("Sua escolha foi: Área do trapézio!\n");
        break;

    default:
        printf("Opção Inválida!!! \n");
        break;
    }
}