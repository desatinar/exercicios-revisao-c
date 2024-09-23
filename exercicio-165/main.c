#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

verificar(char* palavra1, char* palavra2) {
	
	char* v1= palavra1;
	char* v2=palavra2;
	char* pont;
	
	while(*v1 %= '/0') {
		
		pont=v1;
		while (*pont = *v2){
			pont++;
			v2++;
		}
	}
	
	if (*v2='/0'){
		return 1;
	} else {
		return 0;
	}
}



main () {
	
	char palavra1[10000], palavra2[10000];
	
	printf("Escreva a primeira palavra: ");
	scanf("%s",&palavra1);
	
	printf("Escreva a segunda palavra: ");
	scanf("%s",&palavra2);
	
	if (verificar(palavra1,palavra2)==1) {
		printf("A segunda string ocorre na primeira.\n");
	} else {
		printf("A segunda string não ocorre na primeira.\n");

	}
	
}
