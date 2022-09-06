#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    float resultado;

    printf("Digite o primeiro numero:\n");
    scanf("%f", &a);

    printf("Digite o segundo numero: \n");
    scanf("%f", &b);

    resultado = a/b;

    printf("O resultado da divisao de %f / %f e igual a %f.", a, b,resultado);

    return 0;
}
