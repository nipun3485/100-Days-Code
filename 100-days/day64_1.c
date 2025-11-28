#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    
    printf("Enter the string: ");
    scanf("%[^\n]%*c", s);  // read full line including spaces

    int freq[256] = {0};  // frequency of characters
    int left = 0, maxLen = 0;

    for (int right = 0; s[right] != '\0'; right++) {
        char c = s[right];
        freq[(unsigned char)c]++;

        // If character repeats, shrink window
        while (freq[(unsigned char)c] > 1) {
            freq[(unsigned char)s[left]]--;
            left++;
        }

        // Update maximum length
        int windowLen = right - left + 1;
        if (windowLen > maxLen)
            maxLen = windowLen;
    }

    printf("%d\n", maxLen);

    return 0;
}

