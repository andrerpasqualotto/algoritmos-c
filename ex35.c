#include <stdio.h>
#include <stdlib.h>

int main()
{
    int diagonal1, diagonal2;
    printf("Digite a diagonal maior:\n");
    scanf("%d", &diagonal1);

    printf("Digite a diagonal menor:\n");
    scanf("%d", &diagonal2);


    printf("A area do losango e: %d.", diagonal1*diagonal2/2);
    return 0;
}
