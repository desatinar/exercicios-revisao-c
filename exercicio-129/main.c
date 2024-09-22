//Faça um programa que preenche uma matriz 4 x 4 com o produto do valor da linha e
// da coluna de cada elemento. Em seguida, imprima na tela a matriz.

#include <stdio.h>

int main(){

    int matriz [4] [4], i, j;

    printf("Digite valor para os elementos da matriz \n");


    for(i=0; i<4; i++)
         for(j=0; j<4; j++){
    printf("Elemento [%d] [%d] = ", i, j);
    scanf("%d", &matriz[i] [j]);
    }

    for(i=0; i<4; i++)
         for(j=0; j<4; j++){
    printf("Elemento [%d] [%d] = %d ", i, j, matriz[i] [j]);
    }


    return 0;
}
