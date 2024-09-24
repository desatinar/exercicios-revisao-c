#include <stdio.h>
void minMaxMedio(int* vetor,int tam,int* min,int* max,double* medio) {
if(tam<=0) return;
*min=vetor[0];
*max=vetor[0];
int soma=0;
for(int i=0;i<tam;i++) {
if(vetor[i]<*min) {
*min=vetor[i];
}
if(vetor[i]>*max) {
*max=vetor[i];
}
soma+=vetor[i];
}
*medio=(double)soma/tam;
}
int main() {
int vetor[]={10,20,5,30,15};
int tam=sizeof(vetor)/sizeof(vetor[
