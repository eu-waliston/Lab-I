/*


3) As tarifas de um estacionamento são as seguintes:
    - 1ª e 2ª hora - R$ 1,00 cada
    - 3ª e 4ª hora - R$ 1,40 cada
    - 5ª e seguintes - R$ 2,00 cada
    
O número de horas a pagar é sempre inteiro e arredondado por excesso.

Assim,quem estacionar durante 61 minutos pagará por duas horas, que é o mesmo que
pagaria se tivesse permanecido 120 minutos. Os momentos de chegada ao
estacionamento e saída deste são apresentados na forma de pares de inteiros,
representando horas e minutos. Por exemplo, o par 12 50 representará “dez para
a uma da tarde”. Faça um programa que leia os horários de chegada e saída,
passe-os para uma função que calcule e imprima valor a ser pago pelo
estacionamento. Deverá haver validação de dados. Admite-se que a chegada e a
saída se dão com intervalo não superior a 24 horas. Portanto, se uma dada hora
de chegada for superior à da partida, isso não é uma situação de erro, pois
significa que a partida ocorreu no dia seguinte ao da chegada.

*/
#include <stdio.h>
#include <math.h>

void calculaEstacionamento() {
    int h1,m1,h2,m2;

    printf("Hora e minuto de chegada: ");
    scanf("%d %d", &h1, &m1);

    if(h1 < 0 || h1 > 23 || m1 < 0 || m1 > 59) {
        printf("Horario de chegada inválido!!\n");
        return;
    }

    printf("Hora e minuto de saida: ");
    scanf("%d %d", &h2, &m2);

    if(h2 < 0 || h2 > 23 || m2 < 0 || m2 > 59) {
        printf("Horario de saída inválido!\n");
    }

    int chegadaMin = h1 * 60 + m1;
    int saidaMin = h2 * 60 + m2;

    if(saidaMin < chegadaMin) {
        saidaMin += 24 * 60;
    }

    int duracaoMin = saidaMin - chegadaMin;

    int horas = (int) ceil(duracaoMin / 60.0);

    double valor = 0.0;

    if (horas <= 2) {
        valor = horas * 1.8;
    }
    else if (horas <= 4) {
        valor = 2 * 1.0 + (horas -2) * 1.4;
    }
    else {
        valor = 2 * 1.8 + 2 * 1.4 + (horas - 4) * 2.0;
    }

    printf("Total a pagar: R$ %2.f", valor);
}


int main() {
    calculaEstacionamento(); // chamar a função
    return 0;
}