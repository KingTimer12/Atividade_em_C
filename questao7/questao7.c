#include "../headers/utils.h"

#define FILE_1 "arquivo1.txt"
#define FILE_2 "arquivo2.txt"
#define FILE_OUTPUT "resultado.txt"

void concatPath(char *dist, char *src);

int main() {
    char *file1;
    char *file2;
    char *output_file;
    
    concatPath(file1, FILE_1);
    concatPath(file2, FILE_2);
    concatPath(output_file, FILE_OUTPUT);

    FILE *f1 = fopen(file1, "r");
    FILE *f2 = fopen(file2, "r");
    FILE *fout = fopen(output_file, "w");

    if (f1 == NULL || f2 == NULL || fout == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return 1;
    }

    int num_lines;
    fscanf(f1, "%d", &num_lines);
    fscanf(f2, "%d", &num_lines);

    int val1, val2;
    for (int i = 0; i < num_lines; i++) {
        fscanf(f1, "%d", &val1);
        fscanf(f2, "%d", &val2);
        fprintf(fout, "%d\n", val1 + val2);
    }

    fclose(f1);
    fclose(f2);
    fclose(fout);

    return 0;
}