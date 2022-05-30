#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

char p[25];
int d,i;
int m=1;

void main()
{
  printf("Introduzca una palabra: ");
  scanf("%s",p);

  int k=strlen(p);

  for(int i=0,j=k-1;i<=k/2;i++,j--)
    {
      if(p[i]!= p[j])
	{
	  m=0;
	  break;
	}
    }
 
 if(m==0)
   {
     printf("No es un palindromo\n");
   }
 else 
   {
     printf("Es un palindromo\n");
   }

} 
