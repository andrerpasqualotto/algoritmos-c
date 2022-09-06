#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b, c;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &a);

    printf("Digite o segundo numero: \n");
    scanf("%d", &b);

    printf("Digite o terceiro numero: \n");

    scanf("%d", &c);
    int resultado = a*b*c;

    printf("O resultado da multiplicacao de %d x %d x %d e igual a %d.", a, b, c, resultado);

    return 0;
}
