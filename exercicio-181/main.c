#include <stdio.h>
int copiar_ate_espaco(char* origem, char* destino, int limite) {
int i;
for (i = 0; i < limite; i++) {
if (origem[i] == ' ' || origem[i] == '\0') {
break;
}
destino[i] = origem[i];
}
destino[i] = '\0';
return i; 
}
int main() {
char origem[] = "Olá, mundo!";
char destino[20];   
int caracteres_copiados = copiar_ate_espaco(origem, destino, sizeof(origem) - 1); 
printf("Caracteres copiados: %d\n", caracteres_copiados);
printf("Destino: '%s'\n", destino);
return 0;
}
