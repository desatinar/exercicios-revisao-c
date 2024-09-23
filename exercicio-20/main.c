#include <stdio.h>

void contarcedulas(int valor) {

int cedulas[] = {100, 50, 20, 10, 5, 2, 1};
int quantidade[7] = {0};
int i;

for (i=0; i<7; i++) {
if (valor >= cedulas[i]){
quantidade[i] = valor / cedulas[i];
valor = valor % cedulas[i];}}
    
printf("Quantidade minima:\n");
for (i = 0; i < 7; i++) {
if (quantidade[i] > 0) {
printf("%d cedulas de R$ %d\n", quantidade[i], cedulas[i]);}}}

int main() {
int valor;
printf("Digite o valor: ");
scanf("%d", &valor);
contarcedulas(valor);
return 0;
}
