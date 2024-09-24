#include "aluno.h"
#include "../headers/utils.h"
#include <stdio.h>

typedef struct {
    int matricula;
    char nome[30];
    float n1,n2,n3;
} Aluno;

int main() {
    char path[100];

    concatPath(path, "alunos.txt");

    FILE *file = fopen(path, "r");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    struct Aluno alunos[10];
    char line[150];
    int i = 0;

    while (fgets(line, sizeof(line), file) && i < 10) {
        char *token = strtok(line, ";");
        strcpy(alunos[i].nome, token);

        token = strtok(NULL, ";");
        alunos[i].matricula = atoi(token);

        token = strtok(NULL, ";");
        alunos[i].n1 = atof(token);

        token = strtok(NULL, ";");
        alunos[i].n2 = atof(token);

        token = strtok(NULL, ";");
        alunos[i].n3 = atof(token);

        i++;
    }

    fclose(file);

    for (int j = 0; j < i; j++) {
        struct Aluno* aluno = &alunos[j];
        printf("Nome: %s, Matricula: %d, Nota: %.2f\n", alunos[j].nome, alunos[j].matricula, mean(aluno));
    }

    return 0;
}