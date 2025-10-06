/*

6) Supondo uma tabela médica, o peso ideal está relacionado com
a altura e o sexo. Faça um programa que receba a altura e o
sexo de uma pessoa, calcula e imprime o seu peso ideal,
utilizando as seguintes fórmulas:

Para mulheres: (62.1 * altura) - 44.7
Para homens: (72.7 * altura) – 58

*/
#include <stdio.h>

int main() {
    float ideal_homen = 72.7;
    float ideal_mulher = 62.1;
    float altura, resutlado;
    int sexo;

    printf("----- BEM-VINDO(a) -----\n");
    printf("Aqui iremos calcular seu peso ideal.\n");
    printf("Pra começarmos você é:\n1 - Homen\n2 - Mulher?\n");
    scanf("%d", &sexo);

    switch (sexo) {

        case 1:
            printf("Certo, você é Homen, digite sua altura por favor: \n");
            scanf("%f", &altura);

            resutlado = (ideal_homen * altura) - 58;
            printf("Seu peso ideal é:%3.f\n", resutlado);
        break;

        case 2:
            printf("Certo, você é Mulher, digite sua altura por favor: \n");
            scanf("%f", &altura);

            resutlado = (ideal_mulher * altura)  - 44.7;
            printf("Seu peso ideal é:%3.f\n", resutlado);
        break;

        default:
        printf("Opção inbvalida!!!\n");
        break;
    }

    return 0;
}
