#include "../headers/utils.h"
#include <string.h>

#define MAX_WORD_LENGTH 100

int main() {
    char path[MAX_WORD_LENGTH], filename[MAX_WORD_LENGTH], word[MAX_WORD_LENGTH], temp[MAX_WORD_LENGTH];
    FILE *file;
    int count = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", filename);
    printf("Digite a palavra a ser buscada: ");
    scanf("%s", word);
    toLowerCase(word);
    
    concatPath(path, filename);

    // strcat(path, FOLDER_ARCHIVES);
    // strcat(path, filename);

    file = fopen(path, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fscanf(file, "%s", temp) != EOF) {
        toLowerCase(temp);
        if (strcmp(temp, word) == 0) count++;
    }

    fclose(file);

    printf("A palavra %s aparece %d vezes no arquivo\n", word, count);

    return 0;
}