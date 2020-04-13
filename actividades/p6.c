/*
6. Codifique un programa que asigne un array de enteros (como arriba), luego lo libere, y entonces intente imprimir el valor de un elemento del array. ¿El programa corre?, ¿Que pasa cuando hace uso de ```valgrind```?
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *data = malloc(100 * sizeof(int));
    data[10] = 4;
    free(data);
    printf("valor: %d", data[10]);
    return 0;
}