/*Faça um programa para determinar a próxima jogada em um Jogo da Velha. Assumir que o tabuleiro é representado por uma matriz de 3x3, 
onde cada posição representa uma das casas do tabuleiro. 
A matriz pode conter os seguintes valores: -1, 0, 1 representando respectivamente uma casa contendo uma peça minha (-1), 
uma casa vazia do tabuleiro (0), e uma casa contendo uma peça do meu oponente (1).*/

#include <stdio.h>

#define SIZE 3

int verificarVitoria(int board[SIZE][SIZE], int jogador) {
    for (int i = 0; i < SIZE; i++) {
        if ((board[i][0] == jogador && board[i][1] == jogador && board[i][2] == jogador) ||
            (board[0][i] == jogador && board[1][i] == jogador && board[2][i] == jogador)) {
            return 1;
        }
    }
    if ((board[0][0] == jogador && board[1][1] == jogador && board[2][2] == jogador) ||
        (board[0][2] == jogador && board[1][1] == jogador && board[2][0] == jogador)) {
        return 1;
    }
    return 0;
}
void proximaJogada(int board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == 0) {
                board[i][j] = -1;
                if (verificarVitoria(board, -1)) {
                    printf("Minha jogada: Linha %d, Coluna %d (vencer)\n", i + 1, j + 1);
                    return;
                }
                board[i][j] = 0;
                board[i][j] = 1;
                if (verificarVitoria(board, 1)) {
                    printf("Minha jogada: Linha %d, Coluna %d (bloquear)\n", i + 1, j + 1);
                    board[i][j] = -1;
                    return;
                }
                board[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == 0) {
                printf("Minha jogada: Linha %d, Coluna %d (casa vazia)\n", i + 1, j + 1);
                board[i][j] = -1;
                return;
            }
        }
    }
}
void imprimirTabuleiro(int board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == -1) printf("X ");
            else if (board[i][j] == 1) printf("O ");
            else printf(". ");
        }
        printf("\n");
    }
}

int main() {
    int board[SIZE][SIZE] = {
        {0, 1, -1},
        {0, 0, 1},
        {0, -1, 0}
    };

    printf("Tabuleiro atual:\n");
    imprimirTabuleiro(board);

    proximaJogada(board);

    printf("\nTabuleiro após minha jogada:\n");
    imprimirTabuleiro(board);

    return 0;
}
