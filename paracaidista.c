#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//---
double x,y,g=9.8,t=0,dt,tf,ax,ay,j,m,b,a,vx,vy,v,pi=3.14159265359;
FILE *data;
//---

void main()
{
data = fopen("data.dat","w");

  printf("Posicion inicial en x: ");
  scanf("%f",&x);
  printf("Posicion inicial en y: ");
  scanf("%f",&y);
  printf("Velocidad inicial: ");
  scanf("%f",&v);
  printf("Angulo de inclinacion del lanzamiento entre 0 y 90: ");
  scanf("%f",&a);
  printf("Tiempo final: ");
  scanf("%f",&tf);
  printf("dt: ");
  scanf("%f",&dt);
  printf("Valor de gamma para friccion con el aire: ");
  scanf("%f",&j);
  //---------------------------------------------------
  a = (a*pi)/180;
  vx = v*cos(a);  //componentes de la velocidad.
  vy = v*sin(a);
  //----------------
  ax = -j*v*vx;
  ay = -g-j*v*vy;
  vx = vx + ax*dt;       //primera iteracion con metodo de Euler.
  vy = vy + ay*dt;
  //----------------
  while(t<tf)
    {
ax = 

 fprintf(data,"%lf %lf %lf %lf %lf\n",t,x,y,vx,vy);
      t = t + dt;
    }
  fclose(data);
}
