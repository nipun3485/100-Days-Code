#include <stdio.h>

int main() {
    char filename[100];
    char line[500];
    FILE *fp;

    // Take file name
    printf("Enter file name: ");
    scanf("%s", filename);
    getchar(); // clear leftover newline from input buffer

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Take new line of text from user
    printf("Enter text to append: ");
    fgets(line, sizeof(line), stdin);

    // Append the text
    fputs(line, fp);

    fclose(fp);

    printf("Text appended successfully.\n");

    return 0;
}

