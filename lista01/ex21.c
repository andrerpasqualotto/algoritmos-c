#include <stdio.h>
#include <stdlib.h>

int main()
{
    int latas, garrafa_600, garrafa_2l;

    printf("Quantas latas de 350ml voce comprou?\n");
    scanf("%d", &latas);

    printf("Quantas garrafas de 600ml voce comprou?\n");
    scanf("%d", &garrafa_600);

    printf("Quantas garrafas de 2l voce comprou?\n");
    scanf("%d", &garrafa_2l);


    float total_litros;
    total_litros = (latas * 0.35) + (garrafa_600 * 0.6) + (garrafa_2l * 2);

    printf("O total de refrigerante comprado foi de %.2f litros", total_litros);
    return 0;
}
