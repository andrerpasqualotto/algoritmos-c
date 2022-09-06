#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;
    printf("Digite seu salario\n");
    scanf("%f", &salario);
    float salario_aumentado = 0.00;
    salario_aumentado = salario * 1.15;
    float salario_descontado;
    salario_descontado = salario_aumentado * 0.92;

    printf("O salario inicial era: R$ %.2f\n", salario);
    printf("O salario com aumento: R$ %.2f\n", salario_aumentado);
    printf("O salario com desconto de imposto: R$ %.2f", salario_descontado);
    return 0;
}
