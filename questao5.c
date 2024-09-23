#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int countOccurrences(char *phrase, char *word) {
    int count = 0;
    toLowerCase(phrase);
    toLowerCase(word);

    char *pos = phrase;
    int wordLen = strlen(word);

    while ((pos = strstr(pos, word)) != NULL) {
        count++;
        pos += wordLen;
    }

    return count;
}

int main() {
    char phrase[1000];
    char word[100];

    printf("Digite uma frase: ");
    fgets(phrase, sizeof(phrase), stdin);
    phrase[strcspn(phrase, "\n")] = '\0';

    printf("Digite uma palavra: ");
    scanf("%s", word);

    int occurrences = countOccurrences(phrase, word);

    printf("A palavra '%s' aparece %d vezes na frase\n", word, occurrences);

    return 0;
}