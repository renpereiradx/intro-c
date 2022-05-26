#include <stdio.h>
// Las variables son el nombre que se le da al espacio reservado en memoria para guardar informacion y esta puede ir cambiando durante la ejecucion de un programa.
// Tambien se declaran variables externas, posterior se tienen que volver a definir en el metodo de ejecucion.
// Las constantes a diferencia de las variables una vez se le asigna un valor ya no puede cambiar.

int i, j, k;
int a, b, c;
// Variable externa que se podra utilizar desde otro archivo.
extern int edad;

int main() {
    a = 20;
    b = 5;
    c = a + b;
    // Se define la variable externa
    int edad;
    // El placeholder %d permite mostrar una variable decimal en la terminal.
    printf("%d", c);
    // Declaracion de una  constante, al igual que una variable, se pueden declarar por debajo de la zona del processor commands (Directivas de precompilador) o dentro de una funcion, pero es recomendable hacerlo en la parte de arriba.
    // El tipo de dato char puede almacenar hasta un caracter, esto se hace con comillas simples 'e', C lo interpreta como un numero por lo que se podria realizar una operacion como 'e' + 2.
    const char letter = 's';
    printf("\n %c", letter);
}