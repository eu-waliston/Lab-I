/*

6) Depois de fazer o primeiro contato com uma civilização extraterrestre (os
termopilitas), você ficou encarregado de fazer a conversão de datas entre as
duas civilizações. Por coincidência o ano dos termopilitas tem a mesma
duração do ano terrestre, mas é dividido de maneira diferente: a menor
unidade de tempo é o blip, que dura 3 segundos terrestres. Quarenta blips
fazem um tak, que é a próxima unidade. Quinze taks fazem um salek, e 30
saleks fazem um mazel. Oito mazels fazem um brat e 73 brats completam o
ano inteiro. Faça um programa que ofereça um menu com as seguintes
opções:

    a) converter de terrestre para termopilita: para essa opção, o programa
    deve ler uma data terrestre no formato dia mês hora min seg, calcular e
    imprimir a data no formato termopilita: brat mazel salek tak blip.
    b) converter de termopilita para terrestre: para essa opção, o programa
    deve ler uma data termopilita no formato brat mazel salek tak blip,
    calcular e imprimir a data no formato terrestre (dia mês hora min seg).
    c) construa uma tabela de conversões das unidades de tempo
    termopilitas, dizendo o quanto cada uma delas vale nas unidades
    terrestres. Exemplos de possíveis valores para constar na tabela:

                        30 segundos → ?
                        2 minutos → ?
                        30 minutos → ?
                        15 horas → ?
                        5 dias → ?
                        1 ano → ?

*/

#include <stdio.h>

// Constantes de conversão
#define SEGUNDOS_BLIP 3
#define BLIPS_TAK 40
#define TAKS_SALEK 15
#define SALEKS_MAZEL 30
#define MAZELS_BRAT 8
#define BRATS_ANO 73

// Converte tudo em segundos para facilitar
#define SEGUNDOS_TAK (BLIPS_TAK * SEGUNDOS_BLIP)       // 120
#define SEGUNDOS_SALEK (TAKS_SALEK * SEGUNDOS_TAK)     // 1800
#define SEGUNDOS_MAZEL (SALEKS_MAZEL * SEGUNDOS_SALEK) // 54000
#define SEGUNDOS_BRAT (MAZELS_BRAT * SEGUNDOS_MAZEL)   // 432000
#define SEGUNDOS_ANO (BRATS_ANO * SEGUNDOS_BRAT)       // 31536000

int main() {
    int opcao;

    printf("Menu:\n");
    printf("1) Converter de terrestre para termopilita\n");
    printf("2) Converter de termopilita para terrestre\n");
    printf("3) Tabela de conversoes\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        // Data terrestre -> termopilita
        int dia, mes, hora, minuto, segundo;
        printf("Digite a data terrestre (dia mes hora min seg): ");
        scanf("%d %d %d %d %d", &dia, &mes, &hora, &minuto, &segundo);

        // Converter tudo para segundos (ano de 365 dias)
        long long totalSeg = ((mes - 1) * 30LL * 24 * 3600) // aproximação: mês com 30 dias
                           + ((dia - 1) * 24LL * 3600)
                           + (hora * 3600LL)
                           + (minuto * 60LL)
                           + segundo;

        // Converter para termopilita
        int brat = totalSeg / SEGUNDOS_BRAT; totalSeg %= SEGUNDOS_BRAT;
        int mazel = totalSeg / SEGUNDOS_MAZEL; totalSeg %= SEGUNDOS_MAZEL;
        int salek = totalSeg / SEGUNDOS_SALEK; totalSeg %= SEGUNDOS_SALEK;
        int tak   = totalSeg / SEGUNDOS_TAK;   totalSeg %= SEGUNDOS_TAK;
        int blip  = totalSeg / SEGUNDOS_BLIP;

        printf("Data termopilita: %d brat %d mazel %d salek %d tak %d blip\n",
               brat, mazel, salek, tak, blip);

    } else if (opcao == 2) {
        // Data termopilita -> terrestre
        int brat, mazel, salek, tak, blip;
        printf("Digite a data termopilita (brat mazel salek tak blip): ");
        scanf("%d %d %d %d %d", &brat, &mazel, &salek, &tak, &blip);

        // Converter tudo para segundos terrestres
        long long totalSeg = brat * (long long)SEGUNDOS_BRAT
                           + mazel * (long long)SEGUNDOS_MAZEL
                           + salek * (long long)SEGUNDOS_SALEK
                           + tak * (long long)SEGUNDOS_TAK
                           + blip * (long long)SEGUNDOS_BLIP;

        // Agora converte de volta para calendário terrestre simples
        int mes = totalSeg / (30LL * 24 * 3600); totalSeg %= (30LL * 24 * 3600);
        int dia = totalSeg / (24LL * 3600); totalSeg %= (24LL * 3600);
        int hora = totalSeg / 3600; totalSeg %= 3600;
        int minuto = totalSeg / 60; totalSeg %= 60;
        int segundo = totalSeg;

        printf("Data terrestre: %d mes %d dia %d hora %d min %d seg\n",
               mes+1, dia+1, hora, minuto, segundo);

    } else if (opcao == 3) {
        // Tabela de conversão
        printf("Tabela de conversoes (terrestre -> termopilita):\n");
        printf("30 segundos = %.2f blips\n", 30.0 / SEGUNDOS_BLIP);
        printf("2 minutos   = %.2f taks\n", 120.0 / SEGUNDOS_TAK);
        printf("30 minutos  = %.2f saleks\n", 1800.0 / SEGUNDOS_SALEK);
        printf("15 horas    = %.2f mazels\n", 54000.0 / SEGUNDOS_MAZEL);
        printf("5 dias      = %.2f brats\n", 432000.0 / SEGUNDOS_BRAT);
        printf("1 ano       = %.2f anos termopilitas\n", 31536000.0 / SEGUNDOS_ANO);
    } else {
        printf("Opcao invalida!\n");
    }

    return 0;
}
