#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *file1 = "arquivo1.txt";
    const char *file2 = "arquivo2.txt";
    const char *output_file = "resultado.txt";

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