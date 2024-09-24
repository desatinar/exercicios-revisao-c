#include <stdio.h>
int main() {
int n;
printf("Digite um número inteiro positivo: ");
scanf("%d",&n);
for(int linha=0;linha<n;linha++) {
int coef=1;
for(int coluna=0;coluna<=linha;coluna++) {
printf("%d ",coef);
coef=coef*(linha-coluna)/(coluna+1);
}
printf("\n");
}
return 0;
}
