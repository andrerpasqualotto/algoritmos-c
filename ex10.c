#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x1;
    int x2;
    int y1;
    int y2;

    printf("Digite a posicao X do primeiro ponto: ");
    scanf("%d", &x1);
    printf("Digite a posicao Y do primeiro ponto: ");
    scanf("%d", &y1);
    printf("Digite a posicao X do segundo ponto: ");
    scanf("%d", &x2);
    printf("Digite a posicao Y do segundo ponto: ");
    scanf("%d", &y2);
    //hipotenusa da diferença dos pontos
    float distancia;
    distancia = sqrt((double)(pow(x1-x2, 2) + pow(y1-y2, 2)));

    printf("A distancia entre os dois pontos é de: %f", distancia);
    return 0;
}
