#include <stdio.h>
#include <string.h>

char caracter1[60];
char caracter2[60];

int main()
{
    printf("Ingrese una palabra o frase: ");
    /*
        Se usa fgets en lugar de gets ya que este ultimo se encuentra en un estado de DEPRECATED.
        La funcion tiene tres parametros,
        variable donde se va a almacenar el valor (char type)
        la longitud del array o limite de lectura de caracteres
        y el origen del valor a asignar
     */
    fgets(caracter1, 60, stdin);
    printf("\nIngrese otro caracter: ");
    fgets(caracter2, 60, stdin);
    printf("\nLos caracteres introducidos son:\n%s\n%s\n", caracter1, caracter2);
    if (strcmp(caracter1, caracter2) == 0)
    {
        printf("Son iguales\n");
    } else
    {
        printf("No son iguales\n");
    }
    
    return 0;
}