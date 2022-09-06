#include <stdio.h>
#include <stdlib.h>

int main()
{
    int novelos;
    int blusas;
    printf("Quantos blusas foram feitas?");
    scanf("%d", &blusas);

    srand(time(NULL));

    novelos = rand() % 1000;

    printf("Foram feitas %d blusas. \n", blusas);
    printf("Foi utilizado %d novelos.\n", novelos);
    printf("O número de novelos por blusa foi: %d ", novelos/blusas);
    return 0;
}
