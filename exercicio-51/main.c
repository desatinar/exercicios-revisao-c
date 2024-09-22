#include <stdio.h>

int situacao_aluno(float media_final, int numero_faltas, int total_horas_aula) {
    float frequencia;
    
    // Calcula a frequência do aluno
    frequencia = ((total_horas_aula - numero_faltas) / (float)total_horas_aula) * 100;
    
    // Verifica se a média é maior ou igual a 60 e a frequência maior ou igual a 75%
    if (media_final >= 60 && frequencia >= 75) {
        return 1;  // Aprovado
    } else {
        return 0;  // Reprovado
    }
}

int main() {
    float media;
    int faltas, horas_aula;
    
    // Recebe os valores do aluno
    printf("Informe a média final do aluno (0 a 100): ");
    scanf("%f", &media);
    printf("Informe o número de faltas: ");
    scanf("%d", &faltas);
    printf("Informe a quantidade de horas-aula no semestre: ");
    scanf("%d", &horas_aula);

    // Verifica a situação do aluno
    if (situacao_aluno(media, faltas, horas_aula)) {
        printf("O aluno foi aprovado.\n");
    } else {
        printf("O aluno foi reprovado.\n");
    }

    return 0;
}
