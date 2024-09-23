#include "../headers/utils.h"

int countWords(char *phrase, char *word);

int main() {
    char phrase[1000];
    char word[100];

    printf("Digite uma frase: ");
    fgets(phrase, sizeof(phrase), stdin);
    phrase[strcspn(phrase, "\n")] = '\0';

    printf("Digite uma palavra: ");
    scanf("%s", word);

    int occurrences =  countWords(phrase, word);

    printf("A palavra '%s' aparece %d vezes na frase\n", word, occurrences);

    return 0;
}