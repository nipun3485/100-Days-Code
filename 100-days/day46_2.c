#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};

    printf("Enter a lowercase string: ");
    scanf("%[^\n]", str);

    // Count frequency
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2) {
                printf("First repeating character: %c\n", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}

