#include <stdio.h>

int n = 15;
int i;

int main()
{
    /* El bucle continue solo sirven en estructuras while, do while y for */
    for (i = 0; i < n; i++)
    {
        printf("%d\n", i);
        /*  La instruccion continue es un comando que interrumpe la ejecucion de todo el codigo que esta despues 
            de la misma siempre y cuando esten al mismo nivel dentro de su scope, luego vuelve al bucle o a la condicion para seguir ejecutando la expresion dada.
        */
        continue;
        // Si aqui iba un break solo se iba a imprimir una vez i y termina toda la ejecucion la condicion o bucle(no iba a realizar la operacion i++)
        // printf("Esto no se va a imprimir nunca\n");
    }
    printf("Valor de i: %d\n", i);
    printf("\n==========================================");
    return 0;
}