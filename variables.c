#include <stdio.h>

// Aqui es donde se declaran las variables.
// Tambien se declaran variables externas, posterior se tienen que volver a definir en el metodo de ejecucion.

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
    printf("%d", c);
}