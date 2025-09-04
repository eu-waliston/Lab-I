/*

2) Detecção de colisão é uma das operações mais comuns (e importantes) em
jogos eletrônicos. O objetivo, basicamente, é verificar se dois objetos quaisquer
colidiram, ou seja, se a intersecção entre eles é diferente de vazio. Isso pode ser
usado para saber se duas naves colidiram, se um monstro bateu numa parede,
se um personagem pegou um item, etc.
Para facilitar as coisas, muitas vezes os objetos são aproximados por figuras
geométricas simples (esferas, paralelepípedos, triângulos etc). Neste problema,
os objetos são aproximados por retângulos num plano.
Um retângulo é definido pelas coordenadas de dois pontos no plano: o canto
inferior esquerdo tem coordenadas (x0,y0) e o canto superior direito tem
coordenadas (x1,y1), como mostra a figura abaixo.

Restrições:
0 ≤ x0 < x1 ≤ 1.000.000
0 ≤ y0 < y1 ≤ 1.000.000

Entrada: A entrada contém duas linhas. Cada linha contém quatro inteiros x0, y0,
x1, y1, representando as coordenadas do canto inferior esquerdo e do canto
superior direito de um retângulo. Os lados do retângulo são sempre paralelos aos
eixos x e y.
Saída: Deve imprimir uma única linha, contendo o número 1 (um) caso haja
intersecção entre os retângulos ou o número 0 (zero) caso não haja intersecção.
Faça um programa que chame uma função para resolver o problema acima. A
função deve realizar tanto a entrada de dados (leitura dos 4 valores inteiros),
como a saída de dados (impressão do resultado da verificação de intersecção).

Exemplos:

Entrada     saida

0 0 1 1     1
1 1 2 2

0 0 2 2     1
1 1 3 3

0 0 1 1     0
2 2 0 3

*/