/*

Intente usar alguna de las otras interfaces para asignacion de memoria. Por ejemplo, cree una estructura de datos simple similar a un vector y que use rutinas que usen realloc para manejar el vector. Use un array para almacenar los elementos del vector; cuando un usuario agregue una entrada al vector, use realloc para asignar un espacio mas a este. ¿Que tan bien funciona el vector asi?, ¿Como se compara con una lista enlazada?, utilice ```valgrind``` para ayudarse en la busqueda de errores.

*/
#include <stdio.h>
#include <stdlib.h>

struct pto8Mipapa
{
    int *p;
    void (*relokalize)(int *p, int x);
};

void relokalize(int *p, int x)
{
    p = (int *)realloc(p, x);
}

int main()
{
    struct pto8Mipapa ptoelklolea;
    ptoelklolea.p = malloc(sizeof(int));
    *ptoelklolea.p = 12;
    ptoelklolea.relokalize(ptoelklolea.p, 12);

    return 0;
}
