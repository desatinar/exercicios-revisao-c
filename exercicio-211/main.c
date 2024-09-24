#include <stdio.h>
#include <string.h>

int main() {
    char nomes[100][50];
    int i = 0, n;

    printf("Digite os nomes (digite 'fim' para parar):\n");
  
    do {
        scanf("%s", nomes[i]);
    } while (strcmp(nomes[i++], "fim") != 0);

    n = i - 1;

    for (i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(nomes[i], nomes[j]) > 0) {
                char temp[50];
                strcpy(temp, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], temp);
            }
        }
    }

    printf("\nNomes em ordem alfabetica:\n");
    for(i = 0; i < n; i++) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}
