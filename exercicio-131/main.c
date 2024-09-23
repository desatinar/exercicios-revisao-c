#include <stdio.h>
int main() {
int matriz[5][5];
int x, encontrado = 0;
printf("Digite os elementos da matriz 5x5:\n");
for (int i = 0; i < 5; i++) {
for (int j = 0; j < 5; j++) {
printf("Elemento [%d][%d]: ", i + 1, j + 1);
scanf("%d", &matriz[i][j]);
}
}
printf("Digite o valor a ser buscado: ");
scanf("%d", &x);
for (int i = 0; i < 5; i++) {
for (int j = 0; j < 5; j++) {
if (matriz[i][j] == x) {
printf("Valor %d encontrado na posição [%d][%d].\n", x, i + 1, j + 1);
encontrado = 1;
}
}
}
if (!encontrado) {
printf("Valor %d não encontrado na matriz.\n", x);
}
return 0;
}
