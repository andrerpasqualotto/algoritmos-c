#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nascimento, atual;


    printf("Digite seu ano de nascimento:");
    scanf("%d", &nascimento);

    printf("Digite o ano atual:");
    scanf("%d", &atual);

    int anos, meses, dias, semanas;
    anos = atual-nascimento;
    meses = anos * 12;
    dias = anos * 365;
    semanas = anos * 52;


    printf("Voce tem %d anos de idade.\n", anos);
    printf("Voce tem %d meses de idade.\n", meses);
    printf("Voce tem %d semanas de idade.\n", semanas);
    printf("Voce tem %d dias de idade.\n", dias);


    return 0;
}
