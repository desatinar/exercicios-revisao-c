#include <stdio.h>
int soma_divisores(int p) {
int soma = 0;
for(int i = 1; i <= p / 2; i++) {
if (n % i == 0) {
soma += i;
}}
return soma;
}
int main() {
printf("Números perfeitos entre 1 e 100:\n");
for (int i = 1; i <= 100; i++) {
if (soma_divisores(i) == i) {
printf("%d\n", i);
}
}
return 0;
}
