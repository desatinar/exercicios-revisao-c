#include <stdio.h>
int main(){
  int totaltempo, horas, minutos, segundos;
printf("Digite o tempo em segundos: ");
 scanf("%d", &totaltempo);
horas = totaltempo / 3600;
minutos = (totaltempo % 3600) / 60;
segundos = totaltempo % 60;
printf("Tempo equivalente: %d horas, %d minutos e %d segundos\n", horas, minutos, segundos);
}
