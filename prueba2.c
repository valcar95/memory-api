#include <stdio.h> 
#include <stdlib.h> 

int main() {
  int *p[2];
  int **q = p;
  int a[] = {1,2,3};
  int b[] = {4,5,6,7};
  p[0] = &a[0];
  p[1] = b;
  *(p[0] + 2) = -1;
  *(p[1] + 1) = 3;
  *(*p + 1) = 10;
  *(*(p + 1) + 3) = -7;
  *(*q + 1) = **q + *(*q + 2);  
  q = q + 1;
  *(*q + 1) = *(*q + 3) + *(*q + 2);  
  return 0;
}