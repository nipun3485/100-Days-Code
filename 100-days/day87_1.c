#include <stdio.h>

int main() {
    // Define enum for roles
    enum Role { ADMIN = 1, USER, GUEST };

    int role;

    printf("Select Role:\n");
    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");

    printf("Enter choice (1-3): ");
    scanf("%d", &role);

    switch (role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;

        case USER:
            printf("Hello User! You have limited access.\n");
            break;

        case GUEST:
            printf("Welcome Guest! You have view-only access.\n");
            break;

        default:
            printf("Invalid role selected.\n");
            break;
    }

    return 0;
}

