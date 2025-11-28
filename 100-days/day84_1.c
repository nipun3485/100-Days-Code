#include <stdio.h>

int main() {
    // Define enum
    enum Status { SUCCESS, FAILURE, TIMEOUT };

    enum Status status;

    // Ask user to enter a status code
    printf("Enter status (0=SUCCESS, 1=FAILURE, 2=TIMEOUT): ");
    scanf("%d", &status);

    // Print message based on status
    switch (status) {
        case SUCCESS:
            printf("Operation Successful\n");
            break;
        case FAILURE:
            printf("Operation Failed\n");
            break;
        case TIMEOUT:
            printf("Operation Timed Out\n");
            break;
        default:
            printf("Invalid Status Code\n");
            break;
    }

    return 0;
}

