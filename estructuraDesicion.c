/*
    Statement(Sentencia): Corresponde a una unidad de codigo o linea de codigo.
    Bloque({llave}): Compuesta por uno o un conjunto de statements.
    Sintaxis if:
    if (values true or false) {
        Si es verdadero se ejecuta los statements dentro del bloque:
        Statement
        Statement
        Statement
    } else if (true or false) Si solo tenemos un statement no hace falta las llaves
        Statement
    else
        Statement
*/
#include <stdio.h>
int n = 15;

int main()
{
    if (n > 5 && n <= 10)
        printf("N se encuntra en un rango del 6 al 10");
    else if (n > 10 && n <=15)
        printf("N se encuntra en un rango del 11 al 15");
    else if (n > 15 && n <= 20)
    {
        printf("N es igual a %d", n);
        printf("N se encuntra en un rango del 16 al 20");
    } 
    else if (n <= 5)
        printf("N es menor o igual a  5");   
    else
        printf("N es menor a 5 o mayor a 20");
    
}