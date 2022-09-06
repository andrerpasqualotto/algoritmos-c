#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salario, vendas;
    float comissao;



    printf("Digite o valor do salario:");
    scanf("%d", &salario);

    printf("Digite o valor das vendas:");
    scanf("%d", &vendas);


    comissao = vendas * 0.04;

    printf("O salario fixo e de R$%d\n", salario);
    printf("A comissao e de R$%.2f\n", comissao);
    printf("O salario total e de R$%.2f\n", salario+comissao);
    return 0;

}
