#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, altura_predio, sombra, sombra_predio;
    printf("Qual sua altura em metros?");
    scanf("%f", &altura);
    printf("Qual o comprimento da sua sombra em metros?");
    scanf("%f", &sombra);
    printf("Qual o comprimento da sombra do predio em metros?");
    scanf("%f", &sombra_predio);



    altura_predio = (altura*sombra_predio)/sombra;

    printf("A altura do predio e: %.2f metros", altura_predio);


    return 0;
}
