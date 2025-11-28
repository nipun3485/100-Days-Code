#include <stdio.h>

int main() {
    // Define enum for menu choices
    enum Menu { ADD = 1, SUBTRACT, MULTIPLY };

    int choice;
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("\nMenu:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");

    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case ADD:
            printf("Result = %.2f\n", a + b);
            break;

        case SUBTRACT:
            printf("Result = %.2f\n", a - b);
            break;

        case MULTIPLY:
            printf("Result = %.2f\n", a * b);
            break;

        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}

