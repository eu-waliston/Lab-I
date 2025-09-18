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

| Figura            | Fórmula da Área                  | Explicação rápida                             |
| ----------------- | -------------------------------- | --------------------------------------------- |
| **Quadrado**      | $A = l^2$                        | Lado vezes lado.                              |
| **Retângulo**     | $A = b \times h$                 | Base vezes altura.                            |
| **Triângulo**     | $A = \frac{b \times h}{2}$       | Base vezes altura, dividido por 2.            |
| **Trapézio**      | $A = \frac{(B + b) \times h}{2}$ | Soma das bases vezes altura, dividido por 2.  |
| **Losango**       | $A = \frac{D \times d}{2}$       | Multiplica as diagonais e divide por 2.       |
| **Paralelogramo** | $A = b \times h$                 | Igual ao retângulo, mas com lados inclinados. |
| **Círculo**       | $A = \pi \times r^2$             | π vezes o raio ao quadrado.                   |


*/
//
#include <stdio.h>

float area_quadrado(float lado)
{
    return lado * lado;
}

float area_retangulo(float base, float altura)
{
    return base * altura;
}

float area_triangulo(float base, float altura)
{
    return (base * altura) / 2;
}

float area_trapezio(float base_1, float base_2, float altura)
{
    return ((base_1 + base_2) * altura) / 2;
}

int main()
{
    float lado;
    float altura;
    float base, base_1, base_2;

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
        printf("Primeiro Digite a base: ");
        scanf("%f", &base);
        printf("Agora digite a altura: ");
        scanf("%f", &altura);

        printf("A área do retangulo é: %2.f \n", area_retangulo(base, altura));
        break;

    case 't':
        printf("Sua escolha foi: Área do triângulo!\n");

        printf("Primeiro Digite a base: ");
        scanf("%f", &base);
        printf("Agora digite a altura: ");
        scanf("%f", &altura);

        printf("A área do triângulo é: %2.f \n", area_triangulo(base, altura));
        break;

    case 'p':
        printf("Sua escolha foi: Área do trapézio!\n");

        printf("Primeiro Digite a base 1: ");
        scanf("%f", &base_1);
        printf("Primeiro Digite a base 2: ");
        scanf("%f", &base_2);

        printf("Agora digite a altura: ");
        scanf("%f", &altura);

        printf("A área do triângulo é: %2.f \n", area_trapezio(base_1, base_2, altura));
        break;

    default:
        printf("Opção Inválida!!! \n");
        break;
    }
}