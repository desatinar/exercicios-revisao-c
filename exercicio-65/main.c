#include <stdio.h>
int somatorio(int N) {
if(N==1)return 1;
return N+somatorio(N-1);
}
int main() {
int N;
printf("Digite um número inteiro positivo: ");
scanf("%d",&N);
if(N>0) {
int resultado=somatorio(N);
printf("O somatório de 1 a %d é: %d\n",N,resultado);
} else {
printf("Por favor, insira um número inteiro positivo.\n");
}
return 0;
}
