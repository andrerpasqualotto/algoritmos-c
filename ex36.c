#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario_minimo, salario_funcionario;

    printf("Digite o valor do salario minimo:");
    scanf("%f", &salario_minimo);
    printf("Digite o valor do salario do funcionario:");
    scanf("%f", &salario_funcionario);

    float qtd_salario = salario_funcionario / salario_minimo;


    printf("O funcionario ganha %.1f salarios minimos.", qtd_salario);





    return 0;
}
