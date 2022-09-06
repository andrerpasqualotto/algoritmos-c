#include <stdio.h>
#include <stdlib.h>

int main()
{
    int raio;
    int altura;

    printf("Digite o raio do cilindro em cm: \n");
    scanf("%d", &raio);

    printf("Digite a altura do cilindro em cm: \n");
    scanf("%d", &altura);

    float volume_cilindro;
    volume_cilindro = 3.1415 * (raio*raio) * altura;
    printf("O volume do cilindro é de %f centimetros cubicos, ou %f metros cubicos", volume_cilindro, volume_cilindro/1000000);

    return 0;
}
