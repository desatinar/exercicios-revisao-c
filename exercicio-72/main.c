#include <stdio.h>

int main() {
	
 int v[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
printf("ANTES:\n");
for (int i = 0; i < 10; i++) {
printf("%d\n", v[i]);}
v[4] = 100;
printf("\nDEPOIS:\n");
for (int i = 0; i < 10; i++) {
printf("%d\n", v[i]);}
return 0;
}
