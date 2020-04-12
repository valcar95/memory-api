#include <stdio.h> 
#include <stdlib.h> 

int main() {
  int *p = (int*)malloc(5*sizeof(int));
  *(p+1)=10;
  *p=100;
  //p[1]=10;
  int array[] = {1,2,3,4,5};
  printf("sizeof(p): %lu\n",sizeof(p));
   printf("p: %p\n",p);
  printf("p[1]: %d\n",p[1]);
  printf("*(p+1): %d\n",*(p+1));
  printf("*p: %d\n",*p);
  printf("sizeof(*p): %lu\n",sizeof(*p));
  printf("sizeof(array): %lu\n",sizeof(array));
  free(p);
  p = NULL;
  return 0;
}