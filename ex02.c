#include <stdio.h>
#include <stdlib.h>



int main()
{
    printf("Exercicio 02: \n");
    printf("Quantos cavalos serao comprados para o haras?\n");
    int ferradura = 0;
    scanf("%d", &ferradura);
    ferradura = ferradura * 4;
    printf("Sao necessarias %d ferraduras.", ferradura);

    return 0;
}
