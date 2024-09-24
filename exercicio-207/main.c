#include <stdio.h>
#define MAX_LINE_LENGTH 256
int eh_letra(char c) {
return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}
int eh_espaco(char c) {
return c == ' ' || c == '\t' || c == '\n';
}
int contar_palavras(const char* linha) {
int count = 0;
int em_palavra = 0; 
for (const char* p = linha; *p; p++) {
if (eh_espaco(*p)) {
em_palavra = 0; 
} else {
if (em_palavra == 0) {
count++; 
em_palavra = 1;
}}}
return count;
}
tar letras em uma linha
int contar_letras(const char* linha) {
int count = 0;
for (const char* p = linha; *p; p++) {
if (eh_letra(*p)) {
count++; // Conta apenas letras
}
}
return count;
}
void processar_texto() {
char linha[MAX_LINE_LENGTH];
int total_palavras = 0, total_linhas = 0, total_linhas_brancas = 0, total_letras = 0;
while (fgets(linha, sizeof(linha), stdin) != NULL) {
total_linhas++;
total_letras += contar_letras(linha);
if (linha[0] == '\n') {
total_linhas_brancas++;
} else {
total_palavras += contar_palavras(linha);
}
}
printf("Número total de linhas: %d\n", total_linhas);
printf("Número de linhas em branco: %d\n", total_linhas_brancas);
printf("Número total de palavras: %d\n", total_palavras);
printf("Número total de letras: %d\n", total_letras);
}
int main() {
printf("Digite o texto (Ctrl-D ou Ctrl-Z para finalizar):\n");
processar_texto();
return 0;
}
