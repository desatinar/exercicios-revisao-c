#include <stdio.h>
int main() {
int notas[10][3],pior_prova[3]={0,0,0};
printf("Digite as notas de 10 alunos em 3 provas:\n");
for(int i=0;i<10;i++) {
for(int j=0;j<3;j++) {
printf("Aluno %d - Prova %d: ",i+1,j+1);
scanf("%d",&notas[i][j]);
}}
for(int i=0;i<10;i++) {
int menor_nota=notas[i][0],indice_menor=0;
for(int j=1;j<3;j++) {
if(notas[i][j]<menor_nota) {
menor_nota=notas[i][j];
indice_menor=j;
}}
pior_prova[indice_menor]++;
}
printf("Número de alunos cuja pior nota foi na prova 1: %d\n",pior_prova[0]);
printf("Número de alunos cuja pior nota foi na prova 2: %d\n",pior_prova[1]);
printf("Número de alunos cuja pior nota foi na prova 3: %d\n",pior_prova[2]);
return 0;
}
