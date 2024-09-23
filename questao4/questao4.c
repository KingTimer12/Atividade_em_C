#include <stdio.h>
#include <string.h>

#define CHAR_LEN 100

int main() {
    char str1[CHAR_LEN], str2[CHAR_LEN], str3[CHAR_LEN];
    char temp[CHAR_LEN];

    printf("Primeira palavra: ");
    scanf("%s", str1);
    printf("Segunda palavra: ");
    scanf("%s", str2);
    printf("terceira palavra: ");
    scanf("%s", str3);

    if (strcmp(str1, str2) > 0) {
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }
    if (strcmp(str1, str3) > 0) {
        strcpy(temp, str1);
        strcpy(str1, str3);
        strcpy(str3, temp);
    }
    if (strcmp(str2, str3) > 0) {
        strcpy(temp, str2);
        strcpy(str2, str3);
        strcpy(str3, temp);
    }

    printf("Strings em ordem:\n");
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);

    return 0;
}