#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base_maior, base_menor, altura;

    printf("Digite o valor da base maior\n");
    scanf("%d", &base_maior);

    printf("Digite o valor da base menor\n");
    scanf("%d", &base_menor);

    printf("Digite o valor da altura\n");
    scanf("%d", &altura);

    float area = ((base_maior + base_menor)*altura)/2;

    printf("A area do trapezio e: %.2f", area);


    return 0;
}
