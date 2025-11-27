#include <stdio.h>

int main() {
    char str[200];
    int i = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        // When a word ends (space or end of string)
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            int end = i - 1;

            // Reverse the word manually
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;  // Move to next word's start
        }
        i++;
    }

    printf("Reversed words sentence:\n%s", str);

    return 0;
}

