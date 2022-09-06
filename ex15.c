#include <stdio.h>
#include <stdlib.h>

int main()
{
    float conta = 0;
    printf("Digite o valor total da conta: ");
    scanf("%f", &conta);

    float conta_3 = conta/3;
    int conta_int;
    float conta_felipe;
    conta_int = (int)conta_3;
    printf("conta_int: %d \n", conta_int);
    conta_felipe = conta - 2*conta_int;
    printf("A conta de Carlos e Andre deu: R$ %d para cada.\n", conta_int);
    printf("A conta de Felipe deu: R$ %.2f", conta_felipe );



    return 0;
}
