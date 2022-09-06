#include <stdio.h>
#include <stdlib.h>

int main()
{
    int preco_cp = 10;
    int preco_cm = 12;
    int preco_cg = 15;
    int qtd_cp;
    int qtd_cm;
    int qtd_cg;
    printf("Quantas camisetas P foram vendidas?\n");
    scanf("%d", &qtd_cp);
    printf("Quantas camisetas M foram vendidas?\n");
    scanf("%d", &qtd_cm);
    printf("Quantas camisetas G foram vendidas?\n");
    scanf("%d", &qtd_cg);
    int total;
    total = qtd_cg*preco_cg + qtd_cm*preco_cm + qtd_cp*preco_cp;
    printf("O total de camisetas P vendidas foi: %d \n", qtd_cp);
    printf("O total de camisetas M vendidas foi: %d \n", qtd_cm);
    printf("O total de camisetas G vendidas foi: %d \n", qtd_cg);
    printf("O valor total arrecadado foi: R$%.2f \n",(float)total);
    return 0;
}
