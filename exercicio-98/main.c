#include <stdio.h>

int main(){
int geral[100];
int cont= 0;
int num = 1;

while (cont<100){
if (num%7 !=0 && num%10 !=7){
geral[cont] =num;
cont++;}
num++;}


printf("RESULTADO:\n");
for (int i= 0; i<100; i++) {
printf("%d\n ", geral[i]);
if ((i+1) %10 == 0) {}}

return 0;
}
