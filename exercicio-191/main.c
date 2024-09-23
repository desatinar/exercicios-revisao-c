#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

#define BUFLEN 1024

char* empacotaString(char* string) {
    
    int tamanho = strlen(string);

    
    char* novo_local = (char*) malloc(tamanho + 1);

    
    strcpy(novo_local, string);

    return novo_local;
}

int main() {
    char buffer1[BUFLEN];
    char buffer2[BUFLEN];

    printf("Digite a primeira palavra: ");
    fgets(buffer1, BUFLEN, stdin);

    
    buffer1[strcspn(buffer1, "\n")] = 0;

    printf("Digite a segunda palavra: ");
    fgets(buffer2, BUFLEN, stdin);

    buffer2[strcspn(buffer2, "\n")] = 0;

    char* novo_local1 = empacotaString(buffer1);
    char* novo_local2 = empacotaString(buffer2);

    printf("Nova string 1: %s\n", novo_local1);
    printf("Nova string 2: %s\n", novo_local2);

    
    free(novo_local1);
    free(novo_local2);

    return 0;
}
