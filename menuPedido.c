#include <stdio.h>

int optOne = 0;
int optTwo = 1;

int main()
{
    printf("bienvenid a platzi store :\n");
    printf("opcion 0 para platzi bebidas \n");
    printf("opcion 1 para platzi comidas \n");
    printf("opcion 2 para platzi postres \n");

    // este programa genera menus segun lo que el usuario elija
    if (optOne == 0)
    {
        printf("usted eligio la opcion 0, vera nuestro menu de bebidas elija una:\n");
        printf("opcion 0 para platzi cola cero \n");
        printf("opcion 1 para platzi cola normal \n");
        printf("opcion 2 para platzi pina colada \n");

        if (optTwo == 0)
            printf("usted eligio una platzi cola cero, mmm rico");
        else if (optTwo == 1)
            printf("usted eligio una platzi cola cpn azucar, mmm rico");
        else if (optTwo == 2)
            printf("usted eligio una platzi pina colada con azucar, mmm rico");
        else
            printf("opcion invalida");
    }
    else if (optOne == 1)
    {
        printf("usted ha elegido la opcion 1, vera nuestro menu de comidas, elija una: \n");
        printf("opcion 0 para platzi burger \n");
        printf("opcion1 para platzi pizza \n");

        if (optTwo == 0)
            printf("Disfrute de su platzi burger");
        else if (optTwo == 1)
            printf("Disfrute de su platzi pizza");
        else
            printf("No ha hecho ninguna eleccion. Lamentamos que no haya lo que a usted le guste");
    }
    else if (optOne == 2)
    {
        printf("usted ha elegido la opcion 2, vera nuestro menu de postres, elija una: \n");
        printf("opcion 0 para platzi flan \n");
        printf("opcion1 para platzi pizza \n");
    }
    else
    {
        // mensaje de manejo de opcion invalida
    }

    return 0;
}