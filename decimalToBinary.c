#include <stdio.h>
#include <stdlib.h>

int binaryNumber[12], i, n;

int main()
{
    printf("Ingrese un numero para convertirlo a decimal: ");
    scanf("%d", &n);
    for (i = 0; n > 0; i++)
    {
        binaryNumber[i] = n%2;
        n = n/2;
    }
    printf("i = %d\n", i);
    printf("El numero introducido en binario es: ");
    for (i = i-1; i >= 0; i--)
    {
        printf("%d", binaryNumber[i]);
    }
    printf("\n");

    return 0;
}