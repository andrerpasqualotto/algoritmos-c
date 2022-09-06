#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, a;
    printf("Digite um numero para ver sua tabuada: ");
    scanf("%d", &numero);

    for( a = 1; a < 11; a = a + 1 ){
      printf("%d x %d = %d\n", numero, a, numero * a);
   }
    return 0;
}
