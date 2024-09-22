#include <stdio.h>
#include <locale.h>

/* Fa�a um programa que leia uma matriz de 5 linhas e 4 colunas contendo as seguintes informa��es
sobre alunos de uma disciplina, sendo todas as informa��es do tipo inteiro:

	Primeira coluna: n�mero de matr�cula (use um inteiro)
	Segunda coluna:  m�dia das provas
	Terceira coluna: m�dia dos trabalhos
	Quarta coluna: nota final 
	
Elabore um programa que:
	
	Leia as tr�s primeiras informa��es de cada aluno
	Calcule  a  nota  final  como  sendo  a  soma  da  m�dia  das  provas  e  da  m�dia  dos trabalhos
	Imprima a matr�cula do aluno que obteve a maior nota final (assuma que s� existe uma maior nota)
	Imprima a m�dia aritm�tica das notas finais
*/

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int aluno[5][4];
	int i, mat_maior;
	float soma, media, maior_nota;
	
	for (i=0; i<5; i++){
		printf("___________________________");
		printf("\n\t  ALUNO %d", i+1);
		printf("\n___________________________");
		
		printf("\nMatr�cula: ", i+1);
		scanf("%d", &aluno[i][0]);
		
		printf("\nM�dia das provas: ", i+1);
		scanf("%d", &aluno[i][1]);
		
		printf("\nM�dia dos trabalhos: ", i+1);
		scanf("%d", &aluno[i][2]);
			
		aluno[i][3] = aluno[i][1] + aluno[i][2];
		
		soma += aluno[i][3]; 
		
		if(aluno[i][3] > maior_nota) {
			maior_nota = aluno[i][3];
			mat_maior = aluno[i][0];
		}
	}
	
	media = soma/5;
	
	printf("\n\nO aluno de matr�cula %d tem a maior nota", mat_maior, maior_nota);
    printf("\nA m�dia aritm�tica das notas finais �: %.2f\n", media);
	
	return 0;
}
