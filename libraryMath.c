#include <stdio.h>
#include <math.h>

int x;
float seno;
float coseno;

int main()
{
    printf("Ingrese un numero: ");
    scanf("%d", &x);
    printf("El numero ingresado es: %d\n", x);
    seno = sin(x);
    coseno = cos(x);
    printf("El coseno de %d es %f y el seno %f\n", x, coseno, seno);
    return 0;
}