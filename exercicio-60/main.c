#include <stdio.h>
int fibonacci(int n) {
if(n<=0)return 0;
if(n==1)return 1;
return fibonacci(n-1)+fibonacci(n-2);
}
int main() {
int n;
printf("Digite o valor de N: ");
scanf("%d",&n);
int resultado=fibonacci(n);
printf("O %d-ésimo termo da série de Fibonacci é: %d\n",n,resultado);
return 0;
}
