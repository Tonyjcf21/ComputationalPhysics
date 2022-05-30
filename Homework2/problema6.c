#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//---
int m,n,i;
int r=0, c=0;
//---

void main()
{
  printf("Introduzca el dividendo y el divisor\n");
  printf("Dividendo: ");
  scanf("%d",&m);
  printf("Divisor: ");
  scanf("%d",&n);

  if(m>0 && n>0 && m>n)
    {
      do
	{
	  m = m-n;
	  c++;
	}while(m>=n);
      printf("El cociente es %d y el resto es %d\n",c,m);
    } 
 else if(m<0 || n<0)
    {
      int m2 = abs(m), n2 = abs(n);

      do
	{
	  m2 = m2-n2;
	  c++;
	}while(m2>=n2);
      printf("El cociente es %d y el resto es %d\n",c,m2*(-1));      
    }

 else if(m==0)
    {
      c = 0;
      printf("El restuldado de la division es 0\n");
    }
 else if (abs(n)>abs(m))
    {
      printf("La division no es entera\n");
    }
 else if (n==0)
    {
      printf("No se puede dividir entre 0\n");
    }

}
  
