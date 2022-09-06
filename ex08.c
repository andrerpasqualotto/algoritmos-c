#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota_01;
    float nota_02;
    float nota_03;
    printf("Digite sua primeira nota(0-100): ");
    scanf("%f", &nota_01);

    printf("Digite sua segunda nota(0-100): ");
    scanf("%f", &nota_02);

    printf("Digite sua terceira nota(0-100): ");
    scanf("%f", &nota_03);


    float media;
    media = (nota_01 + (nota_02*2) + (nota_03*3))/6;
    printf("Sua media foi %.2f !", media);
    return 0;
}
