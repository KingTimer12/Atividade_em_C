#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100];
    char temp[100];

    printf("Primeira palavra: ");
    gets(str1);
    printf("Segunda palavra: ");
    gets(str2);
    printf("terceira palavra: ");
    gets(str3);

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