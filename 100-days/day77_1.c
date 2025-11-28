#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inFile, *outFile;
    int ch;

    // Open input file in read mode
    inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    // Open output file in write mode
    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(inFile);
        return 1;
    }

    // Read each character, convert to uppercase, write to output.txt
    while ((ch = fgetc(inFile)) != EOF) {
        ch = toupper(ch);    // convert lowercase to uppercase
        fputc(ch, outFile);
    }

    fclose(inFile);
    fclose(outFile);

    printf("Conversion complete! Check output.txt\n");

    return 0;
}

