// Repositório usado de referência:
// https://github.com/KingTimer12/TimerScripts-DLL/blob/master/src/headers/api.h

#include <stdlib.h>
#include <string.h>

#ifndef ALUNO_H
#define ALUNO_H

struct Aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};

double mean(struct Aluno* aluno);

#endif