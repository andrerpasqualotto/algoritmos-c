#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_frangos;

    printf("Digite quantos frangos existem na granja: \n");
    scanf("%d", &num_frangos);

    float custo = num_frangos * 11.00;
    float custo_chip = num_frangos * 4.00;
    float custo_alim = num_frangos * (3.50*2);

    printf("O valor dos chips: R$ %.2f\n", custo_chip);
    printf("O valor da anilha de alimentos: R$ %.2f\n", custo_alim);
    printf("O valor total para marcar os frangos e: R$ %.2f\n", custo);

    return 0;
}

