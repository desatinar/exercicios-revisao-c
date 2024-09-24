#include <stdio.h>
void frac(float num,int* inteiro,float* frac) {
*inteiro=(int)num;
*frac=num-*inteiro;
}
int main() {
float num,parte_fracionaria;
int parte_inteira;
printf("Digite um número real: ");
scanf("%f",&num);
frac(num,&parte_inteira,&parte_fracionaria);
printf("Parte inteira: %d\n",parte_inteira);
printf("Parte fracionária: %.2f\n",parte_fracionaria);
return 0;
}
