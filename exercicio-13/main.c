#include <stdio.h>
int copiar_ate_espaco(char *src, char *dest, int max_chars) {
int count = 0;
while (count < max_chars && src[count] != '\0' && src[count] != ' ') {
dest[count] = src[count];
count++;
}
dest[count] = '\0';
return count;
}
int main() {
char source[] = "Hello World!";
char destination[50];
int chars_copied = copiar_ate_espaco(source, destination, 50);
printf("Copied %d characters: '%s'\n", chars_copied, destination);
return 0;
}
