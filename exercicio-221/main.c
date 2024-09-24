#include <stdio.h>
#include <string.h>
#define MAX_LOJAS 100
typedef struct {
char nome[50];
char telefone[15];
float preco;
} Loja;
int main() {
Loja lojas[MAX_LOJAS];
int contador=0;
float soma_precos=0.0;
strcpy(lojas[contador].nome,"Loja A");
strcpy(lojas[contador].telefone,"1234-5678");
lojas[contador++].preco=1200.00;
strcpy(lojas[contador].nome,"Loja B");
strcpy(lojas[contador].telefone,"2345-6789");
lojas[contador++].preco=1150.00;
strcpy(lojas[contador].nome,"Loja C");
strcpy(lojas[contad
