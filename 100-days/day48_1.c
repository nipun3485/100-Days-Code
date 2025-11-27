#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // If lengths differ, cannot be rotation
    if (strlen(str1) != strlen(str2)) {
        printf("Not a rotation.\n");
        return 0;
    }

    // Make temp = str1 + str1  (concatenate)
    strcpy(temp, str1);
    strcat(temp, str1);

    // If str2 is a substring of temp → rotation
    if (strstr(temp, str2) != NULL)
        printf("Rotation.\n");
    else
        printf("Not a rotation.\n");

    return 0;
}

