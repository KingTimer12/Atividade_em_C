#include "aluno.h"

double mean(struct Aluno* aluno) {
    return (aluno->n1 + aluno->n2 + aluno->n3)/3;
}