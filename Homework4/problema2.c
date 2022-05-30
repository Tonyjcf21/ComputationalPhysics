#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//---------------
int i;
double f1,f2,xl,xu,xr,error,errorp;

//--------------
void funcion1(double y)
{
  f1=exp(-(y*y))-cos(y);
}

//-------------
void funcion2(double y)
{
  f2=exp(-(y*y))-cos(y);
}

//------------
void main()
{
	printf("Intervalo inferior. xl= ");
	scanf("%lf", &xl);
	printf("Intervalo superior. xu= ");
	scanf("%lf", &xu);
	printf("\n");

	funcion1(xl);
	funcion2(xu);

if(f1*f2<0){

	do{
	   xr =(double)(xl*f2-xu*f1)/(f2-f1);
		funcion2(xr);

		if(f1*f2<0){
     		
		error= fabs((xu-xr)/xr)*100;
     		xu=xr;

		} else if(f1*f2>0){

		 error= fabs((xl-xr)/xr)*100;
			xl=xr;
			funcion1(xl);
			funcion2(xu);
			

		} else if(f1*f2==0){

		 error= fabs((xu-xr)/xr)*100;
			break;
		}
		i++;
		//printf("f1 = %lf , f2 = %lf \n",f1,f2);
		printf("El error porcentual en la iteracion numero %d es de %lf\n",i,error);

	} while(error>=0.00001);

 printf(" La raiz se encuentra en xr= %lf luego de %d iteraciones \n", xr,i);

}
else{
	printf(" No hay raiz en ese intervalo.\n");
}

}
