#include <stdio.h> 
#include <stdlib.h> 

int main() {
  int **p = (int **)malloc(2*sizeof(int **));
  *p = (int *)malloc(3*sizeof(int *));
  *(p + 1) = (int *)malloc(5*sizeof(int *));
  
  // Manipulando la memoria reservada
  int i;
  for(i = 0; i < 3; i++) {
    *(*p + i) = 2*i;
  }
  for(i = 0; i < 5; i++) {
    if (i%2 == 0) {
      *(*(p + 1) + i) = -i;
    }
    else {
      *(*(p + 1) + i) = 0;      
    }
  }
  
  
  // Liberacion de memoria
  free(*p);
  free(*(p + 1));
  free(p);
  p = NULL;
  return 0;
}