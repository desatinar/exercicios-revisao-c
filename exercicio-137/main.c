#include <stdio.h>
int main() {
int matriz[3][3],soma_diagonal_secundaria=0;
printf("Digite os elementos da matriz 3x3:\n");
for(int i=0;i<3;i++) {
for(int j=0;j<3;j++) {
scanf("%d",&matriz[i][j]);
}
}
for(int i=0;i<3;i++) {
soma_diagonal_secundaria+=matriz[i][2-i];
}
printf("Soma dos elementos da diagonal secundária: %d\n",soma_diagonal_secundaria);
return 0;
}
