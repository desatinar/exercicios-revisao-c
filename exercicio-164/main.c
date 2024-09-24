#include <stdio.h>
int ordenar(int *a,int *b,int *c) {
if(*a==*b&&*b==*c) {
return 1;
}
if(*a>*b) {
int temp=*a;*a=*b;*b=temp;
}
if(*b>*c) {
int temp=*b;*b=*c;*c=temp;
}
if(*a>*b) {
int temp=*a;*a=*b;*b=temp;
}
return 0;
}
int main() {
int a,b,c;
printf("Digite três valores inteiros:\n");
scanf("%d%d%d",&a,&b,&c);
int resultado=ordenar(&a,&b,&c);
if(resultado==1) {
printf("Os três valores são iguais.\n");
} else {
printf("Valores ordenados: %d,%d,%d\n",a,b,c);
}
return 0;
}
