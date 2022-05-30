#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//----
int a,b,c;
//----

void main()
{
  printf("Introduza valores para A, B, C.\n");
  printf("A: ");
  scanf("%d",&a);
  printf("B: ");
  scanf("%d",&b);
  printf("C: ");
  scanf("%d",&c);

  printf("Antes del cambio, A = %d, B = %d, C = %d\n",a,b,c);

  a = a+b+c;
  b = a-c-b; //b = a+b+c-c-b=a; b=a
  c = a-c-b; //c = a+b+c-c-a; c=b
  a = a-b-c; //a = a+b+c-a-b; a=c

  printf("Despues del cambio, A = %d, B = %d, C = %d\n",a,b,c);
}
