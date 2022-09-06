#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp_celsius;
    float temp_fahrenheit;

    printf("Digite a temperatura em Celsius:\n");
    scanf("%d", &temp_celsius);

    temp_fahrenheit = (temp_celsius *1.8) + 32;
    printf("A temperatura %d graus Celsius e igual a %f graus Fahrenheit", temp_celsius, temp_fahrenheit);

    return 0;
}
