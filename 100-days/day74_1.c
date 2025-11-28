#include <stdio.h>

int main() {
    char src[100], dest[100];
    FILE *fpSrc, *fpDest;
    int ch;

    // Take filenames from user
    printf("Enter source file name: ");
    scanf("%s", src);

    printf("Enter destination file name: ");
    scanf("%s", dest);

    // Open source in read mode
    fpSrc = fopen(src, "r");
    if (fpSrc == NULL) {
        printf("Error: Could not open source file.\n");
        return 1;
    }

    // Open destination in write mode
    fpDest = fopen(dest, "w");
    if (fpDest == NULL) {
        printf("Error: Could not create destination file.\n");
        fclose(fpSrc);
        return 1;
    }

    // Copy character by character
    while ((ch = fgetc(fpSrc)) != EOF) {
        fputc(ch, fpDest);
    }

    // Close both files
    fclose(fpSrc);
    fclose(fpDest);

    printf("File copied successfully from %s to %s\n", src, dest);

    return 0;
}

