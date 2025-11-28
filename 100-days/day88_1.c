#include <stdio.h>

int main() {
    // Define enum
    enum Role { ADMIN, USER, GUEST, SUPERADMIN };

    // Matching names for printing
    const char *roleNames[] = {
        "ADMIN", "USER", "GUEST", "SUPERADMIN"
    };

    // Print all enum values
    printf("Enum Name      Value\n");
    printf("-----------------------\n");

    for (int i = ADMIN; i <= SUPERADMIN; i++) {
        printf("%-12s %d\n", roleNames[i], i);
    }

    return 0;
}

