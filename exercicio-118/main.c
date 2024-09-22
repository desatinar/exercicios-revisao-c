#include <stdio.h>

#define NUM_QUARTEIROES 100

int main(){
    // exemplo de vetores (substitua com seus dados)
    float velocidade_maxima[NUM_QUARTEIROES] = { /* preencha com dados */ };
    float velocidade_veiculo[NUM_QUARTEIROES] = { /* preencha com dados */ };
    
    
    int quarteiroes_excesso_ate_20 = 0;
    int quarteiroes_excesso_acima_20 = 0;
    float multas = 0.0;
    int reincidencias[NUM_QUARTEIROES] = {0};
    
    for (int i = 0; i < NUM_QUARTEIROES; i++) {
        if (velocidade_veiculo[i] > velocidade_maxima[i] && velocidade_veiculo <= velocidade_maxima[i] * 1.2) {
            quarteiroes_excesso_ate_20++;
            multas += 200 * (1 + 0.5 * reincidencias[i]);
            reincidencias[i]++;
        } else if (velocidade_veiculo[i] > velocidade_maxima[i] * 1.2) {
            quarteiroes_excesso_acima_20++;
            multas += 300 * (1 + 0.5 * reincidencias[i]);
            reincidencias[i]++;
        }
    }
    
    // resultados
    printf("quarteirões com excesso até 20%%: %d\n", quarteiroes_excesso_ate_20);
    printf("quarteirões com excesso acima de 20%%: %d\n", quarteiroes_excesso_acima_20);
    printf("valor total das multas: R$ %.2f\n", multas);
    
    return 0;
}
