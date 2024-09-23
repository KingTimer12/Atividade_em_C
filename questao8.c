#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[100];
    int matricula;
    double nota;
} Aluno;

int main() {
    FILE *file = fopen("alunos.txt", "r");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    Aluno alunos[10];
    char linha[150];
    int i = 0;

    while (fgets(linha, sizeof(linha), file) && i < 10) {
        char *token = strtok(linha, ";");
        strcpy(alunos[i].nome, token);

        token = strtok(NULL, ";");
        alunos[i].matricula = atoi(token);

        token = strtok(NULL, ";");
        alunos[i].nota = atof(token);

        i++;
    }

    fclose(file);

    for (int j = 0; j < i; j++) {
        printf("Nome: %s, Matricula: %d, Nota: %.2f\n", alunos[j].nome, alunos[j].matricula, alunos[j].nota);
    }

    return 0;
}