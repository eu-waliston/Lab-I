/*

8) Leia três valores correspondentes às medidas dos lados (a, b e c)
de uma figura geométrica, e verifique se eles formam ou não um
triângulo. Caso os valores formem triângulo calcule e exiba a sua
área. Caso contrário, informe que eles “Não formam um triângulo”.
Obs.: Para construir um triângulo é necessário que a medida de
qualquer um dos lados seja menor que a soma das medidas dos
outros dois e maior que o valor absoluto da diferença entre essas
medidas. A área de um triângulo pode ser calculada em função de
seus lados:

*/

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, s, area;

    printf("Digite os tres lados do triangulo: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Verificação da condição de existência do triângulo
    if ((fabs(b - c) < a && a < b + c) &&
        (fabs(a - c) < b && b < a + c) &&
        (fabs(a - b) < c && c < a + b)) {
        
        // Fórmula de Heron
        s = (a + b + c) / 2.0;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        
        printf("Os valores formam um triangulo.\n");
        printf("A area do triangulo = %.2lf\n", area);
    } else {
        printf("Nao formam um triangulo.\n");
    }

    return 0;
}


