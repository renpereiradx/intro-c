#include <stdio.h>


/* Una funcion es una utilidad de los lenguajes de programacion que sirve para encapsular un bloque de codigo
    que cumpla una tarea especifica. Las funciones son codigo reutilizable ya que pueden ser llamadas desde
    cualquier parte de nuestro de codigo.
    La declaracion de funciones es similar al de las variables:
    int suma(int n1, int n2); Se declara.
    int suma(int n1, int n2) Definicion o inicializacion de la funcion
    {
        int total = n1 + n2;
        return total;
    }
    Una funcion puede tener o no un returntype y argumentos.
 */
int power(int base, int exp);
int main()
{
    int i, n = 2;
    for (i = 0; i < 10; i++)
    {
        printf("La potencia de %d elevado a la %d es: %d\n", n, i, power(n, i));
    }
    return 0;
}
int power(int base, int exp)
{
    int i, p = 1;
    for (i = 1; i <= exp; i++)
    {
        p = p * base;
    }
    return p;
}