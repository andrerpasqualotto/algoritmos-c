#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome;
    printf("Qual seu nome?\n");
    scanf("%c", &nome);
    int idade;
    printf("Qual a sua idade?\n");
    scanf("%d", &idade);

    int dias = idade * 365;
    printf("%c, voce viveu %d dias!", nome, dias);
    return 0;
}
