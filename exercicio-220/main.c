#include <stdio.h>


struct Horario {
    int hora;
    int minuto;
};

struct Carro {
    char placa[10];
    char modelo[30];
    struct Horario entrada;
    struct Horario saida;
};


int calcularMinutos(struct Horario entrada, struct Horario saida) {
    int minutosEntrada = entrada.hora * 60 + entrada.minuto;
    int minutosSaida = saida.hora * 60 + saida.minuto;
    return minutosSaida - minutosEntrada;
}


float calcularValor(int totalMinutos) {
    int totalHoras = totalMinutos / 60;
    int minutosRestantes = totalMinutos % 60;
    float valor = 0.0;

  
    if (totalHoras >= 1) {
        valor += 5.0;
        totalHoras--;
    } else {
        
        valor += 5.0 * ((float)totalMinutos / 60.0);
        return valor;
    }

   
    valor += totalHoras * 2.0;
    valor += (2.0 * ((float)minutosRestantes / 60.0)); 

    return valor;
}

int main() {
    struct Carro carro;

    
    printf("Digite a placa do carro: ");
    scanf("%s", carro.placa);

    printf("Digite o modelo do carro: ");
    scanf("%s", carro.modelo);

    printf("Digite a hora de entrada (hh mm): ");
    scanf("%d %d", &carro.entrada.hora, &carro.entrada.minuto);

    printf("Digite a hora de saída (hh mm): ");
    scanf("%d %d", &carro.saida.hora, &carro.saida.minuto);

   
    int totalMinutos = calcularMinutos(carro.entrada, carro.saida);

   
    float valor = calcularValor(totalMinutos);

   
    printf("\nDados do carro:\n");
    printf("Placa: %s\n", carro.placa);
    printf("Modelo: %s\n", carro.modelo);
    printf("Horário de entrada: %02d:%02d\n", carro.entrada.hora, carro.entrada.minuto);
    printf("Horário de saída: %02d:%02d\n", carro.saida.hora, carro.saida.minuto);
    printf("Tempo total: %d minutos\n", totalMinutos);
    printf("Valor devido: R$ %.2f\n", valor);

    return 0;
}
