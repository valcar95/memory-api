/*

Intente usar alguna de las otras interfaces para asignacion de memoria. Por ejemplo, cree una estructura de datos simple similar a un vector y que use rutinas que usen realloc para manejar el vector. Use un array para almacenar los elementos del vector; cuando un usuario agregue una entrada al vector, use realloc para asignar un espacio mas a este. ¿Que tan bien funciona el vector asi?, ¿Como se compara con una lista enlazada?, utilice ```valgrind``` para ayudarse en la busqueda de errores.

*/
#include <stdio.h>
#include <stdlib.h>

typedef  struct 
{
    int n;
    int *data;
} my_array;


void add_item(my_array *arr, int item);
int get_item(my_array *arr, int index);
void print_values(my_array *arr);
void free_arr(my_array *arr);

int main()
{
   my_array arr={};
   int value=0;
   printf("Para terminar digite -1\n");
   while(value!=-1){
       printf("Digite un numero:");
       scanf("%d", &value);
       if(value!=-1){
          add_item(&arr,value);
       }
       printf("\n");
   }
   
   print_values(&arr);
   free_arr(&arr);
   return 0;
}

void add_item(my_array *arr, int item){
    void* tmp;
    if(arr->n==0){
        tmp = malloc(sizeof(int));
        arr->n=1;
        arr->data=tmp;
    }
    else
    {
        arr->n=arr->n+1;
        tmp = realloc(arr->data, arr->n*sizeof(int));
        if (tmp != NULL) {
            arr->data=tmp;
        }
    }
    
    arr->data[arr->n-1]=item;
}

int get_item(my_array *arr, int index){
    return arr->data[index];
}

void free_arr(my_array *arr){
    free(arr->data);
}

void print_values(my_array *arr){
    printf("\n\n ---------------Valores en la lista ------------------\n\n");
    for(int i=0; i<arr->n; i++){
         printf("item:%d = %d\n",i,get_item(arr,i));
    }
}
