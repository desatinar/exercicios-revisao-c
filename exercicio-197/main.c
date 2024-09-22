#include <stdio.h>
#include <locale.h>
#include <string.h>

/*Fa�a um programa que dado 2 palavras, determine:
Se as palavras s�o iguais;
Caso as palavras sejam diferentes, qual delas tem maior comprimento (n�o esquecer a possibilidade de existirem palavras diferentes de mesmo tamanho);
Verifique se a segunda palavra � uma sub string da primeira:

Exemplo: Palavra 1= casamento
Palavra 2 = casa
*/

int main(){
  setlocale (LC_ALL, "Portuguese");
  char p1[100], p2[100];
  
  printf("Digite a primeira palavra: ");
  scanf("%s", p1);
  printf("Digite a segunda palavara: ");
  scanf("%s", p2);
  
  
  if (strcmp(p1, p2) == 0) {
  	  printf("\nAs palavras s�o iguais.\n");
  } 
  else {
  	  printf("\nAs palavras s�o diferentes.\n");
  }
  
  
  int tamanho1 = strlen(p1);
  int tamanho2 = strlen(p2);
  
  if (tamanho1 > tamanho2){
	  printf("A primeira palavra � maior que a segunda palavra.\n");
  }
  else if (tamanho2 > tamanho1){
	  printf("A segunda palavra � maior que a primeira palavra.\n");
  }
  else{
	  printf("As duas palavras tem tamanhos iguais\n");
  }
  
  
  int ponteiro = strstr(p1, p2);
  
  if(ponteiro != NULL){
	  printf("A segunda palavra � substring da primeira\n");
  }
  else{
	  printf("A segunda palavra n�o � substring da primeira\n");
  }
  return 0;
  
}
