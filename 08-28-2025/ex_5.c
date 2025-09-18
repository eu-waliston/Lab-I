
/*

5) Os computadores foram inventados para realizar cálculos rapidamente e
atendem a esse requisito de maneira extraordinária. Porém, nem sempre o
computador consegue representar todos os números dentro de sua memória.
Caso alguma conta executada pelo computador dê um resultado acima de sua
capacidade, ocorre overflow, que é quando o computador faz uma conta e o
resultado não pode ser representado, por ser maior do que o valor máximo
permitido. Por exemplo, se um computador só pode representar números
menores do que 1023 e mandamos ele executar a conta 1022 + 5, vai ocorrer
overflow. Faça um programa que leia o maior número que um computador
consegue representar. Em seguida, leia um valor inteiro, seguido de um
espaço em branco, seguido de um caractere (que pode ser ‘+’ ou ‘*’,
representando os operadores de adição e multiplicação, respectivamente),
seguido de um espaço em branco, seguido de outro inteiro. Essa linha
representa uma expressão (A+B ou A*B). O programa deve imprimir a palavra
“Overflow”, se o resultado da expressão causar um overflow, ou “Ok”, caso
contrário.

*/

#include <stdio.h>

int main() {
    long long max;        // maior número que o computador pode representar
    long long A, B;       // valores da expressão
    char op;              // operador (+ ou *)

    // Lê o valor máximo
    scanf("%lld", &max);

    // Lê a expressão no formato: A operador B
    scanf("%lld %c %lld", &A, &op, &B);

    long long resultado;

    if (op == '+') {
        resultado = A + B;     // soma
    } else if (op == '*') {
        resultado = A * B;     // multiplicação
    } else {
        printf("Operador invalido!\n");
        return 1; // encerra o programa se operador não for válido
    }

    // Verifica se houve overflow
    if (resultado > max) {
        printf("Overflow\n");
    } else {
        printf("Ok\n");
    }

    return 0;
}
