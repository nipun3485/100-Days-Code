#include <stdio.h>

int main() {
    char name[100];
    int i = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Print the first initial
    if (name[0] != ' ')
        printf("%c. ", name[0]);

    // Find and print the surname (last word)
    int lastStart = 0;
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0')
            lastStart = i + 1;  // start of last word
    }

    // Print the surname
    for (i = lastStart; name[i] != '\0' && name[i] != '\n'; i++) {
        printf("%c", name[i]);
    }

    return 0;
}

