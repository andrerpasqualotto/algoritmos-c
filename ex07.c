#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias = 0;
    int mes = 0;

    printf("Que dia do mes eh hoje? (1-30)\n");
    scanf("%d",&dias);
    printf("Em que mes estamos? (1-12)\n");
    scanf("%d",&mes);

    int dias_percorridos;
    dias_percorridos = ((mes - 1)*30) + dias;
    printf("O numero de dias percorridos desde o inicio do ano eh: %d dias", dias_percorridos);
    return 0;
}
