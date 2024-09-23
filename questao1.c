#include <stdio.h>
#include <time.h>

int main() {
    time_t rawtime;
    struct tm * timeinfo;
    char buffer[10];

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer, sizeof(buffer), "%I:%M %p", timeinfo);
    printf("Tempo atual: %s\n", buffer);
    
    return 0;
}