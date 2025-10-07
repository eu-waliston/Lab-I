/*

7) Leia um caractere identificador do sexo (“M” para masculino e “F”
para feminino) e calcule o peso ideal de um usuário, com base
nas fórmulas abaixo:

Para M -> (altura - 100) * 0.9
Para F -> (altura - 100) * 0.85

*/

#include <stdio.h>
#include <math.h>  // para usar fabs()

int main() {
    char sexo;
    float altura, peso_ideal;

    printf("Qual o seu sexo? M ou F\n");
    scanf(" %c", &sexo);

    switch (sexo) {
    case 'M':
    case 'm':
        printf("Certo então você é homem!\n");
        printf("Digite sua altura (em cm): ");
        scanf("%f", &altura);

        peso_ideal = (altura - 100) * 0.85;
        printf("Seu peso ideal é: %.2f Kg\n", fabs(peso_ideal));
        break;

    case 'F':
    case 'f':
        printf("Certo então você é mulher!\n");
        printf("Digite sua altura (em cm): ");
        scanf("%f", &altura);

        peso_ideal = (altura - 100) * 0.9;
        printf("Seu peso ideal é: %.2f Kg\n", fabs(peso_ideal));
        break;

    default:
        printf("Sexo inválido! Digite M ou F.\n");
        break;
    }

    return 0;
}

