#include <time.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define FOLDER_ARCHIVES "../arquivos"

#ifndef TIMEFORMAT_H
#define TIMEFORMAT_H

void concatPath(char *dist, char *src);

void timeFormat(time_t *now, char *buffer);
void cpuUsed(double *cpu_used, const clock_t *end, const clock_t *start);

void toLowerCase(char *str);
int countWords(char *phrase, char *word);

#endif