/*

3) A ORB (Organização Regional de Bocha) numa tentativa de aumentar a
popularidade da competição decidiu chamar para a Grande Final Mundial o
campeão e o vice-campeão de cada cidade, ao invés de apenas o primeiro
lugar. A ORB não armazenou quem foi o segundo classificado, mas armazenou
a pontuação de todos competidores - que foram apenas três, devido ao
sucesso do campeonato. Sabe-se também que as pontuações de todos
jogadores foram diferentes, de forma que não ocorreu empate entre nenhum
deles. Resta agora descobrir quem foi o vice-campeão. Faça um programa
que leia as pontuações dos três competidores e informe a pontuação do vice-
campeão.

*/

#include <stdio.h>

int main() {
    int p1,p2,p3;
    int vice;

    printf("Digite a pontuação do primeiro competidor: ");
    scanf("%d", &p1);

    printf("Digite a pontuação do segundo competidor: ");
    scanf("%d", &p2);

    printf("Digite a pontuação do terceiro competidor: ");
    scanf("%d", &p3);

    if((p1 > p2 && p1 < p3) || (p1 < p2 && p1 > p3)) {
        vice = p1;
    }
    else if((p2 > p1 && p2 < p3) || (p2 < p1 && p2 > p3)) {
        vice = p2;
    }
    else {
        vice = p3;
    }

    printf("A pontuação do vice-campẽao é: %d\n", vice);
    
    return 0;
}