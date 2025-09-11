/*

3) Leia a matrícula e 3 notas de 10 alunos. Para cada um, calcule a
média ponderada (pesos 4, 3 e 3), mostre a matrícula, as 3 notas, a
média e uma mensagem "APROVADO" se a média for maior ou
igual a 7 e "REPROVADO“, caso contrário.

*/

#include <stdio.h>

int main()
{
    int matricula, i;
    float nota1, nota2, nota3, media;

    for (i = 0; i < 10; i++)
    {
        printf("Digite a matrícula do aluno %d: ", i + 1);
        scanf("%d", &matricula);

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);

        // Calcula a média ponderada
        media = (nota1 * 4 + nota2 * 3 + nota3 * 3) / 10;

        // Exibe os resultados
        printf("\nMatrícula: %d\n", matricula);
        printf("Notas: %.2f, %.2f, %.2f\n", nota1, nota2, nota3);
        printf("Média: %.2f\n", media);

        if (media >= 7.0)
        {
            printf("APROVADO\n\n");
        }
        else
        {
            printf("REPROVADO\n\n");
        }
    }

    return 0;
}