typedef struct {
    int hora;
    int minutos;
    int segundos;
} horario;

int segundosEntre(horario h1, horario h2) {
    // covertendo ambos os horários para segundos desde o início do dia 
    int segundos_h1 = h1.hora * 3600 + h1.minutos * 60 + h1.segundos;
    int segundos_h2 = h2.hora * 3600 + h2.minutos * 60 + h2.segundos;
    
    // retornando a diferença de tempo em segundos
    return segundos_h2 - segundos_h1;
}
