#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota_1, nota_2;

    printf("Digite a primeira nota:\n");
    scanf("%d", &nota_1);

    printf("Digite a segunda nota: \n");
    scanf("%d", &nota_2);

    int media = ((nota_1 * 2) + (nota_2 * 3))/5;
    printf("Sua media foi %d", media);


    return 0;
}
