#include <stdio.h>
/* 
    Su funcionamiento interno es diferente. En un const global la información se guarda en un espacio de memoria de solo lectura y es accesible desde cualquier parte del código, eso es lo que ya sabemos. Cuando hacemos uso del #define lo que ocurre realmente es que antes de compilar el preprocesador reemplaza en el código todas las ocurrencias del nombre que definimos por su valor, es decir, esos valores pasan a ser parte del programa y no van a ocupar memoria RAM.
*/

// Con el processor define el programa reemplaza todas las ocurrencias (nombre que se le asigna) por su valor dentro del programa antes de compilar, esto hace que no ocupe espacio en memoria
#define PRICE 1.5

// Una constante global es de solo lectura y se puede acceder desde cualquier parte de nuestro codigo.
const char NEWLINE = '\n';

int main() {
    int total = PRICE * 2;
    printf("%d %c", total, NEWLINE);
    return 0;
}