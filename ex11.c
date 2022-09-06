#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total_dias;
    int mes;
    printf("Quantos dias sem acidentes de trabalho?:\n");
    scanf("%d", &total_dias);
    int anos;
    int dias;
    anos = total_dias/360;
    mes = (total_dias%360)/30;
    dias = (total_dias%360)%30;
    printf("Total de anos: %d \nTotal de meses: %d \nTotal de dias %d.", anos, mes, dias);


}
