/*
7. Ahora pase un **funny value** para liberar (e.g. un puntero en la mitad del array que usted ha asignado) ¿Qué pasa?, ¿Ústed necesita herramientas para encontrar este tipo de problemas?
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *data = malloc(100 * sizeof(int));
    int *p = data[50];
    free(p);

    return 0;
}