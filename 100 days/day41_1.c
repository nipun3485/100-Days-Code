#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count characters manually
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }

    // Excluding the newline character added by fgets (optional)
    if (str[count - 1] == '\n') {
        count--;
    }

    printf("Total characters = %d\n", count);

    return 0;
}

