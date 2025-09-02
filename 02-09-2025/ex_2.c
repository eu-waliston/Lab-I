/*

2) Leia dois valores e um caractere, representando uma operação
(soma, subtração, multiplicação e divisão). A seguir, o programa
deve realizar a operação solicitada e exibir o resultado. Obs.: na
operação de divisão, se o denominador for zero, o programa deve
informar que a operação é inválida.

*/

#include <stdio.h>

int main() {
    int N1, N2, menu_op,resultado;

    printf("Digite um numero: ");
    scanf("%d", &N1);

    printf("Digite outro numero: ");
    scanf("%d", &N2);

    printf("\n Qual operacao deseja realziar? \n1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\nOpção: ");
    scanf("%d", &menu_op);

    switch (menu_op)
    {
    case 1:
        resultado = N1 + N2;
        printf("O Resultado é : %d \n", resultado);
    break;
    
    case 2:
        resultado = N1 - N2;
        printf("O Resultado é : %d \n", resultado);  
    break;

    case 3:
        resultado = N1 * N2;
        printf("O Resultado é : %d \n", resultado); 
    break;

    case 4:  
        resultado = N1 / N2;
        printf("O Resultado é : %d \n", resultado);   
    break;
    default:
        printf("Opção Inválida! \n");
        break;
    }
}