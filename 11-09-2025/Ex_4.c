/*

4) Faça um programa que imprima a tabela de conversão de graus CelsiusFahrenheit para o intervalo especificado pelo usuário. O programa deve
solicitar ao usuário os limites superior e inferior do intervalo e o
decremento/incremento (ex. intervalo de 0 a 20, conversão a cada 2
“unidades”).

*/

#include <stdio.h>

void Celsius_Fahrenheit()
{
    int lower, upper, step;

    printf("Digite o limite inferior em graus Celsius: ");
    scanf("%d", &lower);
    printf("Digite o limite superior em graus Celsius: ");
    scanf("%d", &upper);
    printf("Digite o incremento (positivo para aumentar, negativo para diminuir): ");
    scanf("%d", &step);

    printf("\nCelsius\tFahrenheit\n");
    printf("---------------------\n");
    for (int celsius = lower; (step > 0) ? (celsius <= upper) : (celsius >= upper); celsius += step)
    {
        float fahrenheit = (celsius * 9.0 / 5.0) + 32;
        printf("%d\t%.2f\n", celsius, fahrenheit);
    }
}

int main()
{
    Celsius_Fahrenheit();
}
