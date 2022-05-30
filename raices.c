#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//-------METODO DE REGULA FALSI--------\\

int i;
double xl, xu, xr, error, errorp;
double f1, f2; // f1 yf2 son la función, uso dos variables para poder guardar el valor antes y despues de cada iteración.
 
void funcion1(double y){
// la función a utilizar en este momento será f=x-1;
  f1=exp(-y)-y;
}

void funcion2(double y){
// la función a utilizar en este momento será f=x-1;
  f2=exp(-y)-y;
}

void main(){

printf("\n");
	printf("Este programa busca la raiz de una funcion f en el intervalo [xl,xu].\n");
	printf("\n");
	printf("Introduzca el valor del extremo inferior del intervalo deseado. xl= \n");
	scanf("%lf", &xl);
	printf("\n");
	printf("Introduzca el valor del extremo superior del intervalo deseado. xu= \n");
	scanf("%lf", &xu);
	printf("\n");
	printf("Introduzca el error porcentual deseado. errorp= \n");
	scanf("%lf", &errorp);
	printf("\n");

	funcion1(xl);
	funcion2(xu);

if(f1*f2<0){

	do{
	  //xr=(double)(xl+xu)/2;
	  xr =(double)(xl*f2-xu*f1)/(f2-f1);
		funcion2(xr);

		if(f1*f2<0){
     		
		error= fabs((xu-xr)/xr)*100;
     		xu=xr;

		} else if(f1*f2>0){

		 error= fabs((xl-xr)/xr)*100;
			xl=xr;
			funcion1(xl);
			

		} else if(f1*f2==0){

		 error= fabs((xu-xr)/xr)*100;
			break;
		}
		i++;
	} while(error>errorp);

}
else{
	printf(" Elija otro intervalo inicial. \n");
	printf("\n");
}

 printf(" La raiz se encuentra en xr= %lf con un error porcentual de %lf y %d iteraciones \n", xr, error,i);

}
