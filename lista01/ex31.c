#include <stdio.h>
#include <stdlib.h>

int main()
{
    int peso;

    printf("Digite seu peso em kg:\n");
    scanf("%d", &peso);

    printf("O peso se a pessoa engordar 15%% e: %.2f kg\n", peso*1.15);
    printf("O peso se a pessoa emagrecer 20%% e: %.2f kg", peso*0.8);
    return 0;
}
