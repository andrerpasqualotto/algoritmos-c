#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco_original;
    printf("Digite o preco do produto: \n");
    scanf("%f", &preco_original);

    float preco_desconto = preco_original * 0.9;

    printf("O preco com desconto de 10%% e: R$ %.2f", preco_desconto);
    return 0;
}
