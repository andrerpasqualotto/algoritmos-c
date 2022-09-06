#include <stdio.h>
#include <stdlib.h>


//Calcular largura de um terreno
int main()
{
    float comprimento = 0;
    float largura = 0;
	
	//entrada de dados
    
    printf("Exercicio 01\n");
    printf("Digite o comprimento do terreno:\n");
    scanf("%f", &comprimento);
    printf("Digite a largura do terreno:\n");
    scanf("%f", &largura);
	
	//resultado
	
    float resultado = 0;

    resultado = comprimento * largura;
    printf("A area do terreno e: %.0f metros quadrados.", resultado);

    return 0;
}
