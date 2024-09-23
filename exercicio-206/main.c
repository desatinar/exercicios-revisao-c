#include <stdio.h>

int replace(char str[]) {
    int count = 0; 
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-'; 
            count++;      
        }
    }
    return count;
}

int main() {
    char str[100]; 

    printf("Digite uma string (máximo 99 caracteres): ");
    fgets(str, sizeof(str), stdin);

    int substituicoes = replace(str);

    printf("String modificada: %s", str);
    printf("Número de substituições feitas: %d\n", substituicoes);

    return 0;
}
