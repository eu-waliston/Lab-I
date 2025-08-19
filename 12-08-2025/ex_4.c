#include <stdio.h>

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    printf("Voce digitou: %s\n", palavra);
    printf("Entre aspas:: \"%s\"\n", palavra);

    return 0;
}