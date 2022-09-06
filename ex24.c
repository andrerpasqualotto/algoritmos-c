#include <stdio.h>
#include <stdlib.h>

int main()
{
    int refresco;
    float maracuja;
    float agua;
    printf("Quantos litros de refresco voce deseja fazer?\n");
    scanf("%d", &refresco);
    maracuja = refresco * 0.2;
    agua = refresco * 0.8;

    printf("Voce vai precisar de %.2f litros de agua e %.2f litros de suco de maracuja.", agua, maracuja);

    return 0;
}
