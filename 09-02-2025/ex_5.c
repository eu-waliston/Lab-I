/*

5) Leia um peso na Terra e o número de um planeta, calcule e imprima
o valor de seu peso neste planeta. A tabela abaixo exibe os planetas
juntamente com o valor das gravidades relativas à Terra. Para calcular
o peso no planeta, utilize a fórmula abaixo:

#   Gravidade relativa      Planeta
1       0,37                Mercirio
2       0,88                Venus
3       0,38                Marte
4       2,64                Júpiter
5       1,15                Saturno
6       1,17                Urano

Obs: pesoPlaneta = pesoTera . graviddade / 10
*/

#include <stdio.h>

int main()
{
    float mercurio = 0.37;
    float venus = 0.88;
    float marte = 0.38;
    float jupiter = 2.64;
    float saturno = 1.15;
    float urano = 1.17;
    float peso_terra, peso_planeta;
    int opcao;

    printf(" ====== Galaxy Weigth ====== \n");
    printf("Descubra o peso da Terra em outros planetas!\n");
    printf("Escolha o planeta que ira testar: \n1 - Mercurio\n2 - Venus\n3 - Marte\n4 - Jupiter\n5 - Saturno\n6 - Urano\nOpção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {

    case 1:
        printf("\nVocê escolheu Mercurio!\n");
        printf("Vamos começar digitando o peso da terra: \n");
        scanf("%f", &peso_terra);

        peso_planeta = peso_terra * mercurio / 10;

        printf("O pesso da Terra em Mercurio é: %f ", peso_planeta);

        break;
    case 2:

        printf("\nVocê escolheu Venus!\n");
        printf("Vamos começar digitando o peso da terra: \n");
        scanf("%f", &peso_terra);

        peso_planeta = peso_terra * venus / 10;

        printf("O pesso da Terra em Venus é: %f ", peso_planeta);

        break;
    case 3:

        printf("\nVocê escolheu Marte!\n");
        printf("Vamos começar digitando o peso da terra: \n");
        scanf("%f", &peso_terra);

        peso_planeta = peso_terra * marte / 10;

        printf("O pesso da Terra em Marte é: %f ", peso_planeta);

        break;
    case 4:

        printf("\nVocê escolheu Jupiter!\n");
        printf("Vamos começar digitando o peso da terra: \n");
        scanf("%f", &peso_terra);

        peso_planeta = peso_terra * jupiter / 10;

        printf("O pesso da Terra em Jupiter é: %f ", peso_planeta);

        break;
    case 5:

        printf("\nVocê escolheu Saturno!\n");
        printf("Vamos começar digitando o peso da terra: \n");
        scanf("%f", &peso_terra);

        peso_planeta = peso_terra * saturno / 10;

        printf("O pesso da Terra em Saturno é: %f ", peso_planeta);

        break;
    case 6:

        printf("\nVocê escolheu Urano!\n");
        printf("Vamos começar digitando o peso da terra: \n");
        scanf("%f", &peso_terra);

        peso_planeta = peso_terra * urano / 10;

        printf("O pesso da Terra em Urano é: %f ", peso_planeta);

        break;

    default:
        printf("Opção Inválida!");
        break;
    }

    return 0;
}