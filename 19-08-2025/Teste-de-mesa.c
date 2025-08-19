#include <stdio.h>

int main() {
    //declara a variavel
    float raio,area;

    //imprime informações para o usuário
    printf(" Programa que calcula area de ");
    printf(" um circulo.\n Digite o raio: ");

    //Lẽ dado de entrada
    scanf("%f", &raio);

    //Calcule a area
    area = 3.14159 * raio * raio;

    //imprime resultado
    printf(" Area do circulo: %f", area);

    return 0;
}