#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 123;
    printf("Digite um numero de 3 digitos: ");
    scanf("%d", &numero);
    int dezena;
    int centena;
    int unidade;

    unidade = numero % 10;
    dezena = ((numero/10)%10);
    centena = (numero - (dezena*10) - unidade)/100;
    printf("O numero e: %d \n", numero);
    printf("Digito da unidade: %d \n", unidade);
    printf("Digito da dezena: %d \n", dezena);
    printf("Digito da centena: %d \n", centena);
    return 0;
}
