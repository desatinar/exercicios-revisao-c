#include <stdio.h>
int calcular_duracao_jogo(int hora_inicio, int minuto_inicio, int hora_termino, int minuto_termino)
{
    int minutos_inicio = hora_inicio * 60 + minuto_inicio;
    int minutos_termino = hora_termino * 60 + minuto_termino;
    int duracao;
    if (minutos_termino >= minutos_inicio)
    {
        duracao = minutos_termino - minutos_inicio;
    }
    else
    {
        duracao = (24 * 60 - minutos_inicio) + minutos_termino;
    }
    return duracao;
}
int main()
{
    int hora_inicio, minuto_inicio, hora_termino, minuto_termino;
    printf("Digite a hora de início do jogo (0-23): ");
    scanf("%d", &hora_inicio);
    printf("Digite os minutos de início do jogo (0-59): ");
    scanf("%d", &minuto_inicio);
    printf("Digite a hora de término do jogo (0-23): ");
    scanf("%d", &hora_termino);
    printf("Digite os minutos de término do jogo (0-59): ");
    scanf("%d", &minuto_termino);
    int duracao = calcular_duracao_jogo(hora_inicio, minuto_inicio, hora_termino,
                                        minuto_termino);
    printf("A duração do jogo é de %d minutos.\n", duracao);
    return 0;
}
