#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MaxCaracteres 8

void lerNomeUsuario(char *nome){
    char Nome;
    int i = 0;
    printf("Digite o nome de usuario (ate 8 caracteres): ");
    while (i < MaxCaracteres && (Nome = getchar()) != '\n'){
        nome[i++] = Nome;
    }
    printf("\n");
}

void lerSenha(char *senha){
    char Senha;
    int i = 0;
    printf("Digite a senha (ate 8 caracteres): ");
    while (i < MaxCaracteres && (Senha = getchar()) != '\n'){
        senha[i++] = Senha;
        putchar('*');
    }
    printf("\n");
}

int main(){
    char nomeUsuario[MaxCaracteres + 1]; 
    char senhaUsuario[MaxCaracteres + 1]; 
    char nomeLogin[MaxCaracteres + 1]; 
    char senhaLogin[MaxCaracteres + 1]; 
  
    lerNomeUsuario(nomeUsuario);
    lerSenha(senhaUsuario);
  
    printf("Login:\n");
    lerNomeUsuario(nomeLogin);
    lerSenha(senhaLogin);

    if (strcmp(nomeUsuario, nomeLogin) == 0 && strcmp(senhaUsuario, senhaLogin) == 0){
        printf("Acesso liberado\n");
    } else{
        printf("Acesso negado\n");
    }
    return 0;
}
