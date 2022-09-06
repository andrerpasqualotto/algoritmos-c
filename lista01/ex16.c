#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sandubas = 0;
    printf("Digite quantos sanduiches para fazer?\n");
    scanf("%d", &sandubas);

    //100g queijo, 50g presunto, 100g carne em kgs já convertidos
    float queijo = 0.1;
    float presunto = 0.05;
    float carne = 0.1;

    queijo = queijo * sandubas;
    presunto = presunto * sandubas;
    carne = carne * sandubas;

    printf("Voce vai precisar de %.3f kgs de queijo.\n", queijo);
    printf("Voce vai precisar de %.3f kgs de presunto.\n", presunto);
    printf("Voce vai precisar de %.3f kgs de carne.", carne);
    return 0;
}
