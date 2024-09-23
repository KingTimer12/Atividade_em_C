#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 100

void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char filename[MAX_WORD_LENGTH], word[MAX_WORD_LENGTH], temp[MAX_WORD_LENGTH];
    FILE *file;
    int count = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", filename);
    printf("Digite a palavra a ser buscada: ");
    scanf("%s", word);

    toLowerCase(word);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fscanf(file, "%s", temp) != EOF) {
        toLowerCase(temp);
        if (strcmp(temp, word) == 0) {
            count++;
        }
    }

    fclose(file);

    printf("A palavra %s aparece %d vezes no arquivo\n", word, count);

    return 0;
}