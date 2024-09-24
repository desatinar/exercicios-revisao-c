#include <stdio.h>
#include <string.h>
#include <ctype.h>
void formatar_nome(char* nome,char* resultado) {
char* token,sobrenome[100]="",iniciais[100]="";
token=strtok(nome," ");
while(token!=NULL) {
if(strlen(token)>2) {
if(strlen(sobrenome)==0)strcpy(sobrenome,token);
else sprintf(iniciais,"%s %c.",iniciais,toupper(token[0]));
}
token=strtok(NULL," ");
}
sprintf(resultado,"%s%s",sobrenome,iniciais);
}
int main() {
char nome[10
