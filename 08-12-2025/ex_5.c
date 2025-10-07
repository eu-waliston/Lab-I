#include <stdio.h>

int main() {
    char nome[30];
    int idade;

    printf("Digite seu primeiro nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Ola %s\n seja vem-vindo, voce te %d anos??",nome, idade );

}