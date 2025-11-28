#include <stdio.h>

int main() {
    // Enum for months
    enum Month {
        JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE,
        JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
    };

    const char *monthNames[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    int days[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    // Print all months with days
    for (int m = JANUARY; m <= DECEMBER; m++) {
        printf("%-10s : %d days\n", monthNames[m], days[m]);
    }

    return 0;
}

