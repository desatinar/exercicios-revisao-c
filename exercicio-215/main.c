#include <stdio.h>
#include <string.h>
int main() {
char str[51];
int contagem[256]={0};
printf("Digite uma string (máx. 50 caracteres): ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]=0;
for(int i=0;str[i]!='\0';i++) {
contagem[(unsigned char)str[i]]++;
}
printf("Estatística dos caracteres:\n");
for(int i=0;i<256;i++) {
if(contagem[i]>0) {
printf("'%c' = %d\n",i,contagem[i]);
}
}
return 0;
}
