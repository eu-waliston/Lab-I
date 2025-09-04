/*

7) Supondo o jogo Dois ou Um, utilizado para determinar um ganhador entre três
ou mais jogadores. Onde cada jogador escolhe um valor entre dois ou um; a um comando (geralmente um dos competidores anuncia em voz alta "Dois
ou... Um!"), todos os participantes mostram o valor escolhido, utilizando uma
das mãos. O ganhador é aquele que tiver escolhido um valor diferente de
todos os outros; se não há um jogador com valor diferente de todos os outros
(por exemplo todos os jogadores escolhem dois, ou um grupo de jogadores
escolhe dois e outro grupo escolhe um), não há ganhador. Ana, Bob e Caren
são grandes amigos e jogam “Dois ou Um” a toda hora. Faça um programa
que leia três inteiros A, B e C, indicando respectivamente os valores
escolhidos por Ana, Bob e Caren, e determine se há um ganhador, e nesse
caso imprima seu nome. Caso não haja vencedor, deve ser impresso o
caractere ‘*’.

Ex.: Entrada 1 1 2  Saída Caren

Entrada 2 2 2       Saída *

Entrada 2 1 1       Saída Ana


*/

#include <stdio.h>

int main() {
    int A, B, C;

    // Lê os valores escolhidos
    scanf("%d %d %d", &A, &B, &C);

    if (A != B && A != C) {
        printf("Ana\n");
    } else if (B != A && B != C) {
        printf("Bob\n");
    } else if (C != A && C != B) {
        printf("Caren\n");
    } else {
        printf("*\n");
    }

    return 0;
}
