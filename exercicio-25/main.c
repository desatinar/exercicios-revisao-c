#include <stdio.h>
int main(){
int num, di1, di2, soma;
printf("Números:\n");
for (num = 1000; num <= 9999; num++) {
di1 = num / 100;
di2 = num % 100;
soma = di1 + di2;
if (soma * soma == num) {
printf("%d\n", num);
}}
return 0;
}
