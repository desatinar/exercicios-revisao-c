#include <stdio.h>

// Função para somar duas matrizes 2x2
void somarMatrizes(float matriz1[2][2], float matriz2[2][2], float resultado[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

// Função para subtrair a primeira matriz da segunda (matriz2 - matriz1)
void subtrairMatrizes(float matriz1[2][2], float matriz2[2][2], float resultado[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultado[i][j] = matriz2[i][j] - matriz1[i][j];
        }
    }
}

// Função para adicionar uma constante às duas matrizes
void adicionarConstante(float matriz[2][2], float constante) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matriz[i][j] += constante;
        }
    }
}

// Função para imprimir uma matriz 2x2
void imprimirMatriz(float matriz[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    float matriz1[2][2], matriz2[2][2], resultado[2][2];
    int opcao;
    float constante;

    // Leitura da primeira matriz
    printf("Digite os valores da primeira matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("matriz1[%d][%d]: ", i, j);
            scanf("%f", &matriz1[i][j]);
        }
    }

    // Leitura da segunda matriz
    printf("Digite os valores da segunda matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("matriz2[%d][%d]: ", i, j);
            scanf("%f", &matriz2[i][j]);
        }
    }

    // Menu de opções
    do {
        printf("\nEscolha uma opção:\n");
        printf("1. Somar as duas matrizes\n");
        printf("2. Subtrair a primeira matriz da segunda\n");
        printf("3. Adicionar uma constante às duas matrizes\n");
        printf("4. Imprimir as matrizes\n");
        printf("5. Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                somarMatrizes(matriz1, matriz2, resultado);
                printf("Resultado da soma das matrizes:\n");
                imprimirMatriz(resultado);
                break;

            case 2:
                subtrairMatrizes(matriz1, matriz2, resultado);
                printf("Resultado da subtração (segunda - primeira):\n");
                imprimirMatriz(resultado);
                break;

            case 3:
                printf("Digite uma constante a ser adicionada: ");
                scanf("%f", &constante);
                adicionarConstante(matriz1, constante);
                adicionarConstante(matriz2, constante);
                printf("As matrizes após adicionar a constante %.2f:\n", constante);
                printf("Matriz 1:\n");
                imprimirMatriz(matriz1);
                printf("Matriz 2:\n");
                imprimirMatriz(matriz2);
                break;

            case 4:
                printf("Matriz 1:\n");
                imprimirMatriz(matriz1);
                printf("Matriz 2:\n");
                imprimirMatriz(matriz2);
                break;

            case 5:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    } while (opcao != 5);

    return 0;
}
