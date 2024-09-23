#include <stdio.h>
int main() {
int num[10];
int i, maior, posmaior;
printf("Digite 10 numeros inteiros:\n");
for (i = 0; i < 10; i++) {
printf("Numero %d: ", i + 1);
scanf("%d", &numeros[i]);
}
maior = numeros[0];
posmaior = 0;
for (i = 1; i < 10; i++) {
if (numeros[i] > maior) {
maior = numeros[i];
posmaior = i;
}}
printf("\nVetor: ");
for (i = 0; i < 10; i++) {
printf("%d ", numeros[i]);
}
printf("\nO maior elemento e %d, na posicao %d.\n", maior, posmaior + 1);
return 0;
}
