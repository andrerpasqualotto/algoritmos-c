#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kg_prato = 0;
    float preco_kg = 12.00;

    printf("Quantos kgs de comida ?\n");
    scanf("%f", &kg_prato);

    float valor_pagar = kg_prato * preco_kg;
    printf("Voce deve pagar R$%.2f reais", valor_pagar);
    return 0;
}
