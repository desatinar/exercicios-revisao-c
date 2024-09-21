*Um dos sistemas de encriptação mais antigos é atribuído a Júlio César: se uma letra a ser encriptada 
é a letra de número N do alfabeto, substitua-a com a letra (N+K), onde K é um número inteiro constante (César utilizava K = 3).
 Usualmente consideramos o espaço como zero e todos os cálculos são realizados com módulo-27. Dessa forma,
  para K = 1 a mensagem “Ataque ao amanhecer” se torna “bubrfabpabnboifdfs”. Faça um programa que receba como
   entrada uma mensagem e um valor de K e retorne a mensagem criptografada pelo código de César. Fraquezas: apenas 26 chaves possíveis.
    É possível utilizar conhecimento da linguagem para facilitar a busca.
*/

#include <stdio.h>
#include <string.h>

#define ALFABETO 27 

char cifraCesar(char letra, int k) {
    if (letra == ' ') {
        return letra; 
    }

    int pos = letra - 'a';
    pos = (pos + k) % ALFABETO; 
    return (pos < 26) ? (pos + 'a') : ' '; 
}

void criptografar(char *mensagem, int k) {
    for (int i = 0; mensagem[i] != '\0'; i++) {
        mensagem[i] = cifraCesar(mensagem[i], k);
    }
}

int main() {
    char mensagem[100]; 
    int k;

    
    printf("Digite a mensagem (em letras minúsculas): ");
    fgets(mensagem, sizeof(mensagem), stdin);

    mensagem[strcspn(mensagem, "\n")] = 0;

    
    printf("Digite o valor de K: ");
    scanf("%d", &k);

   
    criptografar(mensagem, k);

    
    printf("Mensagem criptografada: %s\n", mensagem);

    return 0;
}
