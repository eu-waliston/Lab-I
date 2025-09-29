/*

4) Implemente um jogo de adivinhar. O programa deve
gerar um número aleatório (entre 0 e 9, inclusos), o
qual deve ser adivinhado pelo usuário. Quando o
usuário conseguir adivinhar, o programa deve exibir
uma mensagem informando o acerto e o número de
tentativas necessárias. A seguir, o programa deve
perguntar se o usuário deseja jogar novamente e, em
caso positivo, possibilitar a repetição do jogo.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função que executa uma rodada do jogo
void jogar() {
    int numeroSecreto, palpite, tentativas = 0;

    // gera número aleatório entre 0 e 9
    numeroSecreto = rand() % 10;

    printf("\nTente adivinhar o número (entre 0 e 9):\n");

    // laço até acertar
    do {
        printf("Seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite != numeroSecreto) {
            printf("Errado! Tente novamente.\n");
        }
    } while (palpite != numeroSecreto);

    printf("\nParabéns! Você acertou o número %d em %d tentativa(s)!\n", numeroSecreto, tentativas);
}

int main() {
    int jogarNovamente;

    // inicializa gerador de números aleatórios
    srand(time(NULL));

    do {
        jogar();  // chama a função do jogo

        printf("\nDeseja jogar novamente? (1 - Sim / 0 - Não): ");
        scanf("%d", &jogarNovamente);

    } while (jogarNovamente == 1);

    printf("\nObrigado por jogar! Até a próxima!\n");

    return 0;
}
