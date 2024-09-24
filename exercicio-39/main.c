#include <stdio.h>
#include <string.h>
int contemSequencia(int n1,int n2) {
char str1[20],str2[20];
sprintf(str1,"%d",n1);
sprintf(str2,"%d",n2);
return strstr(str1,str2)!=NULL;
}
int main() {
int n1,n2;
printf("Digite dois inteiros positivos n1 e n2: ");
scanf("%d%d",&n1,&n2);
if(contemSequencia(n1,n2)) {
printf("%d co
