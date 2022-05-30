#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//--------
double pi=3.141592654,y,v,a,e,w,yb;
double m=0.38,k1=5000,r=0.02,n1=0.391,n2=0.00105; //datos del problema
FILE *oscilador;

void main()
{
  oscilador = fopen("osciladorAmortiguado.dat","w");

  //--------VALORES INICIALES---------
  double y0 = 0.03;
  double v0 = 0.;
  double t;

  double j =(6*pi*n1*r)/(double)m;//gamma 1 entre m
  double j2 =(6*pi*n2*r)/(double)m;//gamma 2 entre m
  double k =k1/(double)m;
  //---------
  double tf = 20/(double)j; //5 veces el tiempo caracteristico.
  double dt = (1/(double)10000)*pow(1/(double)k,1/2);

 printf("gamma = %lf, k = %lf, tf = %lf, dt = %lf\n",j,k,tf,dt);
  a = -j*v0-k*y0;
  v = a*dt;
  y = y0+v*dt;
  printf("a = %lf, v = %lf, y = %lf\n",a,v,y);

  while(t<tf)
    {
      a = -j*v-k*y;
      yb = y;
      v = v+a*dt;
      y = y+v*dt;
      // e = (m*v*v)/2+(k1*y*y)/2;
      // w = j*m*v*(y-yb);
      t = t+dt;

      fprintf(oscilador,"%lf %lf\n",t,y);
    }
  fclose(oscilador);
}
