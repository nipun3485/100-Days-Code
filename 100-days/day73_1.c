#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100];
    char c;

    int characters = 0, words = 0, lines = 0;
    int inWord = 0; // flag to track word boundaries

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    while ((c = fgetc(fp)) != EOF) {
        characters++;

        // Count lines
        if (c == '\n')
            lines++;

        // Detect word start
        if (!isspace(c) && inWord == 0) {
            inWord = 1;
            words++;
        }
        // Detect end of a word
        else if (isspace(c)) {
            inWord = 0;
        }
    }

    // If file doesn't end with newline, lines still fine
    // No need to adjust

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}

