#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salario, c1, c2;

    salario = 1200;
    c1=200;
    c2=120;
    float restante;

    restante = 1200 - (c1+c2)*1.02;

    printf("O restante do salario de Joao e: R$ %.2f",restante);

    return 0;
}
