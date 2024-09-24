#include <stdio.h>

int eVogal(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char str[100];
    int ditongos = 0, hiatos = 0, duplas = 0;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (eVogal(str[i]) && eVogal(str[i+1])) {
            if ((str[i] == 'a' && str[i+1] == 'i') || (str[i] == 'e' && str[i+1] == 'i') || 
                (str[i] == 'o' && str[i+1] == 'i') || (str[i] == 'a' && str[i+1] == 'u') ||
                (str[i] == 'o' && str[i+1] == 'u') || (str[i] == 'e' && str[i+1] == 'u')) {
                ditongos++;
            } else {
                hiatos++;
            }
        }
        
        if (str[i] == str[i+1] && str[i] != '\n') {
            duplas++;
        }
    }

    printf("Ditongos: %d\n", ditongos);
    printf("Hiatos: %d\n", hiatos);
    printf("Duplas de letras repetidas: %d\n", duplas);

    return 0;
}
