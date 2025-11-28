#include <stdio.h>

int main(void) {
    // Enumeration: by default SUNDAY = 0, MONDAY = 1, ..., SATURDAY = 6
    enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

    const char *dayNames[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"
    };

    printf("Day name\tInteger value\n");
    printf("-------------------------------\n");

    for (int d = SUNDAY; d <= SATURDAY; d++) {
        printf("%-9s\t% d\n", dayNames[d], d);
    }

    return 0;
}

