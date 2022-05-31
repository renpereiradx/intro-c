#include <stdio.h>

int n = 1;
int m = 20;

int main()
{
    // Ciclo while para una ejecucion condicional, dependen de factores externos, como un input, software detecte un cambio.
    while (n < 10)
    {
        printf("N es igual a %d\n", n);
        n = n + 1;
    }
    printf("Fin del bucle o n es mayor o igual a 10");

    // Do while se ejecuta al menos una vez(sub rutina) la rutina.
    do
    {
        printf("M es igual a %d\n", m);
        m = m - 1;
    } while (m > 10);
    printf("Fin del bucle o n es menor o igual a 10");
    printf("\n==================================");
    return 0;
}