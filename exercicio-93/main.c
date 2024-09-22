#include <stdio.h>
#include <locale.h>

//Escreva um programa que leia n�meros inteiros no intervalo [0,50] e os armazene em um
//vetor com 10 posi��es.  Preencha um segundo vetor apenas com os n�meros �mpares do primeiro 
//vetor. Imprima os dois vetores, 2 elementos por linha.

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int num, cont=0, cont2=0;
	int vet1[10], vet2[10];
	
	
	while (cont < 10){
	   	printf(" %d    |   Digite um n�mero inteiro entre 0 e 50: ", cont+1);
		scanf("%d", &num);
	
		if(num >= 0 && num <= 50){
			vet1[cont] = num;
			cont++;
		}
		else {
			printf("\n\nN�mero fora do intervalo de 0 e 50.\n\n");
		}
	}
	
	for (cont = 0; cont < 10; cont++) {
		if (vet1[cont] % 2 != 0) {
			vet2[cont2] = vet1[cont];
            cont2++;
        }
    }
	
	printf("\n\t\tVETOR 1:\n");
	for(cont = 0; cont < 10; cont++){
		printf("\t%d\t\t", vet1[cont]);
		
		if ((cont + 1) % 2 == 0) {
			printf("\n");
		}
	}
	
    printf("\n\t\tVETOR 2:\n");
    for (cont = 0; cont2 > 0 && cont < cont2; cont++) {
        printf("\t%d\t\t", vet2[cont]);
        if ((cont + 1) % 2 == 0) {
            printf("\n");
        }
    }
    printf("\n");
	
	return 0;
}
