#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

#define BUFLEN 1024

void cebolinhaString(char* s, char* buffer) {
    int i = 0, j = 0;
    int ultimoEspaco = -1;
    int ultimoR = 0;

    while (s[i] != '\0') {
        if (s[i] == 'R' || s[i] == 'r') {
            if (i == ultimoEspaco + 1 || s[i-1] == ' ') {
                buffer[j++] = s[i] == 'R' ? 'R' : 'r';
                ultimoR = 1;
            } else if (ultimoR == 1) {
               
            } else {
                buffer[j++] = s[i] == 'R' ? 'L' : 'l';
                ultimoR = 1;
            }
        } else {
            buffer[j++] = s[i];
            ultimoR = 0;
        }

        if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n') {
            ultimoEspaco = i;
        }

        i++;
    }

    buffer[j] = '\0';
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

    char bufferCebolinha1[strlen(buffer1) + 1];
    char bufferCebolinha2[strlen(buffer2) + 1];

    cebolinhaString(buffer1, bufferCebolinha1);
    cebolinhaString(buffer2, bufferCebolinha2);

    printf("Nova string 1: %s\n", bufferCebolinha1);
    printf("Nova string 2: %s\n", bufferCebolinha2);

    return 0;
}
