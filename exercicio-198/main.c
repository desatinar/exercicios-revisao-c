#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


main(){
	char nome[100], telefone[40], endereco[100], info[300];
	int i, contador_letras = 0, contador_numeros = 0;
	
	printf("Informe seu nome:\n");
	scanf("%100[^\n]", nome);
	getchar();
	printf("Informe seu endereco:\n");
	scanf("%100[^\n]", endereco);
	getchar();
	printf("Informe seu telefone:\n");
	scanf("%50[^\n]", telefone);
	
	snprintf(info, sizeof(info), "%s, %s, %s", nome, endereco, telefone);
	
	for(i=0; info[i] != '\0'; i++){
		if(isalpha(info[i])){
			contador_letras++;
		}
		else if(isdigit(info[i])){
			contador_numeros++;
		}
	}
	
	printf("\n\n Quantidades de letras que pertencentes no alfabeto eh: %d\n", contador_letras);
	printf("Quantidades de numeros eh: %d", contador_numeros);
}
