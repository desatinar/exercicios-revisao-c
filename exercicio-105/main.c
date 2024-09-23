#include <stdio.h>

int main() {
int matriz[5][5];
int x, i, j;
int encontrado = 0;
int linha, coluna;
printf("Digite os elementos da matriz 5x5:\n");
for (i = 0; i < 5; i++) {
for (j = 0; j < 5; j++) {
printf("Elemento [%d][%d]: ", i + 1, j + 1);
scanf("%d", &matriz[i][j]);
}}
printf("Digite o valor a ser buscado: ");
scanf("%d", &x);
for (i = 0; i < 5; i++) {
for (j = 0; j < 5; j++) {
if (matriz[i][j] == x) {
encontrado = 1; 
linha = i + 1;
coluna = j + 1;
break;
}}
if (encontrado) {
break; }
if (encontrado) {
printf("Valor %d encontrado na linha %d e coluna %d.\n", x, linha, coluna);
} else {
printf("Valor %d nao encontrado na matriz.\n", x);}
return 0;
}
