#include <stdio.h>
#include <math.h>
#define GRAVIDADE 9.8
int jumpPosition(double v0,double theta,double t,double* x,double* y) {
double radianos=theta*M_PI/180.0;
*x=v0*cos(radianos)*t;
*y=v0*sin(radianos)*t-0.5*GRAVIDADE*t*t;
if(*y<0) {
*y=0;
return 0;
}
return 1;
}
int main() {
double v0,theta,t,x,y;
printf("Digite a velocidade inicial (v0): ");
scanf("%lf",&v0);
printf("Digite o ângulo (th
