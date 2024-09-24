#include <stdio.h>
#define MAX_VALORES 10
void inserir_e_ordenar(float valores[],int *n) {
float novo_valor;
for(int i=0;i<MAX_VALORES;i++) {
printf("Digite o valor %d: ",i+1);
scanf("%f",&novo_valor);
int j=*n;
while(j>0&&valores[j-1]>novo_valor) {
valores[j]=valores[j-1];
j--;
}
valores[j]=novo_valor;
(*n)++;
}
}
void exibir_valores(float valores[],int n) {
printf("Valores em ordem crescente:\n");
for(int i=0;i<n;i++) {
printf("%.2f\n",valores[i]);
}
}
int main() {
float valores[MAX_VALORES];
int n=0;
inserir_e_ordenar(valores,&n);
exibir_valores(valores,n);
return 0;
}
