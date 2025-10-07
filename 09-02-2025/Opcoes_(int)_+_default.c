#include <stdio.h>

int main() {
    int opcao;

    printf("\n Digite nro do trimestre: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Verao \n");
    break;

    case 2:
        printf("Outono \n");
    break;
    
    case 3:
        printf("Inverno \n");
    break;

    case 4:
        printf("Primavera \n");
    break;
    
    default:
        printf("Trimestre Invalido!!!");    
    break;
    }
    return 0;
}