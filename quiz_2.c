#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//---
float x,y,vx,vy,g=9.8,t=0,dt,tf,ax,ay,j,m,b;
FILE *data;
//---

void main()
{
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
  scanf("%f",&j);
  //-------------------------------------
  // ax = -gamma*pow(vx,2)*;
  // ay = -g-b*pow(vy,2)*;
  
  float x1,y1,vx1,vy1,v,v1;

  v = pow(vx,2)+pow(vy,2);
  v1 = pow(v,1/2);
  vx1 = vx - j*v1*vx;
  vy1 = vy - g -j*v1*vy;
  x1 = x + vx1*dt;
  y1 = y + vy1*dt;
  float v2 = pow(vx1,2)+pow(vy1,2);

  while(t<tf)
    {
      //--
      ax = -j*pow(v2,1/2)*vx1;
      ay = -(g+j*pow(v2,1/2)*vy1);
      //--
      vx1 = vx1 + 2*ax*dt;
      vy1 = vy1 + 2*ay*dt;
      //--
      x1 = x1 + 2*vx1*dt;
      y1 = y1 + 2*vy1*dt;
      //--
      t = t + dt;

      fprintf(data,"%f %f %f %f %f\n",t,x1,y1,vx1,vy1);
    }
  fclose(data);
}

