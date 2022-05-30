#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//----------------------------------------------------------

//----------------------------------------------------------

int main()
{
    char array[100];
    char palindromo[100];
   
    printf("Escriba una palabra\n");
    scanf("%s", array);
 
    for(int i=100,j=0;i>=0 && j<=100;i-- && j++)
      {
	array[j] = palindromo[i];
      }
    printf("array %s   palindromo %s",array,palindromo);

    if(array == palindromo)
      {
	printf("Su palabra es un palindromo\n");
      }
    else
      {
	printf("Su palabra no es un palindromo\n");
      }
    // printf("Your string: %s\n", array);
    return 0;
}
