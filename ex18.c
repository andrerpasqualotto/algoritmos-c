#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora, hora_extra;

    //entrada de dados

    printf("Digite as horas normais trabalhadas:\n");
    scanf("%d", &hora);
    printf("Digite as horas extra trabalhadas:\n");
    scanf("%d", &hora_extra);

    //calculo salarios
    float salario_bruto = hora * 10 + hora_extra * 15;
    float salario_liq = salario_bruto * 0.9;

    //saidas
    printf("O salario bruto foi R$ %.2f\n", salario_bruto);

    printf("O salario liquido foi R$ %.2f\n", salario_liq);
    return 0;
}
