#include <stdio.h>

int main() {
    // Enum with explicit and implicit integer values
    enum Example {
        A = 5,   // assigned 5
        B,       // becomes 6
        C = 10,  // assigned 10
        D        // becomes 11
    };

    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);

    return 0;
}

