#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];

    printf("Enter a string: ");
    scanf("%[^\n]%*c", s);   // read full line including spaces

    // Convert first character to uppercase (if alphabet)
    if (s[0] != '\0') {
        s[0] = toupper(s[0]);
    }

    // Convert all other characters to lowercase
    for (int i = 1; s[i] != '\0'; i++) {
        s[i] = tolower(s[i]);
    }

    printf("%s\n", s);

    return 0;
}

