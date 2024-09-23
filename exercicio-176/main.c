#include <stdio.h>

void minmax(int V[], int tamanho, int *min, int *max) {
 *min = V[0];
 *max = V[0];

 for (int i = 1; i < tamanho; i++) {
 if (V[i] < *min){
*min = V[i];}
if (V[i] > *max){
*max = V[i];}}}

int main() {
int V[] = {12, 34, 7, 56, 23, 98, 11};
int tamanho = sizeof(V) / sizeof(V[0]);
int min, max;
minmax(V, tamanho, &min, &max);

printf("O minimo e: %d\n", min);
printf("O maximo e: %d\n", max);
return 0;
}
