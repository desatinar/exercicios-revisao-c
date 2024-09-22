#include <stdio.h>
#include <locale.h>

//Fazer um programa que recebe um s�mbolo de opera��o do usu�rio (+, -, / ou *)
//e dois n�meros reais. O programa deve retornar o resultado da opera��o recebida sobre estes dois n�meros.

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float n1, n2;
	char op;
	
	printf("Digite dois numeros: ");
	scanf("%f %f", &n1, &n2);
	printf("\nOPERA��ES:\n+\n-\n*\n/\n\nQual opera��o deseja realizar? ");
	scanf(" %c", &op);
	
	if (op == '+'){
		printf("\n%2.f + %2.f = %2.f", n1, n2, n1 + n2);
	}
	else if (op == '-'){
		printf("\n%2.f - %2.f = %2.f", n1, n2, n1 - n2);
	}
	else if (op == '*'){
		printf("\n%2.f * %2.f = %2.f", n1, n2, n1 * n2);
	}
	else if (op == '/'){
		printf("\n%2.f / %2.f = %2.f", n1, n2, n1 / n2);
	}
	else{
		printf("\nOp��o inv�lida!");
	}
}
