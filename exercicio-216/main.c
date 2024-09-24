#include <stdio.h>
#include <string.h>
#include <ctype.h>
int ehPalindromo(const char* str) {
int inicio=0,fim=strlen(str)-1;
while(inicio<fim) {
while(inicio<fim&&!isalnum(str[inicio])) inicio++;
while(inicio<fim&&!isalnum(str[fim])) fim--;
if(tolower(str[inicio])!=tolower(str[fim])) {
return 0;
}
inicio++;
fim--;
}
return 1;
}
int main() {
char str[100];
printf("Digite uma string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]=0;
if(ehPalindromo(str)) {
printf("A string contém um palíndromo.\n");
} else {
printf("A string não contém um palíndromo.\n");
}
return 0;
}
