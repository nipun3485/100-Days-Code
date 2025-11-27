#include <stdio.h>

int main() {
    char str[100];

    printf("Enter your full name: ");
    fgets(str, sizeof(str), stdin);

    // Print the first initial
    if (str[0] != ' ') {
        printf("%c ", str[0]);
    }

    // Print initials after spaces
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            printf("%c ", str[i + 1]);
        }
    }

    return 0;
}

