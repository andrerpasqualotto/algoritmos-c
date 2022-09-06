#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double cateto01, cateto02;

    printf("Digite o valor do primeiro cateto: \n");
    scanf("%lf", &cateto01);

    printf("Digite o valor do segundo cateto: \n");
    scanf("%lf", &cateto02);

    double hipotenusa;
    hipotenusa = sqrt(cateto01 * cateto01 + cateto02 * cateto02);

    printf("A hipotenusa e: %f", hipotenusa);


    return 0;
}
