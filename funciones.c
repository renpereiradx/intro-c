#include <stdio.h>


/* Una funcion es una utilidad de los lenguajes de programacion que sirve para encapsular codigo en un bloque 
    con el fin de realizar una tarea esepecifica. Las funciones son codigo reutilizable ya que pueden ser llamadas desde
    cualquier parte de nuestro de codigo.
    La declaracion de funciones es similar al de las variables:
    int suma(int n1, int n2); Se declara.
    int suma(int n1, int n2) Definicion o inicializacion de la funcion
    {
        int total = n1 + n2;
        return total;
    }
    Una funcion puede tener o no un returntype y parametros.
    Cuando se invoca a una funcion y esta tiene parametros, los argumentos pueden ser:
    Por referencia (Tambien conocido como puntero) que hace referencia a la direccion en memoria del valor.
        El valor original puede ser modificado directamente.
    Por valor, que hace una copia temporal y su uso sera unicamente dentro del scope de la funcion.
        El valor original no sufrira ningun cambio.
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