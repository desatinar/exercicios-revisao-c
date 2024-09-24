#include <stdio.h>
#include <stdlib.h>

#define LINHAS 3
#define COLUNAS 6
main() {
	int i,j;
    float matriz[LINHAS][COLUNAS];
    float soma_colunas_impares = 0;
    float media_colunas_2_4 = 0;
    float soma_coluna_1 = 0, soma_coluna_2 = 0;
    
    printf("Digite os elementos da matriz 3x6:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }


    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (j % 2 != 0) {
                soma_colunas_impares += matriz[i][j];
            }
        }
    }
    printf("Soma das colunas impares: %.2f\n", soma_colunas_impares);


    for (int i = 0; i < LINHAS; i++) {
        soma_coluna_1 += matriz[i][1]; 
        soma_coluna_2 += matriz[i][3]; 
    }
    media_colunas_2_4 = (soma_coluna_1 + soma_coluna_2) / (2 * LINHAS);
    printf("Media aritmetica das colunas 2 e 4: %.2f\n", media_colunas_2_4);

    for (int i = 0; i < LINHAS; i++) {
        matriz[i][5] = matriz[i][0] + matriz[i][1];
    }

    printf("Matriz modifcada:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }

}
