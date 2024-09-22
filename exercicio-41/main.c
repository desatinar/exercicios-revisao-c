#include <stdio.h>
#include <locale.h>

//Fazer um programa para encontrar todos os pares de n�meros amig�veis entre 1 e 100000. 
//Um par de n�meros � amig�vel quando cada um deles � igual � soma dos divisores do outro.

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int maximo = 100000;
	int cont, i;
	
	for (cont = 1; cont <= maximo; cont++){
		int soma_divisores = 0;
		
		for (i = 1; i <= cont / 2; i++){
			if (cont % i == 0){
				soma_divisores += i;
			}
		}
		
		if (soma_divisores > cont && soma_divisores <= maximo){
			int soma_verificacao = 0;
			
			for (i = 1; i <= soma_divisores / 2; i++ ){
				if(soma_divisores % i == 0){
					soma_verificacao += i;
				}
			}
			
			if(soma_verificacao == cont){
                printf("S�o n�meros amig�veis: %d e %d\n", cont, soma_divisores);
			}
		}
	}
	
	return 0;
}
