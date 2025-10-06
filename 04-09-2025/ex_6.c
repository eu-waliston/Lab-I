/*

6) Deseja-se organizar fotos em um álbum. Para economizar páginas do álbum,
deve-se colar duas fotos por página do álbum. Como as fotos são retangulares,
as fotos podem ser coladas giradas (mas sempre com lados paralelos aos da página do álbum), 
mas elas devem sempre ficar inteiramente contidas no interior
da página, e não devem se sobrepor. Em geral, das muitas formas de posicionar
as fotos do álbum só algumas (ou nenhuma) satisfazem estas restrições, então
pode ser difícil decidir se é possível colar as duas fotos em uma mesma página
do álbum. Faça um programa que chame uma função que leia a largura e altura
da página do álbum, a largura e altura da foto 1 e a altura e largura da foto 2. A
seguir, a função deve verificar se é possível colar as duas fotos na página do
álbum. Esse resultado deve ser retornado para a função main, que irá realizar a
impressão da saída.

Por exemplo, cada página pode ser 5 x 7, e duas fotos são 3 x 4. Nesse caso, é
possível colar as duas fotos:

Ex: Entrada
    7   5
    3   4
    3   4
    
    Saida
    S

    Entrada
    13  8
    4   9
    6   5

    Saida
    N

*/


#include <stdio.h>

// Função que calcula o preço final da entrada
float calculaPreco(float precoNormal, char dia, char musica) {
    float precoFinal = precoNormal;

    // Desconto nos dias D, 2, 3
    if (dia == 'D' || dia == '2' || dia == '3') {
        precoFinal = precoNormal * 0.75;
    }

    // Acréscimo se tiver música ao vivo
    if (musica == 'S') {
        precoFinal = precoFinal * 1.15;
    }

    return precoFinal;
}

int main() {
    float precoNormal, precoFinal;
    char dia, musica;

    // Entrada
    printf("Digite o preco normal da entrada: ");
    scanf("%f", &precoNormal);

    printf("Digite o dia da semana (D, 2, 3, 4, 5, 6, S): ");
    scanf(" %c", &dia);

    printf("Ha musica ao vivo? (S/N): ");
    scanf(" %c", &musica);

    // Chamada da função
    precoFinal = calculaPreco(precoNormal, dia, musica);

    // Saída
    printf("Preco a pagar: R$ %.2f\n", precoFinal);

    return 0;
}
