/*

4) Faça um programa que leia o preço do litro de álcool, o preço do litro de
gasolina e os quilômetros por litro que um carro bi-combustível realiza com
cada um desses combustíveis e determine se é mais econômico abastecer o
carro com álcool ou gasolina. No caso de não haver diferença de custo entre
abastecer com álcool ou gasolina, o motorista prefere utilizar gasolina.

*/

#include <stdio.h>

int main()
{
    double precoAlcool, precoGasolina;
    double kmPorLitroAlcool, kmPorLitroGasolina;
    double custoPorKmAlcool, custoPorKmGasolina;

    printf("Digite o preco do litro de alcool: R$ ");
    scanf("%lf", &precoAlcool);
    printf("Digite o preco do litro de gasolina: R$ ");
    scanf("%lf", &precoGasolina);
    printf("Digite os km por litro com alcool: ");
    scanf("%lf", &kmPorLitroAlcool);
    printf("Digite os km por litro com gasolina: ");
    scanf("%lf", &kmPorLitroGasolina);

    custoPorKmAlcool = precoAlcool / kmPorLitroAlcool;
    custoPorKmGasolina = precoGasolina / kmPorLitroGasolina;

    if(custoPorKmAlcool < custoPorKmGasolina) {
        printf("Mais economico abastecer com alcool. \n");
    } else {
        printf("Mais economico abastecer com gasolina. \n");
    }
}