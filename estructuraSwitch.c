#include <stdio.h>
int optOne = 0;
int optTwo = 1;

int main()
{
    printf("bienvenid a platzi store :\n");
    printf("opcion 0 para platzi bebidas \n");
    printf("opcion 1 para platzi comidas \n");
    printf("opcion 2 para platzi postres \n");
  

    switch (optOne)
    {
    case 0:
        printf("usted eligio la opcion 0, vera nuestro menu de bebidas elija una:\n");
        printf("opcion 0 para platzi cola cero \n");
        printf("opcion 1 para platzi cola normal \n");
        printf("opcion 2 para platzi pina colada \n");
        switch (optTwo)
        {
        case 0:
            printf("usted eligio una platzi cola cero, mmm rico");
            break;
        case 1:
            printf("usted eligio una platzi cola cpn azucar, mmm rico");
            break;
        case 2:
            printf("usted eligio una platzi pina colada con azucar, mmm rico");
            break;
        default:
            printf("opcion invalida");
            break;
        }
        break;
    case 1:
        printf("usted ha elegido la opcion 1, vera nuestro menu de comidas, elija una: \n");
        printf("opcion 0 para platzi burger \n");
        printf("opcion1 para platzi pizza \n");
        switch (optTwo)
        {
        case 0:
            printf("Disfrute de su platzi burger");
            break;
        case 1:
            printf("Disfrute de su platzi pizza");
            break;
        default:
            printf("No ha hecho ninguna eleccion. Lamentamos que no haya lo que a usted le guste");
            break;
        }
        break;
    case 2:
        printf("usted ha elegido la opcion 2, vera nuestro menu de postres, elija una: \n");
        printf("opcion 0 para platzi macaron \n");
        printf("opcion1 para platzi helado \n");
        switch (optTwo)
        {
        case 0:
            printf("Disfrute de su platzi flan");
            break;
        case 1:
            printf("Disfrute de su platzi helado");
            break;
        default:
            printf("No ha seleccionado nada :(");
            break;
        }
        break;
    default:
        printf("No ha hecho una eleccion :( . Vuelva pronto :)");
        break;
    }
    printf("\n====================================================\n");
    return 0;
}