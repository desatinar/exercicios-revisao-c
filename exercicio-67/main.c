#include <stdio.h>
#include <locale.h>

//Dado um n�mero n na base decimal, escreva uma fun��o recursiva em C que imprime este n�mero na base bin�ria.

int binario(int x){
	if(x > 1){
		binario(x / 2);
	}
	printf("%d", x % 2);
}

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int num;
	
	printf("Digite um n�mero para saber sua base binaria: ");
	scanf("%d", &num);
	printf("\n");
	binario(num);
	printf("\n\n");
}
