#include <stdio.h>

int main() {
    int i, j, k;
    int rows = 5; // Number of rows in the upper half (including the middle row)

    // Upper half of the diamond (including the middle row)
    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print asterisks
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the diamond (excluding the middle row)
    for (i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print asterisks
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
