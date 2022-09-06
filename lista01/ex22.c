#include <stdio.h>
#include <stdlib.h>

int main()
{
    int moeda_1, moeda_5, moeda_10, moeda_25, moeda_50, moeda_real;


    printf("Quantas moedas de 1 centavo ?\n");
    scanf("%d", &moeda_1);

    printf("Quantas moedas de 5 centavos ?\n");
    scanf("%d", &moeda_5);

    printf("Quantas moedas de 10 centavos ?\n");
    scanf("%d", &moeda_10);

    printf("Quantas moedas de 25 centavos ?\n");
    scanf("%d", &moeda_25);

    printf("Quantas moedas de 50 centavos ?\n");
    scanf("%d", &moeda_50);

    printf("Quantas moedas de 1 real ?\n");
    scanf("%d", &moeda_real);

    float total_reais;

    total_reais = (moeda_1 * 1) + (moeda_5 * 5) + (moeda_10 * 10) + (moeda_25 * 25) + (moeda_50 * 50) + (moeda_real * 100);
    total_reais = total_reais/100;
    printf("O total de reais no cofrinho de Pedrinho e R$ %.2f", total_reais);
    return 0;
}
