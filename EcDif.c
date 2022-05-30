#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//---------------
float x,y,vx,vy,t=0,dt,tf,ax=0,ay=9.8, gamma;
FILE *data;
//---------------

void main()
{
  //-------------------------------------
  data = fopen("data.dat","w");

  printf("Posicion inicial en x: ");
  scanf("%f",&x);
  printf("Posicion inicial en y: ");
  scanf("%f",&y);
  printf("Velocidad inicial en x: ");
  scanf("%f",&vx);
  printf("Velocidad inicial en y: ");
  scanf("%f",&vy);
  printf("Tiempo final: ");
  scanf("%f",&tf);
  printf("dt: ");
  scanf("%f",&dt);
  printf("Valor de gamma para friccion con el aire: ");
  scanf("%f",&gamma);
  //-------------------------------------

  while(t<tf)
    {

      vy = vy - 9.8*dt;
      y = y + (vy)*dt;
      x = x + (vx)*dt;
      t = t + dt;

      fprintf(data,"%f %f %f %f %f\n",t,x,y,vx,vy);
    }
  fclose(data);
}
