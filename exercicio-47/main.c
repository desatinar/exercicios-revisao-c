//Um passageiro corre à sua velocidade máxima de 8 m/s para pegar um trem. Quando está à distância d da porta de entrada, 
//o trem principia a rodar com aceleração constante a = 1 m/(s*s), afastando-se.
//Se d = 30 m e se o passageiro continua a correr, conseguirá ou não pegar o trem? 
//Responda a essa pergunta elaborando um programa em C que simula os deslocamentos do passageiro e do trem, 
//com intervalos de tempo variando entre 1 s e 0,1 s. Avalie os resultados obtidos frente ao resultado analítico (obtido através da resolução da equação).
//A distância crítica de separação inicial é chamada de dc. 
//Adaptar o programa anterior para variar a distância inicial d e obter a distância crítica por comparação. 
//Com a distância crítica de separação dc, qual a velocidade do trem quando o passageiro consegue pegá-lo? 
//Qual é a velocidade média do trem no intervalo de tempo t = 0 até este instante? Qual é o valor de dc?
//Fazer um programa em C para desenhar a função posição x(t) do trem, com x = 0 em t = 0. No mesmo gráfico, 
//desenhar a função x(t) do passageiro, com diversas distâncias de separação inicial d, 
//incluindo a distância d = 30 m e a distância crítica de separação dc que lhe permite pegar o trem por um átimo.

#include <stdio.h>
#include <math.h>

int simular(double d, double it, double *tempo_final, double *velocidade_trem_final, FILE *arquivo) {
    double velocidade_passageiro = 8.0;  
    double aceleracao_trem = 1.0;        
    double posicao_passageiro = 0.0;  
    double posicao_trem = 0.0;        
    double tempo = 0.0;             
    double velocidade_trem = 0.0;  
	      
    fprintf(arquivo, "t,x_passageiro,x_trem,d\n");
    while (posicao_passageiro < posicao_trem + d) {
        posicao_passageiro = velocidade_passageiro * tempo;
        posicao_trem = 0.5 * aceleracao_trem * tempo * tempo;
        velocidade_trem = aceleracao_trem * tempo;

        tempo += it;
        if (tempo > 20) {
            return 0;
        }
    }
    *tempo_final = tempo;
    *velocidade_trem_final = velocidade_trem;
    return 1; 
    fprintf(arquivo, "%.2f,%.2f,%.2f,%.2f\n", tempo, posicao_passageiro, posicao_trem + d, d);
}

int main() {
    double it = 0.1;  
    double d = 30.0;  
    double dc = 0.0;  
    double tempo_final = 0.0;  
    double velocidade_trem_final = 0.0; 
    double velocidade_trem_media = 0.0; 
    
    FILE *arquivo = fopen("movimento.csv", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (double d_atual = 0.0; d_atual <= 100.0; d_atual += 0.1) {
        if (simular(d_atual, it, &tempo_final, &velocidade_trem_final, arquivo)) {
            dc = d_atual;
        } else {
            break;
        }
    }
    
    velocidade_trem_media = velocidade_trem_final / 2;

    printf("Distancia critica de separacao inicial (dc): %.2f m\n", dc);
    printf("Tempo em que o passageiro pegou o trem: %.2f s\n", tempo_final);
    printf("Velocidade final do trem: %.2f m/s\n", velocidade_trem_final);
    printf("Velocidade media do trem: %.2f m/s\n", velocidade_trem_media);
    
    fclose(arquivo);
    
    printf("Dados salvos no arquivo movimento.csv.\n");

    return 0;
}
