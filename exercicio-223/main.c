#include <stdio.h>
#include <locale.h>

//Escreva uma fun��o que recebe 3 float's e retorna uma struct que tem 3 campos do tipo float: 
//menor, maior e meio. A fun��o deve analisar os valores e preencher a struct.
//MaMeMe classifica (float n1, float n2, float n3);


typedef struct{
	float menor;
	float maior;
	float meio;
} MaMeMe;

MaMeMe Classifica(float n1, float n2, float n3){
	MaMeMe resultado;
	
	if ((n1<n2) && (n1<n3) && (n2<n3)) {
		printf ("%.2f %.2f %.2f",n1, n2, n3);}
	else if ((n3<n2) && (n3<n1) && (n2<n1)) {
    	printf ("%.2f %.2f %.2f",n3, n2, n1);}
	else if ((n1<n2) && (n1<n3) && (n3<n2)) {
    	printf ("%.2f %.2f %.2f",n1, n3, n2);}
	else if ((n3<n1) && (n3<n2) && (n1<n2)) {
    	printf ("%.2f %.2f %.2f",n3, n1, n2);}
	else if ((n2<n1) && (n2<n3) && (n1<n3)) {
    	printf ("%.2f %.2f %.2f",n2, n3, n1);}
	else if ((n3<n2) && (n2<n1) && (n3<n1)) {
	    printf ("%.2f %.2f %.2f",n2, n3, n1);}
	else if ((n1==n2) && (n2<n3)) {
	    printf ("%.2f %.2f %.2f",n1, n2, n3);}
	else if ((n1==n3) && (n1<n2)) {
	    printf ("%.2f %.2f %.2f",n1, n3, n2);}
	else if ((n1<n2) && (n2==n3)) {
    	printf ("%.2f %.2f %.2f",n1, n2, n3);}
	else if ((n1==n2) && (n3<n1)) {
    	printf ("%.2f %.2f %.2f",n3, n1, n2);}
	else if ((n1==n2) && (n2<n3)) {
		printf ("%.2f %.2f %.2f",n1, n2, n3);}
	else {
		printf ("%.2f %.2f %.2f",n2, n3, n1);}

}

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float n1, n2, n3;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &n1);
	printf("Digite o segundo n�mero: ");
	scanf("%f", &n2);
	printf("Digite terceiro n�mero: ");
	scanf("%f", &n3);
	
	printf("\n");
	MaMeMe resultado = Classifica(n1, n2, n3);
	printf("\n");
	
	return 0;
}
