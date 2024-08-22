//Escreva um programa que calcule o salário semanal de um trabalhador. 
//As entradas são o número de horas trabalhadas na semana e o valor da hora. 
//Até 40h/semana não se acrescenta nenhum adicional. 
//Acima de 40h e até 60h há um bônus de 50% para essas horas. 
//Acima de 60h há um bônus de 100% para essas horas.
#include <stdio.h>
#include <stdlib.h>

#define BONUS_50 0.50
#define BONUS_100 1.00

main(){
	float hr;
	float valor_hr;
	float salario = 0.0;
	float aumento;
	
	printf("DIGITE A QUANTIDADE DE HORAS TRABALHADAS NA SEMANA:");
	scanf("%f", &hr);
	printf("\nDIGITE O VALOR DA HORA TRABALHADA:");
	scanf("%f", &valor_hr);
	
	if(hr <= 40) {
		
		salario = hr * valor_hr;
		printf("SALARIO SEMANAL:%.2f", salario);
		
	}else
	if(hr > 40 && hr <= 60) {
		
		aumento = (salario * (1 + BONUS_50));
		printf("SALARIO SEMANAL:%.2f", aumento);
		
	}else
	if(hr > 60) {
		
		aumento = (salario * (1 + BONUS_100));
		printf("SALARIO SEMANAL:%.2f", aumento);
		
	}
	
	return 0;
	
}
