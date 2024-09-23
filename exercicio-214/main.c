#include <stdio.h>
#include <string.h>

void insert_string(char *str1, char *str2, int pos) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    
    char temp[len1 + len2 + 1];

   
    strncpy(temp, str1, pos);

   
    temp[pos] = '\0';

   
    strcat(temp, str2);
    strcat(temp, str1 + pos);

 
    strcpy(str1, temp);
}

int main() {
    char str1[100], str2[100];
    int pos;

    printf("Enter the first string: ");
    fgets(str1, 100, stdin);
    str1[strlen(str1) - 1] = '\0'; 

    printf("Enter the second string: ");
    fgets(str2, 100, stdin);
    str2[strlen(str2) - 1] = '\0'; 

    printf("Enter the position: ");
    scanf("%d", &pos);

    insert_string(str1, str2, pos);

    printf("Result: %s\n", str1);

    return 0;
}
