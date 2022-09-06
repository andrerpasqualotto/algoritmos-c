#include <stdio.h>
#include <stdlib.h>

int main()
{
    int paes=0;
    int broas=0;

    printf("Exercicio 03: \n");
    printf("Quantos paes foram vendidos? \n");
    scanf("%d", &paes);
    printf("Quantas broas foram vendidas? \n");
    scanf("%d", &broas);
    float valor_paes = 0.12;
    float valor_broas = 1.50;

    float venda_total = (valor_paes * paes) + (valor_broas * broas);
    float poupanca = venda_total * 0.1;
    printf("A venda total foi de: %.2f R$\n", venda_total);
    printf("O valor para ser depositado na poupanca e: %.2f R$", poupanca);


    return 0;
}
