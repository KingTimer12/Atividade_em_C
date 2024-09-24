#include "headers/utils.h"

void concatPath(char *dist, char *src) {
    dist[0] = '\0';
    printf("src: %s\n", src);
    printf("folder: %s\n", FOLDER_ARCHIVES);
    strcat(dist, FOLDER_ARCHIVES);
    strcat(dist, src);
    printf("dist: %s\n", dist);
}

void timeFormat(time_t *now, char *buffer) {
    time(now);
    struct tm *local = localtime(now);
    printf("sizeof %d\n", sizeof(buffer)*3);
    strftime(buffer, sizeof(buffer)*3, "%I:%M %p", local);
}

void cpuUsed(double *cpu_used, const clock_t *end, const clock_t *start) {
    *cpu_used = ((double)(*end - *start)) / CLOCKS_PER_SEC;
}

void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int countWords(char *phrase, char *word) {
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