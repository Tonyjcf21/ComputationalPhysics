#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//---
int a,b,c,j;
//---

void main()
{
   do
    {
      j=0;

      printf("A continuacion introduzca tres numeros enteros > 0\n");
      printf("1er numero: ");
      scanf("%d",&a);
      printf("2do numero: ");
      scanf("%d",&b);
      printf("3er numero: ");
      scanf("%d",&c);

      if(a+b==c)
	{
	  printf("%d + %d es igual a %d, que es el tercer numero que introdujo\n",a,b,c);
	  break;
	}
      else if(a+c==b)
	{
	  printf("%d + %d es igual a %d, que es el segundo numero que introdujo\n",a,c,b);
	  break;
	}
      else if(b+c==a)
	{
	  printf("%d + %d es igual a %d, que es el primer numero que introdujo\n",b,c,a);
	  break;
	}
      else
	{
	  printf("La suma de algun par de numeros introducidos no es igual al tercero restante. Desea continuar? (responda con '1' de ser afirmativa la respuesta o '0' de ser negativa)\n\n Voler a intentar o parar?: ");
	  scanf("%d",&j);
   	}

    }while(j==1);
}
