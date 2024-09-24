#include <stdio.h>
int main() {
int i,maior_periodo_aceleracao=0,periodo_velocidade_constante=0,inicio_frenagem=0,maior_aceleracao=0,instante_maior_aceleracao=0,periodo_sem_diminui_velocidade=0,max_periodo_sem_diminui_velocidade=0,velocidades[60];
printf("Digite as velocidades em m/s (60 valores):\n");
for(i=0;i<60;i++)scanf("%d",&velocidades[i]);
for(i=1;i<60;i++) {
if(velocidades[i]<velocidades[i-1]) {
if(periodo_velocidade_constante>0)periodo_velocidade_constante=0;
if(inicio_frenagem==0)inicio_frenagem=i;
} else {
if(inicio_frenagem>0) {
printf("Frenagem mais abrupta começou no instante: %d\n",inicio_frenagem);
inicio_frenagem=0;
}
}
int aceleracao=velocidades[i]-velocidades[i-1];
if(aceleracao>maior_aceleracao) {
maior_aceleracao=aceleracao;
instante_maior_aceleracao=i;
}
if(velocidades[i]>=velocidades[i-1]) {
periodo_sem_diminui_velocidade++;
if(periodo_sem_diminui_velocidade>max_periodo_sem_diminui_velocidade)max_periodo_sem_diminui_velocidade=periodo_sem_diminui_velocidade;
} else {
periodo_sem_diminui_velocidade=0;
}
if(velocidades[i]==velocidades[i-1])periodo_velocidade_constante++;
else periodo_velocidade_constante=0;
}
printf("Maior período sem diminuir a velocidade: %d segundos\n",max_periodo_sem_diminui_velocidade+1);
if(inicio_frenagem>0)printf("Frenagem mais abrupta começou no instante: %d\n",inicio_frenagem);
printf("Maior aceleração: %d m/s² no instante: %d\n",maior_aceleracao,instante_maior_aceleracao);
printf("Maior período de velocidade constante: %d segundos\n",periodo_velocidade_constante+1);
return 0;
}
