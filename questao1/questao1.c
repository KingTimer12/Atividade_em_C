#include <stdio.h>
#include "../headers/utils.h"

void timeFormat(time_t *now, char *buffer); // para tirar o warning chato

int main() {
    time_t rawtime;
    char buffer[10];
    
    timeFormat(&rawtime, buffer);
    
    printf("Horário atual: %s\n", buffer);
    
    return 0;
}