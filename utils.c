#include "headers/utils.h"

void concatPath(char *dist, char *src) {
    strcat(dist, FOLDER_ARCHIVES);
    strcat(dist, src);
}

void timeFormat(time_t *now, char *buffer) {
    time(now);
    struct tm *local = localtime(now);
    strftime(buffer, sizeof(buffer), "%I:%M %p", local);
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