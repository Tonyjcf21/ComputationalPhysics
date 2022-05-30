#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//----
int i=0,nmin,nmax,n,r,c=0,p=0;
//----

void main()
{
  printf("Cuantos numeros aleatorios desea revisar? ");
  scanf("%d",&n);
  printf("Introduzca el intervalo para los numeros aleatorios\n");
  printf("Nmin: ");
  scanf("%d",&nmin);
  printf("Nmax: ");
  scanf("%d",&nmax);

  while(i<=n)
    {
      r =(rand()%(nmax-nmin+1))+nmin;//genera numeros aleatorios en el rango deseado. rand%(nmax-nmin+1) da el numero aleatorio en la diferencia de rango que queremos pero siempre empezando el 0. Para llevarlo al rango real requerido hay que sumarle el valor de Nmin.
      printf("%d  ",r);
      i++;
      int k = 0;

      for(int j=1;j<=r;j++)
	{
         if(r%j==0)
	   {
             k++;
           }
        }
      // printf("k = %d     ",k);
         if(k==2)
	   {
            printf("Es primo\n");
	    p++;
           }
	 else
	   {
             printf("Es compuesto\n");
	     c++;
           }
    }
  printf("En total hay %d numeros primos y %d numeros compuestos\n",p,c);
}
