#include <stdio.h>
#include <stdlib.h>

int main()
{
    int peso;
    printf("Digite seu peso em kg:\n");
    scanf("%d", &peso);

    printf("Seu peso em gramas e: %d", peso*1000);

    return 0;
}
