#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Quantos R$ de gasolina você quer colocar?\n");
    float valor_gasolina;
    scanf("%f", &valor_gasolina);
    float litro_gasolina = 6.75;
    printf("Qual o valor do litro de gasolina?\n");
    scanf("%f", &litro_gasolina);

    float litros_tanque;
    litros_tanque = (valor_gasolina / litro_gasolina);

    printf("Voce pode colocar %f litros de gasolina com o valor de %f R$.", litros_tanque, valor_gasolina);
    return 0;
}
