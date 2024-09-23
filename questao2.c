#include <stdio.h>
#include <time.h>

int main() {
    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    char buffer[10];

    strftime(buffer, sizeof(buffer), "%I:%M %p", local);

    int hours_in_seconds = local->tm_hour * 3600;
    int minutes_in_seconds = local->tm_min * 60;
    int seconds = local->tm_sec;

    int total_seconds = hours_in_seconds + minutes_in_seconds + seconds;

    printf("Horário atual: %s\n", buffer);
    printf("Horário em segundos: %ds\n", total_seconds);

    return 0;
}