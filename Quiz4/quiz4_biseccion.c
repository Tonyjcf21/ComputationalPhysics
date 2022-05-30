#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//-----------METODO DE BISECCION------------\\
int i;
double f1,f2,xl,xu,xr,error,errorp;

//--------------
void funcion1(double y)
{
  f1=pow(z,3)-3*z*z+12/(double)5;
}

//-------------
void funcion2(double y)
{
  f2=pow(z,3)-3*z*z+12/(double)5;
}

//------------
void main()
{
  printf("Intervalo inferior = ");
  scanf("%lf",&xl);
  printf("Intervalo superior = ");
  scanf("%lf",&xu);

  funcion1(xl);
  funcion2(xu);

  if(f1*f2<0)
    {
      do
	{
	  xr=(double)(xl+xu)/2;
	  funcion2(xr);

	  if(f1*f2<0)
	    {
	      error= fabs((xu-xr)/xr)*100;
	      xu=xr;
	    }
	  else if(f1*f2>0)
	    {
	      error= fabs((xl-xr)/xr)*100;
	      xl=xr;
	      funcion1(xl);
	      funcion2(xu);
	    } 
	  else if(f1*f2==0)
	    {
	      error= fabs((xu-xr)/xr)*100;
	      break;
	    }
	  i++;
	}while(error>0.00001);
      
      printf(" La raiz se encuentra en xr= %lf con un error porcentual de %lf en %d iteraciones \n", xr, error,i);
    }
  else{
    printf("Intervalo invalido.\n");
  }
}
