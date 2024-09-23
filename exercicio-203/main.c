/*Elabore um programa que, dado 2 vetores inteiros de 20 posições, 
efetue as respectivas operações indicadas por um terceiro vetor de caracteres de 20 posições também fornecido pelo usuário, 
contendo as quatro operações aritméticas em qualquer combinação, 
armazenando os resultados num quarto vetor.*/

#include <stdio.h>

#define TAMANHO 20

void preencherVetorInt(int v[], const char *nome) {
    for (int i = 0; i < TAMANHO; i++) {
        printf("Digite o valor do %d elemento do vetor %s: ", i + 1, nome);
        scanf("%d", &v[i]);
    }
}

void calcularOperacoes(int v1[], int v2[], char opcoes, int resultado[]) {
    for (int i = 0; i < TAMANHO; i++) {
        switch (opcoes) {
            case '+':
                resultado[i] = v1[i] + v2[i];
                break;
            case '-':
                resultado[i] = v1[i] - v2[i];
                break;
            case '*':
                resultado[i] = v1[i] * v2[i];
                break;
            case '/':
                if (v2[i] != 0) {
                    resultado[i] = v1[i] / v2[i];
                } else {
                    printf("Divisao por zero na posicao %d! Resultado definido como 0.\n", i + 1);
                    resultado[i] = 0;
                }
                break;
            default:
                printf("Operacao invalida!\n");
                resultado[i] = 0;
                break;
        }
    }
}

void exibirResultados(int resultado[]) {
    printf("\nResultados das operacoes:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Resultado %d: %d\n", i + 1, resultado[i]);
    }
}

int main() {
    int v1[TAMANHO], v2[TAMANHO], resultado[TAMANHO];
    char opcoes;

    preencherVetorInt(v1, "A");
    preencherVetorInt(v2, "B");

    do {
        printf("Digite a operacao a ser realizada (+, -, *, /): ");
        scanf(" %c", &opcoes);
    } while (opcoes != '+' && opcoes != '-' && opcoes != '*' && opcoes != '/');

    calcularOperacoes(v1, v2, opcoes, resultado);

    exibirResultados(resultado);

    return 0;
}
