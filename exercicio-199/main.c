#include <stdio.h>
#include <string.h>

int contarOcorrencias(char *str1, char *str2) {
    int count = 0;
    char *posicao = str1;

    // Procurar pela segunda string dentro da primeira usando strstr
    while ((posicao = strstr(posicao, str2)) != NULL) {
        count++;            // Incrementa o contador de ocorrências
        posicao += strlen(str2);  // Avança o ponteiro para evitar contar a mesma ocorrência
    }

    return count;
}

int main() {
    char str1[101], str2[101];  // Strings de até 100 caracteres + terminador nulo

    // Receber a primeira string
    printf("Digite a primeira string (máx. 100 caracteres): ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Remove o caractere de nova linha

    // Receber a segunda string
    printf("Digite a segunda string (máx. 100 caracteres): ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // Remove o caractere de nova linha

    // Contar quantas vezes a segunda string ocorre dentro da primeira
    int ocorrencias = contarOcorrencias(str1, str2);

    // Exibir o resultado
    printf("A string \"%s\" ocorre %d vezes dentro da string \"%s\".\n", str2, ocorrencias, str1);

    return 0;
}
