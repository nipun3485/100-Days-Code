#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char longest[200];
    int maxLen = 0, currLen = 0;
    int i = 0, start = 0, longestStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Loop through the string
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                longestStart = start;
            }
            currLen = 0;
            start = i + 1;
        }
        i++;
    }

    // Check last word
    if (currLen > maxLen) {
        maxLen = currLen;
        longestStart = start;
    }

    // Copy longest word
    for (i = 0; i < maxLen; i++) {
        longest[i] = str[longestStart + i];
    }
    longest[maxLen] = '\0';

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}

