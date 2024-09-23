#include <stdio.h>
int main() {
char str[21];
char caracter;
int i, j = 0;
printf("Digite uma string (maximo 20 caracteres): ");
fgets(str, sizeof(str), stdin);
printf("Digite o caractere a ser removido: ");
scanf(" %c", &caracter);
char resultado[21]; // Array para armazenar o resultado
for (i = 0; str[i] != '\0'; i++) {
if (str[i] != caracter) {
resultado[j] = str[i];
 j++;
}
}
resultado[j] = '\0'; // Adiciona o terminador da string
printf("String resultante: %s\n", resultado);
return 0;
}
