#include <stdio.h>
#define TOTAL_QUESTOES 10
#define TOTAL_ALUNOS 3
#define NOTA_MINIMA_APROVACAO 7.0

int main() {
    char gabarito[TOTAL_QUESTOES];
    int matricula[TOTAL_ALUNOS];
    char respostas[TOTAL_ALUNOS][TOTAL_QUESTOES];
    int notas[TOTAL_ALUNOS] = {0}; 
    int aprovados = 0;             

    
    printf("Digite o gabarito da prova (10 questões - a, b, c, d ou e):\n");
    for (int i = 0; i < TOTAL_QUESTOES; i++) {
        printf("Questão %d: ", i + 1);
        scanf(" %c", &gabarito[i]);
    }

    
    for (int i = 0; i < TOTAL_ALUNOS; i++) {
        printf("\nDigite a matrícula do aluno %d: ", i + 1);
        scanf("%d", &matricula[i]);

        printf("Digite as respostas do aluno %d (10 questões - a, b, c, d ou e):\n", i + 1);
        for (int j = 0; j < TOTAL_QUESTOES; j++) {
            printf("Resposta da questão %d: ", j + 1);
            scanf(" %c", &respostas[i][j]);

            
            if (respostas[i][j] == gabarito[j]) {
                notas[i]++;
            }
        }
    }

    // Exibe os resultados de cada aluno
    printf("\nResultados:\n");
    for (int i = 0; i < TOTAL_ALUNOS; i++) {
        printf("Matrícula do aluno: %d\n", matricula[i]);
        printf("Respostas: ");
        for (int j = 0; j < TOTAL_QUESTOES; j++) {
            printf("%c ", respostas[i][j]);
        }
        printf("\nNota: %d\n", notas[i]);

        // Verifica se o aluno foi aprovado
        if (notas[i] >= NOTA_MINIMA_APROVACAO) {
            aprovados++;
        }
    }

    // Calcula e exibe o percentual de aprovação
    float percentualAprovacao = (float)aprovados / TOTAL_ALUNOS * 100;
    printf("\nPercentual de aprovação: %.2f%%\n", percentualAprovacao);

    return 0;
}
