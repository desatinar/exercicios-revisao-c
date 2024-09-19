#include <stdio.h>
#define NUM_ALUNOS 10

int main() {
    int nAluno[NUM_ALUNOS];
    float aAluno[NUM_ALUNOS];
    int i;
    int Baixo = 0, Alto = 0;

    // dados dos alunos
    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite o numero do aluno %d: ", i + 1);
        scanf("%d", &nAluno[i]);
        printf("Digite a altura do aluno %d (em metros): ", i + 1);
        scanf("%f", &aAluno[i]);

        // mais baixo
        if (aAluno[i] < aAluno[Baixo]) {
            Baixo = i;
        }
        // mais alto
        if (aAluno[i] > aAluno[Alto]) {
            Alto = i;
        }
    }
    
    printf("O aluno mais baixo e o numero %d com altura de %.2f metros.\n", nAluno[Baixo], aAluno[Baixo]);
    printf("O aluno mais alto e o numero %d com altura de %.2f metros.\n", nAluno[Alto], aAluno[Alto]);

    return 0;
}
