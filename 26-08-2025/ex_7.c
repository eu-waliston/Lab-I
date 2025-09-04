/*
7) Leia 2 números e um caractere, representando as operações +,
-, * e /. O programa deve imprimir o resultado da operação
efetuada. Teste seu programa com a entrada: 3.6, 4 e ‘/’. A
seguir, teste com 3.2, 0.0 e ‘/’ e corrija seu programa para
imprimir uma mensagem caso não seja possível efetuar um
cálculo.
 */

#include <stdio.h>

int main()
{
   int n1, n2, mais, menos, vezes, divisao;
   char opcao;

   printf("Digite o 1º numero: ");
   scanf("%d", &n1);
   printf("Digite o 2º numero: ");
   scanf("%d", &n2);

   printf("Escolha o que ira fazer: \n");
   printf("- [menos]\n+ [mais]\n* [vezes]\n/ [divisão]\n");

   scanf(" %c", &opcao);

   switch (opcao)
   {
   case '-':
      menos = n1 - n2;
      printf("%d - %d = %d \n", n1, n2, menos);
      break;

   case '+':
      mais = n1 + n2;
      printf("%d + %d = %d \n", n1, n2, mais);
      break;

   case '*':
      vezes = n1 * n2;
      printf("%d * %d = %d \n", n1, n2, vezes);
      break;

   case '/':
      divisao = n1 / n2;
      printf("%d / %d = %d \n", n1, n2, divisao);
      break;

   default:
      printf("Opção Inválida!!! \n");
      break;
   }

   return 0;
}
