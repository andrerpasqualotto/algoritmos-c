#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pi=3.14;
    float raio;
    printf("Para calcular a area digite o raio da pizza:");
    scanf("%f", &raio);

    float area = 0;

    area = pi * (pow(raio, 2));
    printf("A area da pizza e: %f", area);
    return 0;
}
